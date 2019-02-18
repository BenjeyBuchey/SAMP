using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class MergeSortScript : Algorithms {

	private GameObject[] elementArray;
    private List<GameObject> swappingQueue = new List<GameObject> ();

	public MergeSortScript() : base (Algorithms.MERGESORT)
	{

	}

	public List<GameObject> startSort(GameObject[] array)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myMergeSort (0, elementArray.Length-1);

		return swappingQueue;		
	}

	public void myMergeSort(int left, int right)
	{
		if (left < right)
		{
			int middle = (left + right) / 2;

			myMergeSort(left, middle);
			myMergeSort(middle + 1, right);

			//Merge
			GameObject[] leftArray = new GameObject[middle - left + 1];
			GameObject[] rightArray = new GameObject[right - middle];

			Array.Copy(elementArray, left, leftArray, 0, middle - left + 1);
			Array.Copy(elementArray, middle + 1, rightArray, 0, right - middle);

			int i = 0;
			int j = 0;
			Debug.Log ("NEW LOOP");
			printArray (leftArray, "LeftArray: ");
			printArray (rightArray, "RightArray: ");
			for (int k = left; k < right + 1; k++)
			{
				if (i == leftArray.Length)
				{
					swap (elementArray [k], rightArray [j]);
					elementArray[k] = rightArray[j];
					j++;
				}
				else if (j == rightArray.Length)
				{
					swap (elementArray [k], leftArray [i]);
					elementArray[k] = leftArray[i];
					i++;
				}
				else if (getGameObjectSize(leftArray[i]) <= getGameObjectSize(rightArray[j]))
				{
					swap (elementArray [k], leftArray [i]);
					elementArray[k] = leftArray[i];
					i++;
				}
				else
				{
					swap (elementArray [k], rightArray [j]);
					elementArray[k] = rightArray[j];
					j++;
				}
			}
		}
	}

	private void printArray(GameObject[] array, string name)
	{
		string s = String.Empty;
		for (int i = 0; i < array.Length; i++) 
		{
			s += array [i].GetComponent<SingleElementScript> ().getElementId ().ToString() + " ";
		}

		Debug.Log (name + s);
	}

	private void swap(GameObject go1, GameObject go2)
	{
		if (go1.GetComponent<SingleElementScript> ().getElementId () == go2.GetComponent<SingleElementScript> ().getElementId ())
			return;

		// add to queue and swap element array position
		swappingQueue.Add (go1);
		swappingQueue.Add (go2);
	}

	private double getGameObjectSize(GameObject go)
	{
		return go.GetComponentInChildren<Rigidbody> ().transform.localScale.x;
	}
}
