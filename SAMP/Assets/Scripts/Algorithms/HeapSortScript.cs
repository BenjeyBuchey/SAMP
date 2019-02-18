using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class HeapSortScript : Algorithms {

	private GameObject[] elementArray;
    private List<GameObject> swappingQueue = new List<GameObject> ();

	public HeapSortScript() : base (Algorithms.HEAPSORT)
	{ }

	public List<GameObject> startSort(GameObject[] array)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myHeapSort ();

		return swappingQueue;		
	}

	private void myHeapSort()
	{
		//Build-Max-Heap
		int heapSize = elementArray.Length;
		for (int p = heapSize / 2; p >= 0; p--)
			maxHeapify(heapSize, p);

		for (int i = elementArray.Length - 1; i >= 0; i--)
		{
			//Swap
			swap(i,0);

			heapSize--;
			maxHeapify(heapSize, 0);
		}
	}

	private void maxHeapify(int heapSize, int index)
	{
		int left = 2 * index;
		int right = 2 * index + 1;
		int largest = index;

		if (left < heapSize && getSize(left) > getSize(index))
			largest = left;
		else
			largest = index;

		if (right < heapSize && getSize(right) > getSize(largest))
			largest = right;

		if (largest != index) 
		{
			swap (index, largest);

			maxHeapify (heapSize, largest);
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
