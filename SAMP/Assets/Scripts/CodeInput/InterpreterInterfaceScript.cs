using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class InterpreterInterfaceScript {

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

	public List<List<SortingVisualItem>> Swap(int x, int y)
	{
		List<GameObject[]> elementArrays = setElementArrays(false);
		if (elementArrays == null)
			return null;

		List<List<SortingVisualItem>> queue = new List<List<SortingVisualItem>>();
		Debug.Log("Swapping " + x + " and " + y);
		foreach (GameObject[] elementArray in elementArrays)
		{
			queue.Add(FillQueue(x, y, elementArray));
		}

		return queue;
	}

	//public List<KeyValuePair<MoveScript, List<SortingVisualItem>>> Swap(int x, int y)
	//{
	//	GameObject[] sortingBoxes = HelperScript.GetSortingboxesToExecuteCode();
	//	if (sortingBoxes == null || sortingBoxes.Length == 0) return null;

	//	List<KeyValuePair<MoveScript, List<SortingVisualItem>>> queue = new List<KeyValuePair<MoveScript, List<SortingVisualItem>>>();
	//	foreach (GameObject sortingBox in sortingBoxes)
	//	{
	//		queue.Add(new KeyValuePair<MoveScript, List<SortingVisualItem>>(sortingBox.GetComponent<MoveScript>(), FillQueue(x, y, sortingBox.GetComponent<SortingBoxScript>().getElementArray())));
	//	}
	//	return queue;
	//}

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

	private List<SortingVisualItem> FillQueue(int x, int y, GameObject[] elementArray)
	{
		if (x > elementArray.Length || y > elementArray.Length || x < 0 || y < 0)
		{
			Debug.Log("Out of range! Can't swap " + x + " and " + y);
			return null;
		}

		List<SortingVisualItem> queue = new List<SortingVisualItem>();
		queue.Add(new SortingVisualItem((int)SortingVisualType.Swap, elementArray[x], elementArray[y]));

		// swap in array
		GameObject tmp = elementArray[x];
		elementArray[x] = elementArray[y];
		elementArray[y] = tmp;

		return queue;
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

    private List<GameObject[]> setElementArrays(bool getsSetToUse)
    {
        GameObject elements = GameObject.Find("Elements");
        if (elements == null)
            return null;
        
        return elements.GetComponent<ElementScript>().getElementArrays(getsSetToUse);
    }
}
