using UnityEngine;
using System.Collections;

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
		q.startSort(elementArray, 0, elementArray.Length);
		locked = 0;
	}

	public void move()
	{
		elementArray [0].GetComponent<MoveScript> ().swap (elementArray [0], elementArray [1].GetComponent<Rigidbody>().position);
		elementArray [1].GetComponent<MoveScript> ().swap (elementArray [1], elementArray [0].GetComponent<Rigidbody>().position);
	}
}
