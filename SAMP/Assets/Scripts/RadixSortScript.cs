using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RadixSortScript : MonoBehaviour {

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
		myRadixSort ();

		if (swappingQueue != null && swappingQueue.Count >= 1) 
		{
			MoveScript m = gameObject.AddComponent<MoveScript> ();
			m.swap (swappingQueue);
		}
	}

	private void myRadixSort()
	{

	}
}
