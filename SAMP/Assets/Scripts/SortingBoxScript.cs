using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SortingBoxScript : MonoBehaviour {

    private GameObject[] elementArray;
    private float min_dist,max_dist,max_dist_diff;
    private float y_min_position, y_max_position;
	private List<Vector3> init_element_positions = new List<Vector3>();
	private bool inUse = false;

	// Use this for initialization
	void Start () {
		setAlgorithmTextPosition();
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

	public void setInitialPositions()
	{
		foreach(GameObject go in elementArray)
		{
			init_element_positions.Add(go.transform.localPosition);
		}
	}

	public List<Vector3> getInitialPositionList()
	{
		return init_element_positions;
	}

    // set min dist & max dist & max dist diff
    public void setDistances()
    {
        if (elementArray == null || elementArray.Length < 2)
            return;

        // at this point we assume that the elements are already properly placed
        min_dist = elementArray[1].transform.position.z - elementArray[0].transform.position.z;

        max_dist = elementArray[elementArray.Length-1].transform.position.z - elementArray[0].transform.position.z;

        max_dist_diff = max_dist - min_dist;

        float container_size = this.GetComponentInChildren<ElementContainerScript>().gameObject.transform.localScale.y;
        y_max_position = container_size / 2;
        y_min_position = min_dist;
    }

    public float getOffsetY(GameObject go1, GameObject go2)
    {
        if (go1 == null || go2 == null)
            return 0.0f;

        float distance = Mathf.Abs(go1.transform.position.z - go2.transform.position.z);
        float offset = y_min_position + ((y_max_position-y_min_position)*((distance-min_dist)/max_dist_diff));
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

	public float getMaxObjectWidth()
	{
		float max = 0.0f;
		foreach(GameObject go in elementArray)
		{
			Transform[] child_transforms = go.GetComponentsInChildren<Transform>();
			foreach (Transform t in child_transforms)
			{
				if (t.gameObject.tag == "BasicElement" || t.localScale.z > max)
				{
					max = t.localScale.z;
				}
			}
		}

		return max;
	}

	private void setAlgorithmTextPosition()
	{
		// should be set on upper right corner of container
		TextMesh tm = this.GetComponentInChildren<TextMesh>();
		if (tm == null) return;

		GameObject container = getContainer();
		if (container == null) return;

		Vector3 tm_position = container.transform.position;
		tm_position.z = tm_position.z + container.transform.localScale.z / 2;
		tm_position.y = tm_position.y + container.transform.localScale.y / 2;
		tm.transform.position = tm_position;
	}

	public void setAlgorithmText(string text)
	{
		TextMesh tm = this.GetComponentInChildren<TextMesh>();
		if (tm == null) return;

		tm.text = text;
	}

	public bool isInUse()
	{
		return inUse;
	}


	public void setInUse(bool value)
	{
		inUse = value;
	}
}
