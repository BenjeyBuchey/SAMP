﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementContainer : MonoBehaviour {

	// Use this for initialization

	void Start () {
		gameObject.GetComponent<Renderer> ().material.color = new Color (0.0f, 0.0f, 0.0f, 0.0f);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}