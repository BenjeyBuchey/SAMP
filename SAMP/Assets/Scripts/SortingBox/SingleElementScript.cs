﻿using UnityEngine;
using System.Collections;

public class SingleElementScript : MonoBehaviour {

	private int element_id;

	// Use this for initialization
	void Start () {

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

	public Color GetColor()
	{
		foreach (Transform child in gameObject.transform)
		{
			if (child.tag.Equals("BasicElement"))
			{
				return child.GetComponent<Renderer>().material.color;
			}
		}
		return MoveHelperScript.DEFAULT_COLOR;
	}
}
