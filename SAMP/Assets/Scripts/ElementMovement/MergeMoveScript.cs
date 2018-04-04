﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class MergeMoveScript : MonoBehaviour {

	private GameObject go1,go2;
	private Vector3 dest1,dest2, rotationPoint;
	private float speed = 80, rotated = 0, speed_moveup = 10;
	List<GameObject> queue;
	Vector3[] old_positions;
	Vector3 null_position;
	Color prevColor, prevColor2;
	private Text score;
    private float init_y = 0.0f;
	private float swapSpeed = 1.5f;

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {

	}

	public void swap(List<GameObject> _queue)
	{
		queue = _queue;
		old_positions = new Vector3[queue.Count];
		initPositions ();
		printQueue ();
        StartCoroutine(DoSwap());
	}

	private void initPositions()
	{
		null_position = new Vector3 (-99, -99, -99);
		for (int i = 0; i < old_positions.Length; i++) 
		{
			old_positions [i] = null_position;
		}

        if (queue.Count > 0)
            init_y = queue[0].transform.position.y;
	}

	private void printQueue()
	{
		for (int i = 0; i < queue.Count; i += 2) 
		{
			Debug.Log ("Movement: " + queue [i].GetComponent<SingleElementScript> ().getElementId ()
			+ " " + queue [i + 1].GetComponent<SingleElementScript> ().getElementId ());
		}
	}

	private void changeColor(bool is_moving)
	{
		MoveHelperScript mhs = new MoveHelperScript();
		mhs.changeColor (go1, go2, is_moving, ref prevColor, ref prevColor2);
		//Destroy (mhs);
	}

	private void getRotationPoint()
	{
		float distance = Mathf.Abs (dest2.z - go2.transform.position.z);
		float z = 0.0f;
		if (dest2.z > go2.transform.position.z)
			z = dest2.z - distance / 2;
		else
			z = dest2.z + distance / 2;

        rotationPoint = new Vector3(dest2.x,init_y,z);
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

    IEnumerator DoSwap()
    {
        for(int i = 0; i < queue.Count; i=i+2)
        {
			int go1_id = 0, go2_id=0;
			if (go1 != null)
			{
				old_positions[go1.GetComponent<SingleElementScript>().getElementId()] = null_position;
				//Debug.Log("SET OLD [" + go1.GetComponent<SingleElementScript>().getElementId() + "] to NULL POS " + old_positions[go1.GetComponent<SingleElementScript>().getElementId()]);
			}

			rotated = 0;
            go1 = queue[i];
            go2 = queue[i+1];

			if (go1 == null || go2 == null)
				yield return null;

			updateSwapSpeed();
			changeColor(true);

            // changed 0 to init_y
            if(Mathf.Abs(go1.transform.position.y - init_y) < 0.1f && Mathf.Abs(go2.transform.position.y - init_y) < 0.1f)	//if (go1.transform.position.y == init_y && go2.transform.position.y == init_y)
			{
                if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == null_position) 
                {
                    dest1 = go1.transform.position;
                    dest1.y += 10;

                    dest2 = go1.transform.position;
                }
				else 
                {
					// set dest2 to old_positions entry
                    dest2 = old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()];

					dest1 = go1.transform.position;
                    if (dest1 == dest2)
                        dest1.y += 10;
                }
                old_positions [go2.GetComponent<SingleElementScript> ().getElementId ()] = go2.transform.position;
                //Debug.Log ("SET OLD [" + go2.GetComponent<SingleElementScript> ().getElementId () + "] to " + old_positions[go2.GetComponent<SingleElementScript>().getElementId()]);
            }

            if (go2.transform.position.y > init_y && Mathf.Abs(go1.transform.position.y - init_y) < 0.1f)    // go1.transform.position.y == init_y
			{
                if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == null_position) 
                {
                    dest2 = go1.transform.position;

                    dest1 = go1.transform.position;
                    dest1.y += 10;
                }
				else 
                {
                    dest2 = old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()];
                    dest1 = go1.transform.position;
                }
            }

            getRotationPoint();

            if ((go2.transform.position.y-0.1f) > init_y) 
            {
				go2_id = LeanTween.move(go2, dest2, swapSpeed).id;
				//Debug.Log("GO2(" + go2.GetComponent<SingleElementScript>().getElementId() +"): FROM: " + go2.transform.position + " VIA: " + Vector3.zero + " TO: " + dest2);
			} 
            else 
            {
                float y_offset = getOffsetY();
                Vector3 temp1 = rotationPoint;
                temp1.y = temp1.y + y_offset;

                Vector3 temp2 = rotationPoint;
                temp2.y = temp2.y - y_offset;

				//Debug.Log("Rotation Point: " + rotationPoint + " Offset Y: " + y_offset);
				//Debug.Log("GO2(" + go2.GetComponent<SingleElementScript>().getElementId() +"): FROM: " + go2.transform.position + " VIA: " + temp2 + " TO: " + dest2);

				go2_id = LeanTween.move(go2, new Vector3[] { go2.transform.position, temp2, temp2, dest2 }, swapSpeed).id;
			}
			//Debug.Log("GO1(" + go1.GetComponent<SingleElementScript>().getElementId() +"): FROM: " + go1.transform.position + " TO: " + dest1);
			//Debug.Log("-------------------------------------------------------");
			go1_id = LeanTween.move(go1, dest1, swapSpeed).id;

			while (LeanTween.isTweening(go1_id) && LeanTween.isTweening(go2_id))
				yield return null;

            changeColor(false);
        }
		stopSortingboxUsage();
		Destroy(this);
	}

    private float getOffsetY()
    {
        if (go1 == null || go2 == null)
            return 0.0f;

        return go1.GetComponentInParent<SortingBoxScript>().getOffsetY(go1, go2);
    }

	private void stopSortingboxUsage()
	{
		if (queue == null || queue.Count <= 0) return;

		MoveHelperScript mhs = new MoveHelperScript();
		mhs.stopSortingboxUsage(queue[0]);
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