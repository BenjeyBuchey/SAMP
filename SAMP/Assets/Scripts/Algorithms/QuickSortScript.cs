﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class QuickSortScript : Algorithms {

	//private GameObject[] elementArray;
    private List<GameObject> swappingQueue = new List<GameObject> ();
	//private List<SortingVisualItem> visualItems = new List<SortingVisualItem>();

	public QuickSortScript() : base (Algorithms.QUICKSORT)
	{

	}

	public List<SortingVisualItem> StartSort(GameObject[] array, int left, int right)
	{
		visualItems.Clear();
		elementArray = array;
		myQuickSort(left, right);

		return visualItems;
	}

	public List<GameObject> startSort(GameObject[] array, int left, int right)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myQuickSort (left, right);

		return swappingQueue;
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
			while(left <= right && elementArray[left].GetComponentInChildren<Rigidbody>().transform.localScale.x <= pivot.GetComponentInChildren<Rigidbody>().transform.localScale.x)
			{
				visualItems.Add(new SortingVisualItem((int)SortingVisualType.Comparison, elementArray[left], pivot));
				left++;
			}


			while (left <= right && elementArray[right].GetComponentInChildren<Rigidbody>().transform.localScale.x > pivot.GetComponentInChildren<Rigidbody>().transform.localScale.x)
			{
				visualItems.Add(new SortingVisualItem((int)SortingVisualType.Comparison, elementArray[right], pivot));
				right--;
			}
			
			if(left > right)
			{
				swap (start,left-1);
				return left;
			}
			
			swap (left,right);
		}
	}
	
	//private void swap(int i, int j)
	//{
	//	if (i == j)
	//		return;

	//	// add to queue and swap element array position
	//	swappingQueue.Add (elementArray [i]);
	//	swappingQueue.Add (elementArray [j]);
	//	visualItems.Add(new SortingVisualItem((int)SortingVisualType.Swap, elementArray[i], elementArray[j]));

	//	GameObject tmp = elementArray [i];
	//	elementArray [i] = elementArray [j];
	//	elementArray [j] = tmp;
	//}
}
