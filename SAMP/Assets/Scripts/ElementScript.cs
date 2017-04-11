using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class ElementScript : MonoBehaviour {

	private GameObject[] elementArray;
	private int locked;
//	private QuickSortScript q;
//	private HeapSortScript hs;
//	private GnomeSortScript gs;
//	private MergeSortScript ms;
	private RadixSortScript rs;
	public GameObject element;
	public GameObject sortingbox;
    private int y_offset = 5;
    private int container_z_offset = 5;

	// Use this for initialization
	void Start () {

		locked = 0;
//		q = gameObject.AddComponent<QuickSortScript> ();
//		hs = gameObject.AddComponent<HeapSortScript> ();
//		gs = gameObject.AddComponent<GnomeSortScript> ();
//		ms = gameObject.AddComponent<MergeSortScript> ();
		rs = gameObject.AddComponent<RadixSortScript> ();
        int size = getArraySize();
        setElementDropdown(size);
		spawnElements (size);
	}
	
	// Update is called once per frame
	void Update () {

	}

    public void spawnElements(int size)
	{
        if (size == 0)
            size = getNewElementSize();
        
        spawnNewSortingBox(size);
	}

    void spawnNewSortingBox(int size)
    {
        //get number of existing sorting boxes
        int sortingbox_count = GameObject.FindGameObjectsWithTag("SortingBoxes").Length;
        Debug.Log("SORTING BOX COUNT: " + sortingbox_count);

        //spawn sorting box
        var sortingbox_go = Instantiate(sortingbox);

        //spawn elements
        GameObject[] sbox_elements = new GameObject[size];
        for (int i = 0; i < size; i++)
        {
            sbox_elements[i] = Instantiate(element, sortingbox_go.transform);
            if (sortingbox_count > 0)
                adjustElementsLocation(sortingbox_count, sbox_elements[i], sortingbox_go);
        }

        //set element array for this sorting box
        sortingbox_go.GetComponent<SortingBoxScript>().setElementArray(sbox_elements);

        //setup element array
        elementArray = sbox_elements;
        setupElementArray(sbox_elements);

        // set min/max distances, max distance difference
        sortingbox_go.GetComponent<SortingBoxScript>().setDistances();

        adjustSortingBoxLocation(sortingbox_count, sortingbox_go, size);
    }

    private void adjustSortingBoxLocation(int count, GameObject sortingbox_go, int size)
    {
        Transform container_transform = sortingbox_go.transform.Find("Container");
        // container size
        Vector3 old_size = container_transform.localScale;
        Vector3 new_size = new Vector3(old_size.x, old_size.y, (size+1)*container_z_offset);
        container_transform.localScale = new_size;

        //container posi
        Vector3 old_pos = container_transform.position;
        Vector3 new_pos = new Vector3(old_pos.x, old_pos.y - count * (container_transform.localScale.y + y_offset), container_transform.localScale.z/2-container_z_offset);
        container_transform.position = new_pos;
    }

    private void adjustElementsLocation(int count, GameObject element, GameObject sortingbox_go)
    {
        Transform container_transform = sortingbox_go.transform.Find("Container");

        Vector3 old_pos = element.transform.position;
        Vector3 new_pos = new Vector3(old_pos.x, old_pos.y - count * (container_transform.localScale.y + y_offset), old_pos.z);
        element.transform.position = new_pos;
    }

    private int getArraySize()
    {
        GameObject empty = GameObject.Find ("EmptyGameObject");
        int size = 0;
        if (empty == null)
            size = 10;
        else
            size = empty.GetComponent<SliderUpdateScript> ().getElementSize ();
        Debug.Log (size.ToString());

        return size;
    }

    private void setupElementArray(GameObject[] elements)
    {
        float position_z = 0.0f;
        float[] scale_array = fillScaleArray (elements.Length);
        int i = 0;
        foreach (GameObject go in elements)
        {
            //set text & id
            go.GetComponentInChildren<TextMesh>().text = (i).ToString ();
            go.GetComponent<SingleElementScript> ().setElementId (i);

            //adjust rigidbody
            Rigidbody rb = go.GetComponentInChildren<Rigidbody>();
            rb.transform.localScale = new Vector3(scale_array[i],scale_array[i],scale_array[i]);
            setColor (go,scale_array[i]);
            go.transform.position = new Vector3(rb.position.x,rb.position.y,position_z);
            Debug.Log("POSI Z: " + position_z);
            position_z += 5.0f;
            i++;
        }
        shuffleGameObjects ();
    }

	private void setColor(GameObject go, float scale)
	{
		float max_scale = 4.0F;
		int min_GB_color = 0;
		float multiplier = (255 - min_GB_color) / max_scale;
		float color = 1 - ((min_GB_color + scale * multiplier) / 255);
		//Debug.Log ("COLOR: " + color);

		foreach (Transform child in go.transform) 
		{
			if (child.tag.Equals ("BasicElement")) 
			{
				child.GetComponent<Renderer> ().material.color = new Color (1, color, color);
			}
		}
	}

	private float[] fillScaleArray(int size)
	{
		float max_scale = 4.0f;
		float min_scale = 1.0f;
		float inc = (max_scale - min_scale) / ((float)size-1);

		float[] scale_array = new float[size];
		for (int i = 0; i < scale_array.Length; i++) 
		{
			scale_array[i] = min_scale + inc*i;
		}

		//shuffleArray (scale_array);

		return scale_array;
	}

	private void shuffleArray(float[] scale_array)
	{
		for (int i = 0; i < scale_array.Length; i++) 
		{
			float tmp = scale_array[i];
			int r = Random.Range (i, scale_array.Length);
			scale_array[i] = scale_array[r];
			scale_array[r] = tmp;
		}
	}

	private void shuffleGameObjects()
	{
		for (int i = 0; i < elementArray.Length; i++) 
		{
			GameObject tmp = elementArray [i];
			Vector3 a_posi = elementArray [i].transform.position;

			int r = Random.Range (i, elementArray.Length);
			Vector3 b_posi = elementArray [r].transform.position;

			elementArray [i] = elementArray [r];
			elementArray [i].transform.position = a_posi;

			elementArray [r] = tmp;
			elementArray [r].transform.position = b_posi;
		}
	}

	private void printGameObjects()
	{
		for (int i = 0; i < elementArray.Length; i++) 
		{
//			Debug.Log (elementArray [i].name + " - Scale: " + elementArray [i].GetComponent<Rigidbody> ().transform.localScale
//				+ " - Position: " + elementArray [i].GetComponent<Rigidbody> ().position);
			Debug.Log (elementArray [i].name + " - Scale: " + elementArray [i].GetComponentInChildren<Rigidbody> ().transform.localScale
				+ " - Position: " + elementArray [i].GetComponentInChildren<Rigidbody> ().position);

		}
	}

	public void printElementIDs()
	{
		Debug.Log ("Element IDs");
		foreach (GameObject go in elementArray) 
		{
			Debug.Log (go.GetComponent<SingleElementScript> ().getElementId ());
		}
	}

	public void quickSort()
	{
		if (locked == 1)
			return;

		// TODO: this doesn't wait till animation has finished 
		//locked = 1;
		//q.startSort(elementArray, 0, elementArray.Length);
		//locked = 0;

        List<GameObject[]> elementArrays = getElementArrays();
        locked = 1;
        foreach (GameObject[] array in elementArrays)
        {
            QuickSortScript ss = gameObject.AddComponent<QuickSortScript> ();
            ss.startSort(array, 0, array.Length);
        }
        locked = 0;
	}

	public void heapSort()
	{
		if (locked == 1)
			return;

		// TODO: this doesn't wait till animation has finished 
//		locked = 1;
//		hs.startSort(elementArray);
//		locked = 0;

        List<GameObject[]> elementArrays = getElementArrays();
        locked = 1;
        foreach (GameObject[] array in elementArrays)
        {
            HeapSortScript ss = gameObject.AddComponent<HeapSortScript> ();
            ss.startSort(array);
        }
        locked = 0;
	}

	public void mergeSort()
	{
		if (locked == 1)
			return;

		// TODO: this doesn't wait till animation has finished 
//		locked = 1;
//		ms.startSort (elementArray);
//		locked = 0;

        List<GameObject[]> elementArrays = getElementArrays();
        locked = 1;
        foreach (GameObject[] array in elementArrays)
        {
            MergeSortScript ss = gameObject.AddComponent<MergeSortScript> ();
            ss.startSort(array);
        }
        locked = 0;
	}

	public void gnomeSort()
	{
		if (locked == 1)
			return;

		// TODO: this doesn't wait till animation has finished 
//		locked = 1;
//		gs.startSort(elementArray);
//		locked = 0;

        List<GameObject[]> elementArrays = getElementArrays();
        locked = 1;
        foreach (GameObject[] array in elementArrays)
        {
            GnomeSortScript ss = gameObject.AddComponent<GnomeSortScript> ();
            ss.startSort(array);
        }
        locked = 0;
	}

	public void radixSort()
	{
		if (locked == 1)
			return;

		// TODO: this doesn't wait till animation has finished 
//		locked = 1;
//		rs.startSort(elementArray);
//		locked = 0;

        List<GameObject[]> elementArrays = getElementArrays();
        locked = 1;
        foreach (GameObject[] array in elementArrays)
        {
            RadixSortScript ss = gameObject.AddComponent<RadixSortScript> ();
            ss.startSort(array);
        }
        locked = 0;
	}

    public List<GameObject[]> getElementArrays()
    {
        GameObject[] container = GameObject.FindGameObjectsWithTag("Container");
        List<GameObject[]> elementArrays = new List<GameObject[]>();

        for (int i = 0; i < container.Length; i++)
        {
            if (container[i].GetComponent<ElementContainerScript>().getHighlighted())
            {
                GameObject parent = container[i].transform.parent.gameObject;
                if (parent != null)
                {
                    elementArrays.Add(parent.GetComponent<SortingBoxScript>().getElementArray());
                    Debug.Log("Added element array");
                }
            }
        }
        return elementArrays;
    }

    private int getNewElementSize()
    {
        Dropdown dd = GameObject.Find("ElementCountDropdown").GetComponent<Dropdown>();
        if (dd == null)
            return 0;

        string val = dd.captionText.text;
        int size = 0;
        int.TryParse(val, out size);

        return size;
    }

    private void setElementDropdown(int size)
    {
        Dropdown dd = GameObject.Find("ElementCountDropdown").GetComponent<Dropdown>();
        if (dd == null)
            return;

        for (int i = 0; i < dd.options.Count; i++)
        {
            if (dd.options[i].text.Equals(size.ToString()))
            {
                dd.value = i;
                break;
            }
        }
    }
}
