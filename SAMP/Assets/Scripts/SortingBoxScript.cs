using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SortingBoxScript : MonoBehaviour {

    private GameObject[] elementArray;
    private float min_dist,max_dist,max_dist_diff;
    private float y_min_position, y_max_position;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		
	}

    public void setElementArray(GameObject[] array)
    {
        elementArray = array;
    }

    public GameObject[] getElementArray()
    {
        return elementArray;
    }

    // set min dist & max dist & max dist diff
    public void setDistances()
    {
        if (elementArray == null || elementArray.Length < 2)
            return;

        // at this point we assume that the elements are already properly placed
        min_dist = elementArray[1].transform.position.z - elementArray[0].transform.position.z;
        //Debug.Log("MIN DISTANCE: " + min_dist);

        max_dist = elementArray[elementArray.Length-1].transform.position.z - elementArray[0].transform.position.z;
        //Debug.Log("MAX DISTANCE: " + max_dist);

        max_dist_diff = max_dist - min_dist;
        //Debug.Log("MAX DISTANCE DIFFERENCE: " + max_dist_diff);

        float container_size = this.GetComponentInChildren<ElementContainerScript>().gameObject.transform.localScale.y;
        y_max_position = container_size / 2;
        y_min_position = min_dist;
        //Debug.Log("Y MIN POSITION: " +y_min_position);
        //Debug.Log("Y MAX POSITION: " +y_max_position);
    }

    public float getOffsetY(GameObject go1, GameObject go2)
    {
        if (go1 == null || go2 == null)
            return 0.0f;

        float distance = Mathf.Abs(go1.transform.position.z - go2.transform.position.z);
        Debug.Log("DISTANCE: " + distance);
        float offset = y_min_position + ((y_max_position-y_min_position)*((distance-min_dist)/max_dist_diff));
        Debug.Log("OFFSET: " + offset);
        return y_min_position + (y_max_position-y_min_position)*((distance-min_dist)/max_dist_diff);
    }

    public void print()
    {
        Debug.Log("MIN DISTANCE: " + min_dist);

        Debug.Log("MAX DISTANCE: " + max_dist);

        Debug.Log("MAX DISTANCE DIFFERENCE: " + max_dist_diff);
       
        Debug.Log("Y MIN POSITION: " +y_min_position);
        Debug.Log("Y MAX POSITION: " +y_max_position);
    }

    public GameObject getContainer()
    {
        return this.GetComponentInChildren<ElementContainerScript>().gameObject;
    }
}
