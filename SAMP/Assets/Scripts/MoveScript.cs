using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class MoveScript : MonoBehaviour {

	private GameObject go1,go2;
	private Vector3 dest1,dest2, rotationPoint;
	private float speed = 80, rotated = 0;
	private List<GameObject> queue;
	private Color prevColor;
	private Text score;

	// Use this for initialization
	void Start () {
		//score = GameObject.Find ("SwapCounter").GetComponent<Text> ();
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

		go1.transform.RotateAround (rotationPoint, Vector3.right, step);
		go2.transform.RotateAround (rotationPoint, Vector3.right, step);
	}
	
	IEnumerator DoMoving()
	{
		for(int i = 0; i < queue.Count; i=i+2)
		{
			rotated = 0;
			go1 = queue[i];
			go2 = queue[i+1];

			changeColor(true);

			dest1 = go2.transform.position;
			dest2 = go1.transform.position;
			getRotationPoint();

			Debug.Log ("Dest1: " + dest1);
			Debug.Log ("Dest2: " + dest2);
			Debug.Log ("Rotation Point: " + rotationPoint);

			while(rotated < 180)
				yield return null;

			correctPositions();

			increaseCounter ();

			changeColor(false);
		}
		queue = null;
	}

	public void swap(List<GameObject> _queue)
	{
		queue = _queue;
		StartCoroutine(DoMoving());
	}

	private void increaseCounter()
	{
		Text score = GameObject.Find ("SwapCounter").GetComponent<Text> ();

		if (score == null)
			return;

		score.GetComponent<SwapCounterScript> ().incCounter ();
	}

	private void changeColor(bool is_moving)
	{
		MoveHelperScript mhs = gameObject.AddComponent<MoveHelperScript> ();
		mhs.changeColor (go1, go2, is_moving, ref prevColor);
		Destroy (GetComponent<MoveHelperScript>());

//		if (is_moving)
//		{
//			prevColor = Color.red;
//
//			foreach (Transform child in go1.transform) 
//			{
//				if (child.tag.Equals ("BasicElement")) 
//				{
//					prevColor = child.GetComponent<Renderer> ().material.color;
//					child.GetComponent<Renderer> ().material.color = Color.green;
//				}
//			}
//
//			foreach (Transform child in go2.transform) 
//			{
//				if(child.tag.Equals("BasicElement"))
//					child.GetComponent<Renderer> ().material.color = Color.green;
//			}
//		} 
//		else 
//		{
//			foreach (Transform child in go1.transform) 
//			{
//				if(child.tag.Equals("BasicElement"))
//					child.GetComponent<Renderer> ().material.color = prevColor;
//			}
//
//			foreach (Transform child in go2.transform) 
//			{
//				if(child.tag.Equals("BasicElement"))
//					child.GetComponent<Renderer> ().material.color = prevColor;
//			}
//		}
	}

	private void getRotationPoint()
	{
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
		if (go1.transform.position != dest1 || go2.transform.position != dest2) 
		{
			go1.transform.rotation = Quaternion.identity;
			go1.transform.position = dest1;
			go2.transform.rotation = Quaternion.identity;
			go2.transform.position = dest2;
		}
	}
}
