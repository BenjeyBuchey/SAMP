using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System;

public class MoveScript : MonoBehaviour {

	private float swapSpeed = 1.5f, mergeDiffY = 10.0f;
	private List<SortingVisualItem> _visualItems;
	private GameObject sortingBox = null;
	private int initCounter = 0, _visualizationCounter = 0;
	private string _algorithm = null;
	private List<Vector3> initPositions = new List<Vector3>();
	private List<GameState> gameStates = new List<GameState>();
	private bool isBusy = false;

	public GameObject SortingBox
	{
		get
		{
			return sortingBox;
		}

		set
		{
			sortingBox = value;
		}
	}

	// Use this for initialization
	void Start ()
	{
        //setValues(); //
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	public void StepForward()
	{
		if (isBusy) return;

		if(_visualizationCounter < _visualItems.Count)
			StartCoroutine(DoStepForward());
	}

	public void StepEnd()
	{
		if (isBusy) return;

		if (_visualizationCounter < _visualItems.Count)
			StartCoroutine(DoStepEnd());
	}

	public void Swap(List<SortingVisualItem> visualItems, string algorithm = null)
	{
		_visualItems = visualItems;
		_algorithm = algorithm;
		_visualizationCounter = 0;
		if (_visualItems == null || _visualItems.Count == 0) return;

		if (sortingBox == null)
			SetSortingBox();

		InitByAlgorithm();
		StartCoroutine(DoSwap());
	}

	private void InitByAlgorithm()
	{
		if (_algorithm == null) return;

		switch(_algorithm)
		{
			case Algorithms.RADIXSORT:
			case Algorithms.MERGESORT:
				DeactivateSwapsCounter();
				SetInitialPositions();
				break;
			default:
				ActivateSwapCounter();
				break;
		}
	}

	IEnumerator DoSwap()
	{
		for (; _visualizationCounter < _visualItems.Count; _visualizationCounter++)
		{
			while (IsPaused() || isBusy)
				yield return null;

			if (_visualizationCounter > 0)
				HandleVisualizationItem(_visualItems[_visualizationCounter - 1], true);

			if (_visualizationCounter >= _visualItems.Count)
			{
				Exit();
				yield break;
			}

			UpdateSwapSpeed(_visualItems[_visualizationCounter].Type);

			HandleVisualizationItem(_visualItems[_visualizationCounter], false);

			yield return new WaitForSeconds(swapSpeed);

			//while (IsPaused())
			//	yield return null;

			//HandleVisualizationItem(_visualItems[i], true);
		}

		if (_visualizationCounter <= _visualItems.Count)
			HandleVisualizationItem(_visualItems[_visualizationCounter-1], true);

		Exit();
	}

	IEnumerator DoStepForward()
	{
		isBusy = true;
		UpdateSwapSpeed(_visualItems[_visualizationCounter].Type);

		if (_visualizationCounter > 0)
			HandleVisualizationItem(_visualItems[_visualizationCounter - 1], true);

		if (_visualizationCounter >= _visualItems.Count) yield break;
		HandleVisualizationItem(_visualItems[_visualizationCounter], false);

		yield return new WaitForSeconds(swapSpeed);

		_visualizationCounter++;

		// DO LAST ITEM HERE !?

		isBusy = false;
	}

	IEnumerator DoStepEnd()
	{
		isBusy = true;
		swapSpeed = 0.1f;

		for (; _visualizationCounter < _visualItems.Count; _visualizationCounter++)
		{
			if (_visualizationCounter > 0)
				HandleVisualizationItem(_visualItems[_visualizationCounter - 1], true);

			if (_visualizationCounter >= _visualItems.Count)
			{
				Exit();
				yield break;
			}

			HandleVisualizationItem(_visualItems[_visualizationCounter], false);

			yield return new WaitForSeconds(swapSpeed);
		}

		if (_visualizationCounter <= _visualItems.Count)
			HandleVisualizationItem(_visualItems[_visualizationCounter - 1], true);

		Exit();

		isBusy = false;
	}

	void HandleVisualizationItem(SortingVisualItem item, bool isDefaultColor)
	{
		GameObject element1 = item.Element1;
		GameObject element2 = item.Element2;

		switch (item.Type)
		{
			case (int)SortingVisualType.Swap:
				HandleSwap(element1, element2, isDefaultColor);
				break;
			case (int)SortingVisualType.Comparison:
			case (int)SortingVisualType.MergeComparison:
				HandleComparison(element1, element2, item.Type, isDefaultColor);
				break;
			case (int)SortingVisualType.Radix:
				HandleRadix(element1, item.Bucket, item.BucketPosition, isDefaultColor);
				break;
			case (int)SortingVisualType.MergeArray:
				HandleMergeArray(item.Array, item.IsLeftArray, isDefaultColor);
				break;
			case (int)SortingVisualType.MergeMove:
				HandleMergeMove(element1, item.MergePosition, isDefaultColor);
				break;
		}
	}

	private void HandleMergeMove(GameObject element1, int mergePosition, bool isDefaultColor)
	{
		ChangeColor(element1, null, (int)SortingVisualType.MergeMove, isDefaultColor);

		if (!isDefaultColor)
			MoveMerge(element1, mergePosition);
	}

	private void MoveMerge(GameObject element1, int mergePosition)
	{
		Vector3 dest = GetMergeDestination(mergePosition);
		LeanTween.move(element1, dest, swapSpeed);
	}

	private void HandleMergeArray(GameObject[] array, bool isLeftArray, bool isDefaultColor)
	{
		ChangeColorArray(array, (int)SortingVisualType.MergeArray, isLeftArray, isDefaultColor);

		if (!isDefaultColor)
			MoveMergeArray(array);
	}

	private void MoveMergeArray(GameObject[] array)
	{
		if (array == null) return;

		foreach(GameObject element in array)
		{
			Vector3 dest = element.transform.position;
			dest.y += mergeDiffY;
			LeanTween.move(element, dest, swapSpeed);
		}
	}

	private void HandleRadix(GameObject element1, int bucket, int bucketPosition, bool isDefaultColor)
	{
		ChangeColor(element1, null, (int)SortingVisualType.Radix, isDefaultColor);

		if (!isDefaultColor)
			MoveRadix(element1, bucket, bucketPosition);
	}

	private void MoveRadix(GameObject element1, int bucket, int bucketPosition)
	{
		Vector3 dest = GetRadixDestination(bucket, bucketPosition, element1);
		LeanTween.move(element1, dest, swapSpeed);
	}

	private void HandleComparison(GameObject element1, GameObject element2, int type, bool isDefaultColor)
	{
		ChangeColor(element1, element2, type, isDefaultColor);
		if (!isDefaultColor)
			IncreaseComparisonCounter();
	}

	private void HandleSwap(GameObject element1, GameObject element2, bool isDefaultColor)
	{
		ChangeColor(element1, element2, (int)SortingVisualType.Swap, isDefaultColor);

		if (!isDefaultColor)
			SwapElements(element1, element2);

	}

	private void SwapElements(GameObject element1, GameObject element2)
	{
		Vector3 dest1 = element2.transform.position;
		Vector3 dest2 = element1.transform.position;
		Vector3 rotationPoint = GetRotationPoint(element1, element2);

		float yOffset = GetOffsetY(element1, element2);
		Vector3 temp1 = rotationPoint;
		temp1.y = temp1.y + yOffset;

		Vector3 temp2 = rotationPoint;
		temp2.y = temp2.y - yOffset;

		LeanTween.move(element1, new Vector3[] { dest2, temp1, temp1, dest1 }, swapSpeed);
		LeanTween.move(element2, new Vector3[] { dest1, temp2, temp2, dest2 }, swapSpeed);

		IncreaseSwapCounter();
	}

	private void increaseCounter()
	{
		Text score = GameObject.Find ("SwapCounter").GetComponent<Text> ();

		if (score == null)
			return;

		score.GetComponent<SwapCounterScript> ().incCounter ();
	}

	private void SetSortingBox()
	{
		if (_visualItems == null || _visualItems.Count == 0) return;

		GameObject element = _visualItems[0].Element1;
		if (element == null) return;

		sortingBox = element.transform.parent.gameObject;
		if (sortingBox == null) return;

		// set in use
		SortingBoxScript sbs = sortingBox.GetComponent<SortingBoxScript>();
		sbs.setInUse(true);
	}

	private void DeactivateSwapsCounter()
	{
		SortingBoxScript sbs = sortingBox.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.DeactivateSwapsCounter();
	}

	private void ActivateSwapCounter()
	{
		SortingBoxScript sbs = sortingBox.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.ActivateSwapsCounter();
	}

	private void IncreaseSwapCounter()
	{
		SortingBoxScript sbs = sortingBox.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.incSwapsCounter();
	}

	private void IncreaseComparisonCounter()
	{
		if (sortingBox == null) return;

		SortingBoxScript sbs = sortingBox.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.IncComparisonCounter();
	}

	private void ChangeColor(GameObject element1, GameObject element2, int type, bool isDefaultColor)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		mhs.ChangeColor(element1, element2, type, isDefaultColor);
	}

