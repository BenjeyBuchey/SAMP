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
	private List<Vector3> init_positions = new List<Vector3>();
	private int init_counter = 0;
	private float swapSpeed = 1.5f;

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

	public void swap_new(List<BucketElementObject> _queue)
	{
		queue_new = _queue;
		setInitialPositions();
		StartCoroutine(DoMoving_new());
	}

	IEnumerator DoMoving_new()
	{
		for (int i = 0; i < queue_new.Count; i++)
		{
			GameObject go = queue_new[i].go;
			Vector3 dest = getDestination(queue_new[i].bucket, queue_new[i].position, go);

			updateSwapSpeed();
			changeColor(true);

			//LeanTween.move(go, dest, 1.0f);
			int go1_id = LeanTween.move(go, dest, swapSpeed).id;

			while (LeanTween.isTweening(go1_id))
				yield return null;

			//while (Vector3.Distance(go.transform.position, dest) > 0.1f)
			//	yield return null;

			changeColor(false);
		}
		//queue_new = null;
		stopSortingboxUsage();
		Destroy(this);
	}

	private void changeColor(bool is_moving)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		mhs.changeColor (go1, null, is_moving, ref prevColor, ref prevColor2);
		//Destroy (mhs);
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
		if (init_counter >= init_positions.Count)
			init_counter = 0;

		float object_width = getObjectWidth(go);
		BucketScript bs = go.GetComponentInParent<BucketScript>();
		if (bs == null) return Vector3.zero;

		List<GameObject> bucket_objects = bs.getBucketObjects();
		if(bucket_objects == null || bucket_objects.Count < bucket)
			return Vector3.zero;

		Vector3 dest = Vector3.zero;
		// bucket -1 --> move to init positions
		if (bucket == -1)
		{
			dest = init_positions[init_counter];
			init_counter++;
		}
		else
		{
			float z_offset = 5.0f + object_width * position;
			dest = bucket_objects[bucket].transform.position;
			dest.y = dest.y - bucket_objects[bucket].transform.localScale.y / 2; //half bucket text size
			dest.z = dest.z + z_offset;
		}

		return dest;
	}

	private void setInitialPositions()
	{
		if (queue_new == null || queue_new.Count <= 0) return;

		GameObject go = queue_new[0].go;
		if (go == null) return;

		SortingBoxScript sbs = go.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		init_positions.Clear();
		init_positions = sbs.getInitialPositionList();
	}

	private float getObjectWidth(GameObject go)
	{
		float width = 1.0f;
		if (go == null) return width;

		SortingBoxScript sbs = go.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return width;

		return sbs.getMaxObjectWidth();
	}

	private void stopSortingboxUsage()
	{
		if (queue_new == null || queue_new.Count <= 0) return;

		MoveHelperScript mhs = new MoveHelperScript();
		mhs.stopSortingboxUsage(queue_new[0].go);
	}

	private void updateSwapSpeed()
	{
		GameObject go = GameObject.Find("SwapSpeedSlider");
		if (go == null) return;

		Slider s = go.GetComponent<Slider>();
		if (s == null) return;

		swapSpeed = s.value;
	}
}
