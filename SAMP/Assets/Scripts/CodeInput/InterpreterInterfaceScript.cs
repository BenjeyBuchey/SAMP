using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterpreterInterfaceScript : MonoBehaviour {

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	// old functions used for jurassic
	public void swap(int x, int y)
	{
        List<GameObject[]> elementArrays = setElementArrays(true);
        if (elementArrays == null)
            return;

		Debug.Log ("Swapping " +x +" and " +y);
        foreach (GameObject[] elementArray in elementArrays)
        {
            fillQueue(x, y, elementArray);
        }
	}

    public List<List<GameObject>> swapNEW(int x, int y)
    {
        List<GameObject[]> elementArrays = setElementArrays(false);
        if (elementArrays == null)
            return null;

        List<List<GameObject>> queue = new List<List<GameObject>>();
        Debug.Log ("Swapping " +x +" and " +y);
        foreach (GameObject[] elementArray in elementArrays)
        {
            //queue.AddRange(fillQueue(x, y, elementArray));
            queue.Add(fillQueue(x, y, elementArray));
        }

        return queue;
    }

	public double size_old(int x)
	{
        List<GameObject[]> elementArrays = setElementArrays(false);
        if (elementArrays == null)
            return -1;
        
		double size = 0.0;

        foreach (GameObject[] elementArray in elementArrays)
        {
            foreach (GameObject go in elementArray)
            {
                if (go.GetComponent<SingleElementScript>().getElementId() == x)
                {
                    size = go.GetComponentInChildren<Rigidbody>().transform.localScale.x;
                    Debug.Log("Size of Element " + x + " is: " + size);
                    break;
                }
            }
        }
		return size;
	}

	public double size(int index)
	{
		List<GameObject[]> elementArrays = setElementArrays(false);
		if (elementArrays == null)
			return -1;

		double size = 0.0;

		foreach (GameObject[] elementArray in elementArrays)
		{
			if(elementArray.Length <= index || elementArray[index] == null) return size;

			size = elementArray[index].GetComponentInChildren<Rigidbody>().transform.localScale.x;
			//Debug.Log("Size of element on position " + index + " is: " + size);
			break;
		}
		return size;
	}

	public int getElementCount()
    {
        List<GameObject[]> elementArrays = setElementArrays(false);
        if (elementArrays == null)
            return 0;

        foreach (GameObject[] elementArray in elementArrays)
        {
            //Debug.Log("Number of Elements: " + elementArray.Length);
            return elementArray.Length;
        }

        return 0;
    }

	private List<GameObject> fillQueue(int x, int y, GameObject[] elementArray)
	{
		if (x > elementArray.Length || y > elementArray.Length)
		{
			Debug.Log("Out of range! Can't swap " + x + " and " + y);
			return null;
		}

		List<GameObject> queue = new List<GameObject>();

		queue.Add(elementArray[x]);
		queue.Add(elementArray[y]);

		string debug = "ELEMENT ORDER: ";

		for (int i = 0; i < elementArray.Length; i++)
		{
			debug += elementArray[i].GetComponent<SingleElementScript>().getElementId() + " ";
		}
		Debug.Log(debug);
		// swap in array
		GameObject tmp = elementArray[x];
		elementArray[x] = elementArray[y];
		elementArray[y] = tmp;

		return queue;
		/*
        MoveScript ms = gameObject.AddComponent<MoveScript> ();
		ms.swap (queue); */
	}

	private List<GameObject> fillQueue_old(int x, int y, GameObject[] elementArray)
	{
		if (x > elementArray.Length || y > elementArray.Length)
		{
			Debug.Log("Out of range! Can't swap " + x +" and " + y);
			return null;
		}

		List<GameObject> queue = new List<GameObject> ();
		int x_pos = -1, y_pos = -1;
		string debug = "ELEMENT ORDER: ";

		for (int i = 0; i < elementArray.Length; i++) 
		{
			debug += elementArray[i].GetComponent<SingleElementScript>().getElementId() + " ";
			if (elementArray [i].GetComponent<SingleElementScript> ().getElementId () == x) 
			{
				queue.Add (elementArray [i]);
				x_pos = i;
			} else if (elementArray [i].GetComponent<SingleElementScript> ().getElementId () == y) 
			{
				queue.Add (elementArray [i]);
				y_pos = i;
			}
		}
		Debug.Log(debug);
		// swap in array
		GameObject tmp = elementArray [x_pos];
		elementArray [x_pos] = elementArray [y_pos];
		elementArray [y_pos] = tmp;

        return queue;
        /*
        MoveScript ms = gameObject.AddComponent<MoveScript> ();
		ms.swap (queue); */
	}

    private List<GameObject[]> setElementArrays(bool getsSetToUse)
    {
        GameObject elements = GameObject.Find("Elements");
        if (elements == null)
            return null;
        
        return elements.GetComponent<ElementScript>().getElementArrays(getsSetToUse);
    }
}
