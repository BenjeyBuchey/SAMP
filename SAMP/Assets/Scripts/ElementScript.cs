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
		quickSort (0,elementArray.Length-1);
		locked = 0;
	}

	private void quickSort(int left, int right)
	{
		int i = left, j = right;
		GameObject pivot = elementArray[(left + right) / 2];

		while (i <= j)
		{
			while (elementArray[i].transform.localScale.x < pivot.transform.localScale.x)
			{
				i++;
			}
			
			while (elementArray[i].transform.localScale.y > pivot.transform.localScale.x)
			{
				j--;
			}
			
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

	private void swap(int i, int j)
	{
		// change color
		Color prev = elementArray [i].GetComponent<Renderer> ().material.color;
		elementArray [i].GetComponent<Renderer> ().material.color = Color.green;
		elementArray [j].GetComponent<Renderer> ().material.color = Color.green;

		Rigidbody tmp = elementArray[i].GetComponent<Rigidbody>();
		Rigidbody rb_i = elementArray[i].GetComponent<Rigidbody>();
		Rigidbody rb_j = elementArray[j].GetComponent<Rigidbody>();

		rb_i.position = new Vector3(rb_j.position.x,rb_j.position.y,rb_j.position.z);
		rb_j.position = new Vector3(tmp.position.x,tmp.position.y,tmp.position.z);

		elementArray [i].GetComponent<Renderer> ().material.color = prev;
		elementArray [j].GetComponent<Renderer> ().material.color = prev;
	}
}
