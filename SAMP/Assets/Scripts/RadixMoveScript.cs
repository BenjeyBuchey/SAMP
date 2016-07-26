using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class RadixMoveScript : MonoBehaviour {

	private GameObject go1;
	private Vector3 dest1;
	private float speed = 20;
	private List<ArrayList> queue;
	private Color prevColor, prevColor2;
	private Text score;
	private float init_y_position = 0;

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

		if (go1 == null)
			return;

		float step = speed * Time.deltaTime;

		go1.transform.position = Vector3.MoveTowards (go1.transform.position, dest1, step);

	}

	IEnumerator DoMoving()
	{
		for(int i = 0; i < queue.Count; i++)
		{
			ArrayList list = queue [i];
			int go_index = 0, position_index = 1;

			go1 = list[go_index] as GameObject;
			Vector3 bucket_position = (Vector3)list [position_index];

			changeColor(true);

			dest1 = bucket_position;
			setSpeed ();
			Debug.Log ("Dest1: " + dest1);

			while(go1.transform.position != dest1)
				yield return null;

			//correctPositions();

			increaseCounter ();

			changeColor(false);
		}
		queue = null;
	}

	public void swap(List<ArrayList> _queue)
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
		mhs.changeColor (go1, null, is_moving, ref prevColor, ref prevColor2);
		Destroy (GetComponent<MoveHelperScript>());
	}

	private void correctPositions()
	{
		if (go1.transform.position != dest1) 
		{
			go1.transform.rotation = Quaternion.identity;
			go1.transform.position = dest1;
		}
	}

	private void setSpeed()
	{
		speed = Vector3.Distance(go1.transform.position,dest1);
	}
}
