using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GnomeSortScript : Algorithms {

	//private GameObject[] elementArray;
    private List<GameObject> swappingQueue = new List<GameObject> ();

	public GnomeSortScript() : base (Algorithms.GNOMESORT)
	{

	}

	public List<SortingVisualItem> StartSort(GameObject[] array)
	{
		visualItems.Clear();
		elementArray = array;
		myGnomeSort();

		return visualItems;
	}

	public List<GameObject> startSort(GameObject[] array)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myGnomeSort ();

		return swappingQueue;
	}

	private void myGnomeSort() 
	{ 
		for(int i = 1;i < elementArray.Length;)
		{
			visualItems.Add(new SortingVisualItem((int)SortingVisualType.Comparison, elementArray[i - 1], elementArray[i]));
			if (getSize(i-1)<=getSize(i)) 
				i += 1;
			else
			{
				swap (i-1,i);

				i-=1; 
				if(i==0) 
					i=1;
			}
		} 
	}

	//private void swap(int i, int j)
	//{
	//	if (i == j)
	//		return;

	//	// add to queue and swap element array position
	//	swappingQueue.Add (elementArray [i]);
	//	swappingQueue.Add (elementArray [j]);

	//	GameObject tmp = elementArray [i];
	//	elementArray [i] = elementArray [j];
	//	elementArray [j] = tmp;
	//}

	private double getSize(int index)
	{
		return elementArray [index].GetComponentInChildren<Rigidbody> ().transform.localScale.x;
	}
}
