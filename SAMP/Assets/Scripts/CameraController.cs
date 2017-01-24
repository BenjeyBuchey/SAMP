using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

//	public float speed;
//	private Rigidbody rb;
//	private Vector3 old_pos;
	public GameObject controller;
	private Vector3 offset;

	// Use this for initialization
	void Start () {
//		rb = GetComponent<Rigidbody> ();
//		old_pos = rb.transform.position;
		offset = transform.position - controller.transform.position;
	}
	
	// Update is called once per frame
	void LateUpdate () {
//		float moveHorizontal = Input.GetAxis ("Horizontal");
//		float moveVertical = Input.GetAxis ("Vertical");
//
//		//Debug.Log ("HORI: " + moveHorizontal.ToString () + " VERT: " + moveVertical.ToString ());
//		//Vector3 movement = new Vector3 (0.0f, moveVertical, moveHorizontal);
//		//rb.AddForce (movement*speed);
//		Vector3 new_pos = new Vector3 (0.0f, moveVertical+rb.position.y, moveHorizontal+rb.position.z);
//		Debug.Log ("OLD POS: " + old_pos);
//		Debug.Log ("NEW POS: " + new_pos);
//
//		if (new_pos != old_pos) 
//		{
//			rb.transform.position = new_pos;
//			old_pos = new_pos;
//		}
		transform.position = controller.transform.position + offset;
	}
}
