using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System;

public class MoveScript : MonoBehaviour {

	//private GameObject go1,go2;
	//private Vector3 dest1,dest2, rotationPoint;
	//private List<GameObject> queue;
	private Color prevColor, prevColor2;
	private Text score;
	private float swapSpeed = 1.5f;
	private List<SortingVisualItem> _visualItems;
	private GameObject sortingBox = null;
	private int init_counter = 0;
	private string _algorithm = null;
	private List<Vector3> initPositions = new List<Vector3>();

	// Use this for initialization
	void Start ()
	{
        //setValues(); //
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	public void Swap(List<SortingVisualItem> visualItems, string algorithm = null)
	{
		_visualItems = visualItems;
		_algorithm = algorithm;
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
				SetInitialPositions();
				break;
		}
	}

	IEnumerator DoSwap()
	{
		for (int i = 0; i < _visualItems.Count; i++)
		{
			UpdateSwapSpeed(_visualItems[i].Type);

			HandleVisualizationItem(_visualItems[i], false);

			yield return new WaitForSeconds(swapSpeed);

			while (IsPaused())
				yield return null;

			HandleVisualizationItem(_visualItems[i], true);
		}
		StopSortingboxUsage();
		Destroy(this);
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
				HandleComparison(element1, element2, isDefaultColor);
				break;
			case (int)SortingVisualType.Radix:
				HandleRadix(element1, item.Bucket, item.BucketPosition, isDefaultColor);
				break;
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

	private void HandleComparison(GameObject element1, GameObject element2, bool isDefaultColor)
	{
		ChangeColor(element1, element2, (int)SortingVisualType.Comparison, isDefaultColor);
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

	private void IncreaseSwapCounter()
	{
		SortingBoxScript sbs = sortingBox.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.incSwapsCounter();
	}

	private void IncreaseComparisonCounter()
	{
		SortingBoxScript sbs = sortingBox.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.IncComparisonCounter();
	}

	private void ChangeColor(GameObject element1, GameObject element2, int type, bool isDefaultColor)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		mhs.ChangeColor(element1, element2, type, isDefaultColor);
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

	private void stopSortingboxUsageGlobal()
	{
		ElementScript es = gameObject.GetComponentInParent<ElementScript>();
		if (es == null) return;

		GameObject sortingbox = es.sortingbox;
		if (sortingbox == null) return;

		SortingBoxScript sbs = sortingbox.GetComponent<SortingBoxScript>();
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
		GameObject go = GameObject.Find("SwapManager");
		if (go == null) return false;

		SwapManagerScript sms = go.GetComponent<SwapManagerScript>();
		if (sms == null) return false;

		return sms.isPaused;
	}

	private Vector3 GetRadixDestination(int bucket, int position, GameObject go)
	{
		if (init_counter >= initPositions.Count)
			init_counter = 0;

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
			dest = initPositions[init_counter];
			init_counter++;
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

	private float GetObjectWidth()
	{
		if (sortingBox == null) return 1.0f;

		SortingBoxScript sbs = sortingBox.GetComponent<SortingBoxScript>();
		if (sbs == null) return 1.0f;

		return sbs.GetMaxObjectWidth();
	}

	private void SetInitialPositions()
	{
		GameObject go = _visualItems[0].Element1;
		if (go == null) return;

		SortingBoxScript sbs = go.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		initPositions.Clear();
		initPositions = sbs.getInitialPositionList();
	}
}
