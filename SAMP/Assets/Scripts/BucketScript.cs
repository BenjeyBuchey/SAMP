using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BucketScript : MonoBehaviour {


	// Use this for initialization
	void Start () {
        setPositions();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    // set Buckets position according to container size
    // set size and y position for each bucket
    private void setPositions()
    {
        GameObject container = getContainer();
        Vector3 bucket_init_position = new Vector3(container.transform.position.x, container.transform.position.y-container.transform.localScale.y/2, container.transform.position.z-container.transform.localScale.z/2);
        this.transform.position = bucket_init_position;
    }

    private GameObject getContainer()
    {
        return gameObject.GetComponentInParent<SortingBoxScript>().getContainer();
    }
}
