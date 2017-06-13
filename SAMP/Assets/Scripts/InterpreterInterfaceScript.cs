using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterpreterInterfaceScript : MonoBehaviour {

	//private GameObject[] elementArray;
	//private MoveScript ms;

	// Use this for initialization
	void Start () {
		//ms = gameObject.AddComponent<MoveScript> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void swap(int x, int y)
	{
        List<GameObject[]> elementArrays = setElementArrays();
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
        List<GameObject[]> elementArrays = setElementArrays();
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

	public double size(int x)
	{
        List<GameObject[]> elementArrays = setElementArrays();
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

    public int getElementCount()
    {
        List<GameObject[]> elementArrays = setElementArrays();
        if (elementArrays == null)
            return 0;

        foreach (GameObject[] elementArray in elementArrays)
        {
            Debug.Log("Number of Elements: " + elementArray.Length);
            return elementArray.Length;
        }

        return 0;
    }

    private List<GameObject> fillQueue(int x, int y, GameObject[] elementArray)
	{
		List<GameObject> queue = new List<GameObject> ();
		int x_pos = -1, y_pos = -1;

		for (int i = 0; i < elementArray.Length; i++) 
		{
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

		// swap in array
		GameObject tmp = elementArray [x_pos];
		elementArray [x_pos] = elementArray [y_pos];
		elementArray [y_pos] = tmp;

        return queue;
        /*
        MoveScript ms = gameObject.AddComponent<MoveScript> ();
		ms.swap (queue); */
	}

    private List<GameObject[]> setElementArrays()
    {
        GameObject elements = GameObject.Find("Elements");
        if (elements == null)
            return null;
        
        return elements.GetComponent<ElementScript>().getElementArrays();
    }
}
