using UnityEngine;
using System.Collections;

public class ElementScript : MonoBehaviour {

	private GameObject[] elementArray;
	private int locked;
	// Use this for initialization
	void Start () {

		locked = 0;
		initElements ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void initElements()
	{
		elementArray = GameObject.FindGameObjectsWithTag ("BasicElement");
		float position_z = -24.0f;
		float[] scale_array = fillScaleArray (elementArray.Length);
		int i = 0;
		foreach (GameObject go in elementArray) 
		{
			Rigidbody rb = go.GetComponent<Rigidbody>();
			rb.transform.localScale = new Vector3(scale_array[i],scale_array[i],scale_array[i]);
			rb.position = new Vector3(rb.position.x,rb.position.y,position_z);
			position_z += 5.0f;
			i++;
		}
	}

	private float[] fillScaleArray(int size)
	{
		float max_scale = 4.0f;
		float min_scale = 1.0f;
		float inc = (max_scale - min_scale) / (float)size;

		float[] scale_array = new float[size];
		for (int i = 0; i < scale_array.Length; i++) 
		{
			scale_array[i] = min_scale + inc*i;
		}

		shuffleArray (scale_array);

		return scale_array;
	}

	private void shuffleArray(float[] scale_array)
	{
		for (int i = 0; i < scale_array.Length; i++) 
		{
			float tmp = scale_array[i];
			int r = Random.Range (i, scale_array.Length);
			scale_array[i] = scale_array[r];
			scale_array[r] = tmp;
		}
	}

	public void sort()
	{
		if (locked == 1)
			return;

		locked = 1;
		//quickSort (0,elementArray.Length-1);
		myQuickSort (0, elementArray.Length);
		locked = 0;
	}

	private void quickSort(int left, int right)
	{
		int i = left, j = right;
		int pivot_elem = (right - left) / 2;
		GameObject pivot = elementArray[pivot_elem];
		Debug.Log ("Enter LEFT: " + left + " RIGHT: " + right);

		while (i <= j)
		{
			try{
			while (elementArray[i].transform.localScale.x < pivot.transform.localScale.x)
			{
				i++;
			}
			
			while (elementArray[j].transform.localScale.x > pivot.transform.localScale.x)
			{
				j--;
			}
			}
			catch(System.IndexOutOfRangeException e){Debug.Log ("##########################################################");
				Debug.Log (e.Message); Debug.Log ("i:" +i +"  j:" +j);}
			
			if (i <= j)
			{
				// Swap
				swap(i,j);
				
				i++;
				j--;
			}
		}
		
		// Recursive calls
		if (left < j)
		{
			quickSort(left, j);
		}
		
		if (i < right)
		{
			quickSort(i, right);
		}

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

		Debug.Log ("Enter LEFT: " + i + " RIGHT: " + j);
		Debug.Log ("BEFORE swap");
		Debug.Log (elementArray [i].GetComponent<Rigidbody> ().position.x + " " + elementArray [i].GetComponent<Rigidbody> ().position.y
			+ " " + elementArray [i].GetComponent<Rigidbody> ().position.z);


		Rigidbody rb_i = elementArray[i].GetComponent<Rigidbody>();
		Rigidbody rb_j = elementArray[j].GetComponent<Rigidbody>();
		float tmp_x = rb_i.position.x;
		float tmp_y = rb_i.position.y;
		float tmp_z = rb_i.position.z;


		rb_i.position = new Vector3(rb_j.position.x,rb_j.position.y,rb_j.position.z);
		rb_j.position = new Vector3(tmp_x,tmp_y,tmp_z);

		Debug.Log ("AFTER swap");
		Debug.Log (elementArray [i].GetComponent<Rigidbody> ().position.x + " " + elementArray [i].GetComponent<Rigidbody> ().position.y
		           + " " + elementArray [i].GetComponent<Rigidbody> ().position.z);

		elementArray [i].GetComponent<Renderer> ().material.color = prev;
		elementArray [j].GetComponent<Renderer> ().material.color = prev;
	}
}
