using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterpreterInterfaceScript : MonoBehaviour {

	private GameObject[] elementArray;
	private MoveScript ms;

	// Use this for initialization
	void Start () {
		ms = gameObject.AddComponent<MoveScript> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void swap(int x, int y)
	{
		//elementArray = GameObject.FindGameObjectsWithTag ("Elements");
		elementArray = gameObject.GetComponentInParent<ElementScript> ().getElementArray ();
		Debug.Log ("Swapping " +x +" and " +y);
		fillQueue (x, y);
	}

	public double size(int x)
	{
		elementArray = GameObject.FindGameObjectsWithTag ("Elements");
		double size = 0.0;
		foreach (GameObject go in elementArray) 
		{
			if (go.GetComponent<SingleElementScript> ().getElementId () == x) 
			{
				size = go.GetComponentInChildren<Rigidbody> ().transform.localScale.x;
				Debug.Log ("Size of Element " +x + " is: " +size);
				break;
			}
		}
		return size;
	}

	private void fillQueue(int x, int y)
	{
		List<GameObject> queue = new List<GameObject> ();
		int x_pos = -1, y_pos = -1;

		for (int i = 0; i < elementArray.Length; i++) 
		{
			if (elementArray [i].GetComponent<SingleElementScript> ().getElementId () == x) 
			{
				queue.Add (elementArray [i]);
				x_pos = i;
			} else if (elementArray [i].GetComponent<SingleElementScript> ().getElementId () == y) 
			{
				queue.Add (elementArray [i]);
				y_pos = i;
			}

		}

		// swap in array
		GameObject tmp = elementArray [x_pos];
		elementArray [x_pos] = elementArray [y_pos];
		elementArray [y_pos] = tmp;

		ms.swap (queue);
	}
}
