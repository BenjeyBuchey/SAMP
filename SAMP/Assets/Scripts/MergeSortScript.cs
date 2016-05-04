using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MergeSortScript : MonoBehaviour {

	private GameObject[] elementArray;
	private List<GameObject> swappingQueue;

	// Use this for initialization
	void Start () {
		swappingQueue = new List<GameObject> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void startSort(GameObject[] array)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myMergeSort ();

		if (swappingQueue != null && swappingQueue.Count >= 1) 
		{
			MoveScript m = gameObject.AddComponent<MoveScript> ();
			m.swap (swappingQueue);
		}
	}

	public void myMergeSort()
	{

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

	private double getSize(int index)
	{
		return elementArray [index].GetComponentInChildren<Rigidbody> ().transform.localScale.x;
	}
}
