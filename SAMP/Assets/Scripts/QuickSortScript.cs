using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class QuickSortScript : MonoBehaviour {

	private GameObject[] elementArray;
	//private Dictionary<GameObject,GameObject> swappingQueue;
	private List<GameObject> swappingQueue;

	// Use this for initialization
	void Start () {
		//swappingQueue = new Dictionary<GameObject, GameObject> ();
		swappingQueue = new List<GameObject> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void startSort(GameObject[] array, int left, int right)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myQuickSort (left, right);
		if (swappingQueue != null && swappingQueue.Count >= 1) 
		{
			MoveScript m = gameObject.AddComponent<MoveScript> ();
			m.swap (swappingQueue);
		}
	}

	private void myQuickSort(int left, int right)
	{
		if (elementArray == null || elementArray.Length <= 1)
			return;
		
		if (left < right) 
		{
			int pivot_id = myPartition(left,right);
			myQuickSort(left,pivot_id-1);
			myQuickSort(pivot_id, right);
		}
	}
	
	private int myPartition(int left, int right)
	{
		int start = left;
		GameObject pivot = elementArray [start];
		left++;
		right--;
		
		while (true) 
		{
			//while(left <= right && elementArray[left].transform.localScale.x <= pivot.transform.localScale.x)
			while(left <= right && elementArray[left].GetComponentInChildren<Rigidbody>().transform.localScale.x <= pivot.GetComponentInChildren<Rigidbody>().transform.localScale.x)
				left++;
			
			//while(left <= right && elementArray[right].transform.localScale.x > pivot.transform.localScale.x)
			while(left <= right && elementArray[right].GetComponentInChildren<Rigidbody>().transform.localScale.x > pivot.GetComponentInChildren<Rigidbody>().transform.localScale.x)
				right--;
			
			if(left > right)
			{
				swap (start,left-1);
				return left;
			}
			
			swap (left,right);
		}
	}
	
	private void swap(int i, int j)
	{
		if (i == j)
			return;

		// add to queue and swap element array position
		swappingQueue.Add (elementArray [i]);
		swappingQueue.Add (elementArray [j]);

		GameObject tmp = elementArray [i];
		elementArray [i] = elementArray [j];
		elementArray [j] = tmp;
	}
}
