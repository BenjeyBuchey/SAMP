using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class MergeMoveScript : MonoBehaviour {

	private GameObject go1,go2;
	private Vector3 dest1,dest2, rotationPoint;
	private float speed = 80, rotated = 0, speed_moveup = 5;
	List<GameObject> queue;
	Vector3[] old_positions;
	Color prevColor;
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

		float step_moveup = speed_moveup * Time.deltaTime;

		go1.transform.position = Vector3.MoveTowards (go1.transform.position, dest1, step_moveup);

		if(go2.transform.position.y > 0)
			go2.transform.position = Vector3.MoveTowards (go2.transform.position, dest2, step_moveup);
		else
			go2.transform.RotateAround (rotationPoint, Vector3.right, step);
	}

	IEnumerator DoMoving()
	{
		for(int i = 0; i < queue.Count; i=i+2)
		{
			if (go1 != null)
				old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] = Vector3.zero;

			rotated = 0;
			go1 = queue[i];
			go2 = queue[i+1];

			changeColor(true);

			if (go1.transform.position.y == 0 && go2.transform.position.y == 0) 
			{
				if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == Vector3.zero) 
				{
					dest1 = go1.transform.position;
					dest1.y += 10;

					dest2 = go1.transform.position;
				} else 
				{
					dest2 = old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()];
					dest1 = go1.transform.position;
					if (dest1 == dest2)
						dest1.y += 10;
				}
				old_positions [go2.GetComponent<SingleElementScript> ().getElementId ()] = go2.transform.position;
				Debug.Log ("SET OLD " + go2.GetComponent<SingleElementScript> ().getElementId ());
			}

			if (go2.transform.position.y > 0 && go1.transform.position.y == 0) 
			{
				if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == Vector3.zero) 
				{
					dest2 = go1.transform.position;

					dest1 = go1.transform.position;
					dest1.y += 10;
				} else 
				{
					dest2 = old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()];
					dest1 = go1.transform.position;
				}
			}

			getRotationPoint();

			Debug.Log ("From: " + go1.transform.position +" to: " + dest1);
			Debug.Log ("From: " + go2.transform.position +" to: " + dest2);
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
		old_positions = new Vector3[queue.Count];
		printQueue ();
		StartCoroutine(DoMoving());
	}

	private void printQueue()
	{
		for (int i = 0; i < queue.Count; i += 2) 
		{
			Debug.Log ("Movement: " + queue [i].GetComponent<SingleElementScript> ().getElementId ()
			+ " " + queue [i + 1].GetComponent<SingleElementScript> ().getElementId ());
		}
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

		if (is_moving)
		{
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
		float distance = Mathf.Abs (dest2.z - go2.transform.position.z); //go1.transform.position.z
		float z = 0.0f;
		if (dest2.z > go2.transform.position.z)
			z = dest2.z - distance / 2;
		else
			z = dest2.z + distance / 2;

		rotationPoint = new Vector3(dest2.x,
			0,
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
