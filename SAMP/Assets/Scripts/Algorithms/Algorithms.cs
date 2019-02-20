using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Algorithms {

	public const string QUICKSORT = "QuickSort", RADIXSORT = "RadixSort", GNOMESORT = "GnomeSort", MERGESORT = "MergeSort", HEAPSORT = "HeapSort";
	private readonly string name;

	protected Algorithms(string name)
	{
		this.name = name;
	}

	public string getName()
	{
		return name;
	}
}