	private void ChangeColorArray(GameObject[] array, int type, bool isLeftArray, bool isDefaultColor)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		mhs.ChangeColor(array, type, isLeftArray, isDefaultColor);
	}

	private Vector3 GetRotationPoint(GameObject element1, GameObject element2)
	{
		float distance = Mathf.Abs(element1.transform.position.z - element2.transform.position.z);
		float z = 0.0f;
		if (element1.transform.position.z > element2.transform.position.z)
			z = element1.transform.position.z - distance / 2;
		else
			z = element1.transform.position.z + distance / 2;

		return new Vector3(element1.transform.position.x, element1.transform.position.y,z);
	}

	private float GetOffsetY(GameObject element1, GameObject element2)
	{
		if (element1 == null || element2 == null) return 0.0f;

		return sortingBox.GetComponent<SortingBoxScript>().getOffsetY(element1, element2);
	}

	private void StopSortingboxUsage()
	{
		if (sortingBox == null) return;

		SortingBoxScript sbs = sortingBox.GetComponent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.setInUse(false);
	}

	private void UpdateSwapSpeed(int type)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		swapSpeed = mhs.GetSwapSpeed(type);
	}

	private bool IsPaused()
	{
		//GameObject go = GameObject.Find("SwapManager");
		//if (go == null) return false;

		//SwapManagerScript sms = go.GetComponent<SwapManagerScript>();
		//if (sms == null) return false;

		//return sms.isPaused;

		return HelperScript.IsPaused();
	}

	private Vector3 GetRadixDestination(int bucket, int position, GameObject go)
	{
		if (initCounter >= initPositions.Count)
			initCounter = 0;

		float object_width = GetObjectWidth();
		BucketScript bs = go.GetComponentInParent<BucketScript>();
		if (bs == null) return Vector3.zero;

		List<GameObject> bucket_objects = bs.getBucketObjects();
		if (bucket_objects == null || bucket_objects.Count < bucket)
			return Vector3.zero;

		Vector3 dest = Vector3.zero;
		// bucket -1 --> move to init positions
		if (bucket == -1)
		{
			if (initCounter > initPositions.Count || initCounter < 0)
				Debug.Log("INIT COUNTER: " + initCounter);
			dest = initPositions[initCounter]; // DEBUG
			initCounter++;
		}
		else
		{
			float z_offset = 5.0f + object_width * position;
			dest = bucket_objects[bucket].transform.position;
			dest.y = dest.y - bucket_objects[bucket].transform.localScale.y / 2; //half bucket text size
			dest.z = dest.z + z_offset;
		}

		return dest;
	}

	private Vector3 GetMergeDestination(int mergePosition)
	{
		if (initPositions == null || initPositions.Count < (mergePosition + 1)) return Vector3.zero;

		return initPositions[mergePosition];
	}

	private float GetObjectWidth()
	{
		if (sortingBox == null) return 1.0f;

		SortingBoxScript sbs = sortingBox.GetComponent<SortingBoxScript>();
		if (sbs == null) return 1.0f;

		return sbs.GetMaxObjectWidth();
	}

	private void SetInitialPositions()
	{
		if (sortingBox == null) return;

		SortingBoxScript sbs = sortingBox.GetComponent<SortingBoxScript>();
		if (sbs == null) return;

		//initPositions.Clear();
		initPositions = sbs.getInitialPositionList();
	}

	private void Exit()
	{
		StopSortingboxUsage();
		//Destroy(this);
	}
}
