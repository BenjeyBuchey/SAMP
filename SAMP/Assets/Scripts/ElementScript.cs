using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ElementScript : MonoBehaviour {

	private GameObject[] elementArray;
	private int locked;
	private QuickSortScript q;
	// Use this for initialization
	void Start () {

		locked = 0;
		q = gameObject.AddComponent<QuickSortScript> ();
		initElements ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void initElements()
	{
//		elementArray = GameObject.FindGameObjectsWithTag ("BasicElement");
//		float position_z = -24.0f;
//		float[] scale_array = fillScaleArray (elementArray.Length);
//		int i = 0;
//		foreach (GameObject go in elementArray) 
//		{
//			go.GetComponentInChildren<TextMesh>().text = (i).ToString ();
//			Rigidbody rb = go.GetComponent<Rigidbody>();
//			rb.transform.localScale = new Vector3(scale_array[i],scale_array[i],scale_array[i]);
//			rb.position = new Vector3(rb.position.x,rb.position.y,position_z);
//			resetElementText (go);
//			position_z += 5.0f;
//			i++;
//		}
//		shuffleGameObjects ();
//		printGameObjects ();

		elementArray = GameObject.FindGameObjectsWithTag ("Elements");
		float position_z = -24.0f;
		float[] scale_array = fillScaleArray (elementArray.Length);
		int i = 0;
		foreach (GameObject go in elementArray) 
		{
			go.GetComponentInChildren<TextMesh>().text = (i).ToString ();
			go.GetComponent<SingleElementScript> ().setElementId (i);
			Rigidbody rb = go.GetComponentInChildren<Rigidbody>();
			rb.transform.localScale = new Vector3(scale_array[i],scale_array[i],scale_array[i]);
			//rb.position = new Vector3(rb.position.x,rb.position.y,position_z);
			go.transform.position = new Vector3(rb.position.x,rb.position.y,position_z);
			position_z += 5.0f;
			i++;
		}
		shuffleGameObjects ();
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

		//shuffleArray (scale_array);

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

	private void shuffleGameObjects()
	{
		for (int i = 0; i < elementArray.Length; i++) 
		{
//			GameObject tmp = elementArray [i];
//			Vector3 a_posi = elementArray [i].GetComponent<Rigidbody> ().position;
//
//			int r = Random.Range (i, elementArray.Length);
//			Vector3 b_posi = elementArray [r].GetComponent<Rigidbody> ().position;
//
//			elementArray [i] = elementArray [r];
//			elementArray [i].GetComponent<Rigidbody> ().position = a_posi;
//
//			elementArray [r] = tmp;
//			elementArray [r].GetComponent<Rigidbody> ().position = b_posi;

			GameObject tmp = elementArray [i];
			Vector3 a_posi = elementArray [i].transform.position;

			int r = Random.Range (i, elementArray.Length);
			Vector3 b_posi = elementArray [r].transform.position;

			elementArray [i] = elementArray [r];
			elementArray [i].transform.position = a_posi;

			elementArray [r] = tmp;
			elementArray [r].transform.position = b_posi;
		}
	}

	private void printGameObjects()
	{
		for (int i = 0; i < elementArray.Length; i++) 
		{
//			Debug.Log (elementArray [i].name + " - Scale: " + elementArray [i].GetComponent<Rigidbody> ().transform.localScale
//				+ " - Position: " + elementArray [i].GetComponent<Rigidbody> ().position);
			Debug.Log (elementArray [i].name + " - Scale: " + elementArray [i].GetComponentInChildren<Rigidbody> ().transform.localScale
				+ " - Position: " + elementArray [i].GetComponentInChildren<Rigidbody> ().position);

		}
	}

	public void printElementIDs()
	{
		Debug.Log ("Element IDs");
		foreach (GameObject go in elementArray) 
		{
			Debug.Log (go.GetComponent<SingleElementScript> ().getElementId ());
		}
	}

	public void sort()
	{
		if (locked == 1)
			return;

		// TODO: this doesn't wait till animation has finished 
		locked = 1;
		q.startSort(elementArray, 0, elementArray.Length);
		locked = 0;
	}

	public GameObject[] getElementArray()
	{
		return elementArray;
	}
}
