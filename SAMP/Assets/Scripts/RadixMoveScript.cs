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
	private List<BucketElementObject> queue_new;

	// Use this for initialization
	void Start () {
		//score = GameObject.Find ("SwapCounter").GetComponent<Text> ();
	}

	// Update is called once per frame
	void Update () {

	}

	void FixedUpdate ()
	{

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

			//Debug.Log ("Dest1: " + dest1);

            LeanTween.move(go1, dest1, 1.0f);

			while(go1.transform.position != dest1)
				yield return null;

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

	public void swap_new(List<BucketElementObject> _queue)
	{
		queue_new = _queue;
		StartCoroutine(DoMoving_new());
	}

	IEnumerator DoMoving_new()
	{
		for (int i = 0; i < queue_new.Count; i++)
		{
			GameObject go = queue_new[i].go;
			Vector3 dest = getDestination(queue_new[i].bucket, queue_new[i].position, go);

			Debug.Log(go.transform.parent.name);
			changeColor(true);

			LeanTween.move(go, dest, 1.0f);

			while (go.transform.position != dest)
				yield return null;

			changeColor(false);
		}
		queue_new = null;
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
		Destroy (mhs);
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

	private Vector3 getDestination(int bucket, int position, GameObject go)
	{
		float object_width = go.transform.localScale.z;
		BucketScript bs = go.GetComponentInParent<BucketScript>();
		if (bs == null) return Vector3.zero;

		List<GameObject> bucket_objects = bs.getBucketObjects();
		if(bucket_objects == null || bucket_objects.Count < bucket)
			return Vector3.zero;

		float z_offset = 5.0f + object_width*position;
		Vector3 dest = bucket_objects[bucket].transform.position;
		dest.z = dest.z + z_offset;

		return dest;
	}
}
