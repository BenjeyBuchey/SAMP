using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class Algorithms {

	public const string QUICKSORT = "QuickSort", RADIXSORT = "RadixSort", GNOMESORT = "GnomeSort", MERGESORT = "MergeSort", HEAPSORT = "HeapSort";
	private readonly string name;
	protected List<SortingVisualItem> visualItems = new List<SortingVisualItem>();
	protected GameObject[] elementArray;

	protected Algorithms(string name)
	{
		this.name = name;
	}

	public string getName()
	{
		return name;
	}

	protected void Swap(int i, int j)
	{
		if (i == j)
			return;

		// add to queue and swap element array position
		visualItems.Add(new SortingVisualItem((int)SortingVisualType.Swap, elementArray[i], elementArray[j]));

		GameObject tmp = elementArray[i];
		elementArray[i] = elementArray[j];
		elementArray[j] = tmp;
	}

	protected int GetElementSize(GameObject go)
	{
		return HelperScript.GetElementSize(go);
	}
}
