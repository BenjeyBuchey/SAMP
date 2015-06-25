using UnityEngine;
using System.Collections;

public class QuickSortScript : MonoBehaviour {

	private GameObject[] elementArray;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void startSort(GameObject[] array, int left, int right)
	{
		elementArray = array;
		myQuickSort (left, right);
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
			while(left <= right && elementArray[left].transform.localScale.x <= pivot.transform.localScale.x)
				left++;
			
			while(left <= right && elementArray[right].transform.localScale.x > pivot.transform.localScale.x)
				right--;
			
			if(left > right)
			{
				swap (start,left-1);
				return left;
			}
			
			swap (left,right);
		}
	}
	
	private void swap(int i, int j)
	{
		// change color
		Color prev = elementArray [i].GetComponent<Renderer> ().material.color;
		
		elementArray [i].GetComponent<Renderer> ().material.color = Color.green;
		elementArray [j].GetComponent<Renderer> ().material.color = Color.green;
		
		float tmp_x = elementArray[i].GetComponent<Rigidbody>().position.x;
		float tmp_y = elementArray[i].GetComponent<Rigidbody>().position.y;
		float tmp_z = elementArray[i].GetComponent<Rigidbody>().position.z;
		
		// swap element coordinates
		elementArray[i].GetComponent<Rigidbody>().position = new Vector3(elementArray[j].GetComponent<Rigidbody>().position.x,
		                                                                 elementArray[j].GetComponent<Rigidbody>().position.y,
		                                                                 elementArray[j].GetComponent<Rigidbody>().position.z);
		elementArray[j].GetComponent<Rigidbody>().position = new Vector3(tmp_x,tmp_y,tmp_z);
		
		// swap element array position
		GameObject tmp = elementArray [i];
		elementArray [i] = elementArray [j];
		elementArray [j] = tmp;
		
		elementArray [i].GetComponent<Renderer> ().material.color = prev;
		elementArray [j].GetComponent<Renderer> ().material.color = prev;

	}
}
