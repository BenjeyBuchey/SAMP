using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BucketScript : MonoBehaviour {

	public GameObject buckets;
	private float y_container_offset = 5.0f, buckets_space = 0.0f;
	private List<GameObject> bucket_objects = new List<GameObject>();
	private GameObject container;

	// Use this for initialization
	void Start () {
		container = getContainer();
	}
	
	// Update is called once per frame
	void Update () {

	}

    private GameObject getContainer()
    {
		SortingBoxScript sbs = gameObject.GetComponent<SortingBoxScript>();
		if (sbs == null) return null;

		return sbs.getContainer();
    }

	public void createBuckets()
	{
		if (hasBuckets())
			return;

		spawnBuckets();
		setBucketObjects();
		setPositions();
	}

	private void spawnBuckets()
	{
		buckets = Instantiate(buckets, container.transform.parent);
	}

	private void setBucketObjects()
	{
		Transform[] child_transforms = gameObject.GetComponentsInChildren<Transform>();
		foreach (Transform child in child_transforms)
		{
			if (child.gameObject.tag == "Buckets")
			{
				bucket_objects.Add(child.gameObject);
			}
		}
	}

	// set Buckets position according to container size
	// set size and y position for each bucket
	private void setPositions()
	{
		//GameObject container = getContainer();
		if (container == null) return;

		Vector3 bucket_init_position = new Vector3(container.transform.localPosition.x,
			container.transform.localPosition.y + container.transform.localScale.y / 2 - y_container_offset, container.transform.localPosition.z - container.transform.localScale.z / 2);
		buckets.transform.localPosition = bucket_init_position;
		buckets.transform.position = bucket_init_position;

		buckets_space = container.transform.localScale.y / 2 + y_container_offset;
		setBucketPositions();
	}

	// sets bucket size and positions
	private void setBucketPositions()
	{
		if (bucket_objects.Count == 0)
			return;

		float y_blank = 0.2f;
		float y_bucket_offset = 0.0f;
		float bucket_size_y = (buckets_space- (bucket_objects.Count-1)*y_blank) / (bucket_objects.Count-1);
		float y_pos = 0.0f;

		if (bucket_objects.Count > 0)
			y_bucket_offset = bucket_size_y;
		
		Debug.Log("bucket size y: " + bucket_size_y);

		foreach (GameObject go in bucket_objects)
		{
			Vector3 size = go.transform.localScale;
			size.y = bucket_size_y;
			go.transform.localScale = size;

			Vector3 pos = go.transform.localPosition;
			pos.y -= y_pos;
			go.transform.localPosition = pos;

			y_pos += y_bucket_offset + y_blank;
		}
	}

    public void deleteBuckets()
    {
        foreach (GameObject bucket in bucket_objects)
        {
            Destroy(bucket);
        }
    }

	private bool hasBuckets()
	{
		Transform[] buckets = gameObject.FindComponentsInChildrenWithTag<Transform>("Buckets");
		if(buckets.Length > 0)
			return true;

		return false;
	}
}
