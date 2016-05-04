using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GnomeSortScript : MonoBehaviour {

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
		myGnomeSort ();

		if (swappingQueue != null && swappingQueue.Count >= 1) 
		{
			MoveScript m = gameObject.AddComponent<MoveScript> ();
			m.swap (swappingQueue);
		}
	}

	private void myGnomeSort() 
	{ 
		for ( int i = 1, temp_value; i < elementArray.Length; ) 
		{ 
			if ( getSize(i-1) <= getSize(i) ) 
				i += 1; 
			else 
			{ 
				swap (i - 1, i);

				i -= 1; 
				if ( i == 0 ) 
					i = 1; 
			} 
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

	private double getSize(int index)
	{
		return elementArray [index].GetComponentInChildren<Rigidbody> ().transform.localScale.x;
	}
}
