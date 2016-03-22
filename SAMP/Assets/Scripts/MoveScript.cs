﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MoveScript : MonoBehaviour {

	private GameObject go1,go2;
	private Vector3 dest1,dest2, rotationPoint;
	private float speed = 80, rotated = 0;
	List<GameObject> queue;
	Color prevColor;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate ()
	{
		if (queue == null || queue.Count < 1)
			return;

		if (go1 == null || go2 == null)
			return;

		float step = speed * Time.deltaTime;
		rotated += step;

//		go1.GetComponent<Rigidbody> ().position = Vector3.MoveTowards(go1.GetComponent<Rigidbody> ().position
//		                                                              , dest1, step);
//		go2.GetComponent<Rigidbody> ().position = Vector3.MoveTowards(go2.GetComponent<Rigidbody> ().position
//		                                                              , dest2, step);	

//		go1.GetComponent<Rigidbody> ().transform.RotateAround (rotationPoint, Vector3.right, step);
//		go2.GetComponent<Rigidbody> ().transform.RotateAround (rotationPoint, Vector3.right, step);

		go1.transform.RotateAround (rotationPoint, Vector3.right, step);
		go2.transform.RotateAround (rotationPoint, Vector3.right, step);
	}
	
	IEnumerator DoMoving()
	{
		for(int i = 0; i < queue.Count; i=i+2)
		{
			float step = speed * Time.deltaTime;
			rotated = 0;
			go1 = queue[i];
			go2 = queue[i+1];

			changeColor(true);

//			dest1 = go2.GetComponent<Rigidbody> ().position;
//			dest2 = go1.GetComponent<Rigidbody> ().position;
			dest1 = go2.transform.position;
			dest2 = go1.transform.position;
			getRotationPoint();

			Debug.Log ("Dest1: " + dest1);
			Debug.Log ("Dest2: " + dest2);
			Debug.Log ("Rotation Point: " + rotationPoint);

//			while(go1.GetComponent<Rigidbody>().position != dest1 || go2.GetComponent<Rigidbody>().position != dest2)
//				yield return null;

			while(rotated < 180)
				yield return null;

			correctPositions();

			changeColor(false);
		}
		queue = null;
	}

	public void swap(List<GameObject> _queue)
	{
		queue = _queue;
		StartCoroutine(DoMoving());
	}

	private void changeColor(bool is_moving)
	{
//		if (is_moving)
//		{
//			prevColor = go1.GetComponent<Renderer> ().material.color;
//			go1.GetComponent<Renderer> ().material.color = Color.green;
//			go2.GetComponent<Renderer> ().material.color = Color.green;
//		} 
//		else 
//		{
//			go1.GetComponent<Renderer> ().material.color = prevColor;
//			go2.GetComponent<Renderer> ().material.color = prevColor;
//		}

		if (is_moving)
		{
//			go1.GetComponentInChildren<Renderer> ().material.color = Color.green;
//			go2.GetComponentInChildren<Renderer> ().material.color = Color.green;

			prevColor = Color.red;

			foreach (Transform child in go1.transform) 
			{
				if (child.tag.Equals ("BasicElement")) 
				{
					prevColor = child.GetComponent<Renderer> ().material.color;
					child.GetComponent<Renderer> ().material.color = Color.green;
				}
			}

			foreach (Transform child in go2.transform) 
			{
				if(child.tag.Equals("BasicElement"))
					child.GetComponent<Renderer> ().material.color = Color.green;
			}
		} 
		else 
		{
//			go1.GetComponentInChildren<Renderer> ().material.color = prevColor;
//			go2.GetComponentInChildren<Renderer> ().material.color = prevColor;

			foreach (Transform child in go1.transform) 
			{
				if(child.tag.Equals("BasicElement"))
					child.GetComponent<Renderer> ().material.color = prevColor;
			}

			foreach (Transform child in go2.transform) 
			{
				if(child.tag.Equals("BasicElement"))
					child.GetComponent<Renderer> ().material.color = prevColor;
			}
		}
	}

	private void getRotationPoint()
	{
//		float distance = Mathf.Abs (go1.GetComponent<Rigidbody> ().position.z - go2.GetComponent<Rigidbody> ().position.z);
//		float z = 0.0f;
//		if (go1.GetComponent<Rigidbody> ().position.z > go2.GetComponent<Rigidbody> ().position.z)
//			z = go1.GetComponent<Rigidbody> ().position.z - distance / 2;
//		else
//			z = go1.GetComponent<Rigidbody> ().position.z + distance / 2;
//
//		rotationPoint = new Vector3(go1.GetComponent<Rigidbody>().position.x,
//		                            go1.GetComponent<Rigidbody>().position.y,
//		                            z);

		float distance = Mathf.Abs (go1.transform.position.z - go2.transform.position.z);
		float z = 0.0f;
		if (go1.transform.position.z > go2.transform.position.z)
			z = go1.transform.position.z - distance / 2;
		else
			z = go1.transform.position.z + distance / 2;

		rotationPoint = new Vector3(go1.transform.position.x,
			go1.transform.position.y,
			z);

	}

	private void correctPositions()
	{
//		if (go1.GetComponent<Rigidbody> ().position != dest1 || go2.GetComponent<Rigidbody> ().position != dest2) 
//		{
//			go1.GetComponent<Rigidbody> ().transform.rotation = Quaternion.identity;
//			go1.GetComponent<Rigidbody> ().MovePosition(dest1);
//			go2.GetComponent<Rigidbody> ().transform.rotation = Quaternion.identity;
//			go2.GetComponent<Rigidbody> ().MovePosition(dest2);
//		}

		if (go1.transform.position != dest1 || go2.transform.position != dest2) 
		{
			go1.transform.rotation = Quaternion.identity;
			go1.transform.position = dest1;
			go2.transform.rotation = Quaternion.identity;
			go2.transform.position = dest2;
		}
	}
}
