using UnityEngine;
using System.Collections;

public class SingleElementScript : MonoBehaviour {

	private int element_id;

	// Use this for initialization
	void Start () {
		element_id = 0;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public int getElementId()
	{
		return element_id;
	}

	public void setElementId(int value)
	{
		element_id = value;
	}
}
