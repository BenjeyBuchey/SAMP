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

	// Use this for initialization
	void Start ()
	{
        //setValues(); //
	}
	
	// Update is called once per frame
	void Update ()
	{

	}

	public void Swap(List<SortingVisualItem> visualItems)
	{
		_visualItems = visualItems;
		if (_visualItems == null || _visualItems.Count == 0)
			return;

		StartCoroutine(DoSwap());
	}

	IEnumerator DoSwap()
	{
		if (sortingBox == null)
			SetSortingBox();

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
		}
	}

	private void HandleComparison(GameObject element1, GameObject element2, bool isDefaultColor)
	{
		ChangeColor(element1, element2, (int)SortingVisualType.Comparison, isDefaultColor);
		if (!isDefaultColor)
			IncreaseComparisonCounter();

		//if (!isDefaultColor)
		//	SwapElements(element1, element2);blablaasdfasd

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

	//public void swap(List<GameObject> _queue)
	//{
	//	queue = _queue;
	//	if (queue == null || queue.Count < 2)
	//		return;

	//       StartCoroutine(doSwap());
	//}

	//   IEnumerator doSwap()
	//   {
	//       for (int i = 0; i < queue.Count; i = i + 2)
	//       {
	//           go1 = queue[i];
	//           go2 = queue[i+1];

	//           if (go1 == null || go2 == null)
	//               yield return null;

	//		updateSwapSpeed();
	//		changeColor(true);

	//           dest1 = go2.transform.position;
	//           dest2 = go1.transform.position;
	//           getRotationPoint();

	//           float yOffset = getOffsetY();
	//           Vector3 temp1 = rotationPoint;
	//           temp1.y = temp1.y + yOffset;

	//           Vector3 temp2 = rotationPoint;
	//           temp2.y = temp2.y - yOffset;

	//           LeanTween.move(go1, new Vector3[] {dest2, temp1, temp1, dest1 }, swapSpeed);
	//           LeanTween.move(go2, new Vector3[] {dest1, temp2, temp2, dest2 }, swapSpeed);
	//		//int id = LeanTween.move(go1, new Vector3[] { dest2, temp1, temp1, dest1 }, 1.5f).id;
	//		//while (LeanTween.isTweening(id))
	//		//	yield return null;

	//		//yield return new WaitForSeconds(swapSpeed);

	//		while (Vector3.Distance(go1.transform.position, dest1) > 0.1f && Vector3.Distance(go2.transform.position, dest2) > 0.1f)
	//			yield return null;

	//		increaseSwapCounter();

	//		changeColor(false);
	//       }
	//	stopSortingboxUsage();
	//	Destroy(this);
	//}

	private void increaseCounter()
	{
		Text score = GameObject.Find ("SwapCounter").GetComponent<Text> ();

		if (score == null)
			return;

		score.GetComponent<SwapCounterScript> ().incCounter ();
	}

	//private void increaseSwapCounter()
	//{
	//	if (go1 == null) return;

	//	SortingBoxScript sbs = go1.GetComponentInParent<SortingBoxScript>();
	//	if (sbs == null) return;

	//	sbs.incSwapsCounter();
	//}

	private void SetSortingBox()
	{
		if (_visualItems == null || _visualItems.Count == 0) return;

		GameObject element = _visualItems[0].Element1;
		if (element == null) return;

		sortingBox = element.transform.parent.gameObject;
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

	//private void changeColor(bool is_moving)
	//{
	//	MoveHelperScript mhs = new MoveHelperScript();
	//	mhs.changeColor (go1, go2, is_moving, ref prevColor, ref prevColor2);
	//}

	private void ChangeColor(GameObject element1, GameObject element2, int type, bool isDefaultColor)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		mhs.ChangeColor(element1, element2, type, isDefaultColor);
	}

	//private void getRotationPoint()
	//{
	//	float distance = Mathf.Abs (go1.transform.position.z - go2.transform.position.z);
	//	float z = 0.0f;
	//	if (go1.transform.position.z > go2.transform.position.z)
	//		z = go1.transform.position.z - distance / 2;
	//	else
	//		z = go1.transform.position.z + distance / 2;

	//	rotationPoint = new Vector3(go1.transform.position.x,
	//		go1.transform.position.y,
	//		z);

	//}

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

	//private void correctPositions()
	//{
	//	if (go1.transform.position != dest1 || go2.transform.position != dest2) 
	//	{
	//		go1.transform.rotation = Quaternion.identity;
	//		go1.transform.position = dest1;
	//		go2.transform.rotation = Quaternion.identity;
	//		go2.transform.position = dest2;
	//	}
	//}

	//private float getOffsetY()
 //   {
 //       if (go1 == null || go2 == null)
 //           return 0.0f;

 //       return go1.GetComponentInParent<SortingBoxScript>().getOffsetY(go1, go2);
 //   }

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
		//GameObject go = GameObject.Find("SwapSpeedSlider");
		//if (go == null) return;

		//Slider s = go.GetComponent<Slider>();
		//if (s == null) return;

		//float modifier = (type == (int)SortingVisualType.Comparison) ? 2.0f : 1.0f;

		//swapSpeed = s.value*-1/ modifier;

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
}
