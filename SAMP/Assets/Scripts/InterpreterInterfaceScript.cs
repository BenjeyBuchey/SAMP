using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterpreterInterfaceScript : MonoBehaviour {

	private GameObject[] elementArray;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void swap(int x, int y)
	{
		elementArray = GameObject.FindGameObjectsWithTag ("Elements");
		Debug.Log ("Swapping " +x +" and " +y);
		foreach (GameObject go in elementArray) 
		{
			Debug.Log (go.GetComponent<SingleElementScript> ().getElementId ());
		}
		fillQueue (x, y);
	}

	private void fillQueue(int x, int y)
	{
		List<GameObject> queue = new List<GameObject> ();
		foreach (GameObject go in elementArray) 
		{
			if (go.GetComponent<SingleElementScript> ().getElementId () == x || go.GetComponent<SingleElementScript> ().getElementId () == y)
				queue.Add (go);
		}

		MoveScript ms = gameObject.AddComponent<MoveScript> ();
		ms.swap (queue);
	}
}
