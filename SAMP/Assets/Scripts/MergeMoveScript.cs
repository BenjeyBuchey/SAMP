using UnityEngine;
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
	private bool rotation = true;
    private float init_y = 0.0f;

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {

	}

	void FixedUpdate ()
	{
//		if (queue == null || queue.Count < 1)
//			return;
//
//		if (go1 == null || go2 == null)
//			return;
//
//		float step = speed * Time.deltaTime;
//		rotated += step;
//
//		float step_moveup = speed_moveup * Time.deltaTime;
//
//        if (go2.transform.position.y > init_y) {
//			rotation = false;
//			go2.transform.position = Vector3.MoveTowards (go2.transform.position, dest2, step_moveup);
//		} else 
//		{
//			rotation = true;
//			go2.transform.RotateAround (rotationPoint, Vector3.right, step);
//		}
//
//        go1.transform.position = Vector3.MoveTowards (go1.transform.position, dest1, step_moveup);
	}

	IEnumerator DoMoving()
	{
		for(int i = 0; i < queue.Count; i=i+2)
		{
			if (go1 != null)
				old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] = null_position;

			rotated = 0;
			go1 = queue[i];
			go2 = queue[i+1];

			changeColor(true);

            // changed 0 to init_y
            if (go1.transform.position.y == init_y && go2.transform.position.y == init_y) 
			{
				if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == null_position) 
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

            if (go2.transform.position.y > init_y && go1.transform.position.y == init_y) 
			{
				if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == null_position) 
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


            while (go1.transform.position != dest1 || go2.transform.position != dest2)
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
		initPositions ();
		printQueue ();
		//StartCoroutine(DoMoving());
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
		mhs.changeColor (go1, go2, is_moving, ref prevColor, ref prevColor2);
		Destroy (GetComponent<MoveHelperScript>());
	}

	private void getRotationPoint()
	{
		float distance = Mathf.Abs (dest2.z - go2.transform.position.z); //go1.transform.position.z
		float z = 0.0f;
		if (dest2.z > go2.transform.position.z)
			z = dest2.z - distance / 2;
		else
			z = dest2.z + distance / 2;

        Debug.Log("INIT Y: " +init_y);
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
            if (go1 != null)
                old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] = null_position;

            rotated = 0;
            go1 = queue[i];
            go2 = queue[i+1];

            changeColor(true);

            // changed 0 to init_y
            if (go1.transform.position.y == init_y && go2.transform.position.y == init_y) 
            {
                if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == null_position) 
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

            if (go2.transform.position.y > init_y && go1.transform.position.y == init_y) 
            {
                if (old_positions [go1.GetComponent<SingleElementScript> ().getElementId ()] == null_position) 
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

            if (go2.transform.position.y > init_y) 
            {
                rotation = false;
                LeanTween.move(go2, dest2, 1.5f);
            } 
            else 
            {
                rotation = true;
                float y_offset = getOffsetY();
                Vector3 temp1 = rotationPoint;
                temp1.y = temp1.y + y_offset;

                Vector3 temp2 = rotationPoint;
                temp2.y = temp2.y - y_offset;

                //go2.transform.RotateAround (rotationPoint, Vector3.right, step);
                LeanTween.move(go2, new Vector3[] {dest2, temp1, temp1, dest1 }, 1.5f);
            }
                
            LeanTween.move(go1, dest1, 1.5f);

            Debug.Log ("From: " + go1.transform.position +" to: " + dest1);
            Debug.Log ("From: " + go2.transform.position +" to: " + dest2);
            Debug.Log ("Rotation Point: " + rotationPoint);


            while (go1.transform.position != dest1 || go2.transform.position != dest2)
                yield return null;

            correctPositions();

            increaseCounter ();

            changeColor(false);
        }
        queue = null;
    }

    private float getOffsetY()
    {
        if (go1 == null || go2 == null)
            return 0.0f;

        return go1.GetComponentInParent<SortingBoxScript>().getOffsetY(go1, go2);
    }
}
