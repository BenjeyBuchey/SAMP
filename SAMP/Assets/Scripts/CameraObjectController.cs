using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraObjectController : MonoBehaviour {

	private Rigidbody rb;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody> ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 new_pos = new Vector3 (0.0f, rb.position.y-moveVertical, rb.position.z-moveHorizontal);
		rb.transform.position = new_pos;
	}
}
