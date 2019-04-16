using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class HeapSortScript : Algorithms {

	public HeapSortScript() : base (Algorithms.HEAPSORT)
	{ }

	public List<SortingVisualItem> StartSort(GameObject[] array)
	{
		visualItems.Clear();
		elementArray = array;
		myHeapSort();

		return visualItems;
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

		if (left < heapSize)
		{
			visualItems.Add(new SortingVisualItem((int)SortingVisualType.Comparison, elementArray[left], elementArray[index]));
			if (getSize(left) > getSize(index))
				largest = left;
			else
				largest = index;
		}
		else
			largest = index;

		if(right < heapSize)
		{
			visualItems.Add(new SortingVisualItem((int)SortingVisualType.Comparison, elementArray[right], elementArray[largest]));
			if (getSize(right) > getSize(largest))
				largest = right;
		}

		if (largest != index) 
		{
			swap (index, largest);

			maxHeapify (heapSize, largest);
		}
	}

	private double getSize(int index)
	{
		return elementArray [index].GetComponentInChildren<Rigidbody> ().transform.localScale.x;
	}
}
