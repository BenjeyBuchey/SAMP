using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Linq;

public class ElementScript : MonoBehaviour {

	private GameObject[] elementArray;
	public GameObject element;
	public GameObject sortingbox;
    private int y_offset = 5;
    private int container_z_offset = 5, outer_z_offset = 15;
	private Dictionary<int, List<int>> randomNumberArrays = new Dictionary<int, List<int>>();

	// Use this for initialization
	void Start () {

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
		sortingbox_go.name = "SortingBox" + sortingbox_count;

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
        adjustTextLocation(sortingbox_go);

		// sets the initial positions of elements of this sorting box
		sortingbox_go.GetComponent<SortingBoxScript>().setInitialPositions();

	}

    private void adjustTextLocation(GameObject sortingbox_go)
    {
        // adjust position of element id text
        foreach (GameObject go in sortingbox_go.GetComponent<SortingBoxScript>().getElementArray())
        {
            float y_scale = go.GetComponentInChildren<Rigidbody>().transform.localScale.y;
            go.GetComponentInChildren<ElementTextScript>().setPosition(y_scale);
        }
    }

    private void adjustSortingBoxLocation(int count, GameObject sortingbox_go, int size)
    {
        Transform container_transform = sortingbox_go.transform.Find("Container");
        // container size
        Vector3 old_size = container_transform.localScale;
        Vector3 new_size = new Vector3(old_size.x, old_size.y, size*container_z_offset + 2*outer_z_offset); //  (size+1)*container_z_offset + outer_z_offset*2
        container_transform.localScale = new_size;

        //container posi
        float z = 0.0f;
        if (size % 2 == 0)
            z = -container_z_offset / 2.0f;
        Vector3 old_pos = container_transform.position;
        Vector3 new_pos = new Vector3(old_pos.x, old_pos.y - count * (container_transform.localScale.y + y_offset), z); // container_transform.localScale.z/2-container_z_offset
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
        //float position_z = 0.0f;
        float position_z = -(elements.Length-1) * container_z_offset/2;
        if (elements.Length % 2 == 0)
            position_z -= container_z_offset / 2.0f;


		// reshuffle if everything got cleared (1 gets spawned before here)
		GameObject[] boxes = GameObject.FindGameObjectsWithTag("SortingBoxes");
		if (boxes == null || boxes.Length == 1)
			randomNumberArrays.Clear();

		// replace with global array / dictionary with elementsize. if it doesn't exist yet create, else take same numbers.
		List<int> randomNumbers = new List<int>();
		if(!randomNumberArrays.TryGetValue(elements.Length, out randomNumbers))
		{
			randomNumbers = GetRandomNumbers(elements.Length);
			randomNumberArrays.Add(elements.Length, randomNumbers);
		}

		//List<int> randomNumbers = GetRandomNumbers(elements.Length);
		int uniqueNumbers = randomNumbers.Distinct().Count();
		float[] scale_array = fillScaleArray(uniqueNumbers);
		Dictionary<int, float> scalePerElement = GenerateScalePerElement(scale_array, randomNumbers);
		int i = 0;
        foreach (GameObject go in elements)
        {
			//set text & id
			go.GetComponentInChildren<TextMesh>().text = randomNumbers[i].ToString();
			go.GetComponent<SingleElementScript> ().setElementId (i);

			//adjust rigidbody
			float scale = scalePerElement[randomNumbers[i]];
			SetElementScale(go, randomNumbers[i], scale, position_z);
            setColor (go, scale);

            position_z += 5.0f;
            i++;
        }
        //shuffleGameObjects ();
    }

	private void SetElementScale(GameObject go, int number, float scale, float position_z)
	{
		Rigidbody rb = go.GetComponentInChildren<Rigidbody>();
		rb.transform.localScale = new Vector3(scale, scale, scale);

		go.transform.position = new Vector3(rb.position.x, rb.position.y, position_z);
	}

	private Dictionary<int,float> GenerateScalePerElement(float[] scale_array, List<int> randomNumbers)
	{
		Dictionary<int, float> scalePerElement = new Dictionary<int, float>();
		List<int> randomNumbersSorted = new List<int>(randomNumbers.ToArray());
		randomNumbersSorted.Sort();

		int i = 0;
		foreach(int randomNumber in randomNumbersSorted)
		{
			if (scalePerElement.ContainsKey(randomNumber))
				continue;

			scalePerElement.Add(randomNumber, scale_array[i]);
			i++;
		}

		return scalePerElement;
	}

	private int GetCorrectScaleIndex(GameObject[] elements, int i)
	{
		//checks if previous go has the same number
		//--> go should have the same size
		if (i < 1) return i;

		if (elements[i].GetComponentInChildren<TextMesh>().text == elements[i - 1].GetComponentInChildren<TextMesh>().text)
			return i - 1;

		return i;
	}

	private void setColor(GameObject go, float scale)
	{
		float max_scale = 4.0F;
		int min_GB_color = 0;
		float multiplier = (255 - min_GB_color) / max_scale;
		float color = 1 - ((min_GB_color + scale * multiplier) / 255);

		foreach (Transform child in go.transform) 
		{
			if (child.tag.Equals ("BasicElement")) 
			{
				child.GetComponent<Renderer> ().material.color = new Color (1, color, color);
                child.GetComponent<TrailRenderer> ().material.color = new Color (1, color, color);
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

	// all sortingboxes with a set algorithm get started
	public void StartSort()
	{
		if (HelperScript.IsPaused()) return;

		GameObject[] boxes = GameObject.FindGameObjectsWithTag("SortingBoxes");
		foreach(GameObject box in boxes)
		{
			if (box == null) continue;

			// ignore when sbs null or no algorithm text is set or already in use
			SortingBoxScript sbs = box.GetComponent<SortingBoxScript>();
			if (sbs == null || string.IsNullOrEmpty(sbs.GetAlgorithmText()) || sbs.isInUse()) continue;

			BucketScript bs = box.GetComponent<BucketScript>();
			if (bs == null) continue;

			sbs.setInUse(true);
			bs.deleteBuckets();

			switch(sbs.GetAlgorithmText())
			{
				case Algorithms.QUICKSORT:
					StartSortQuickSort(sbs);
					break;

				case Algorithms.HEAPSORT:
					StartSortHeapSort(sbs);
					break;

				case Algorithms.MERGESORT:
					StartSortMergeSort(sbs);
					break;

				case Algorithms.GNOMESORT:
					StartSortGnomeSort(sbs);
					break;

				case Algorithms.RADIXSORT:
					StartSortRadixSort(sbs,bs);
					break;
			}
		}
	}

	private void StartSortQuickSort(SortingBoxScript sbs)
	{
		if (sbs == null) return;

		setTrailRenderer(sbs.getElementArray(), true);
		sbs.ActivateSwapsCounter();

		QuickSortScript ss = new QuickSortScript();
		//List<GameObject> swappingQueue = ss.startSort(sbs.getElementArray(), 0, sbs.getElementArray().Length);
		List<SortingVisualItem> swappingQueue = ss.StartSort(sbs.getElementArray(), 0, sbs.getElementArray().Length);

		if (swappingQueue != null && swappingQueue.Count >= 1)
		{
			MoveScript m = gameObject.AddComponent<MoveScript>();
			m.Swap(swappingQueue);
		}
		else
			sbs.setInUse(false);
	}

	private void StartSortHeapSort(SortingBoxScript sbs)
	{
		if (sbs == null) return;

		setTrailRenderer(sbs.getElementArray(), true);
		sbs.ActivateSwapsCounter();

		HeapSortScript ss = new HeapSortScript();
		//List<GameObject> swappingQueue = ss.startSort(sbs.getElementArray());
		List<SortingVisualItem> swappingQueue = ss.StartSort(sbs.getElementArray());

		if (swappingQueue != null && swappingQueue.Count >= 1)
		{
			MoveScript m = gameObject.AddComponent<MoveScript>();
			m.Swap(swappingQueue);
		}
		else
			sbs.setInUse(false);
	}

	private void StartSortMergeSort(SortingBoxScript sbs)
	{
		if (sbs == null) return;

		setTrailRenderer(sbs.getElementArray(), true);

		MergeSortScript ss = new MergeSortScript();
		List<GameObject> swappingQueue = ss.startSort(sbs.getElementArray());

		if (swappingQueue != null && swappingQueue.Count >= 1)
		{
			MergeMoveScript m = gameObject.AddComponent<MergeMoveScript>();
			m.swap(swappingQueue);
		}
		else
			sbs.setInUse(false);
	}

	private void StartSortGnomeSort(SortingBoxScript sbs)
	{
		if (sbs == null) return;

		setTrailRenderer(sbs.getElementArray(), true);
		sbs.ActivateSwapsCounter();

		GnomeSortScript ss = new GnomeSortScript();
		//List<GameObject> swappingQueue = ss.startSort(sbs.getElementArray());
		List<SortingVisualItem> swappingQueue = ss.StartSort(sbs.getElementArray());

		if (swappingQueue != null && swappingQueue.Count >= 1)
		{
			MoveScript m = gameObject.AddComponent<MoveScript>();
			m.Swap(swappingQueue);
		}
		else
			sbs.setInUse(false);
	}

	private void StartSortRadixSort(SortingBoxScript sbs, BucketScript bs)
	{
		if (sbs == null || bs == null) return;

		setTrailRenderer(sbs.getElementArray(), false);
		bs.createBuckets();

		RadixSortScript ss = new RadixSortScript();
		List<BucketElementObject> bucket_element_objects = ss.startSort(sbs.getElementArray());

		if (bucket_element_objects != null && bucket_element_objects.Count >= 1)
		{
			RadixMoveScript m = gameObject.AddComponent<RadixMoveScript>();
			m.swap_new(bucket_element_objects);
		}
		else
			sbs.setInUse(false);
	}

	private void ApplyAlgorithmText(string text)
	{
		if (HelperScript.IsPaused()) return;

		GameObject[] boxes = GameObject.FindGameObjectsWithTag("SortingBoxes");
		foreach (GameObject box in boxes)
		{
			if (box == null) continue;

			SortingBoxScript sbs = box.GetComponent<SortingBoxScript>();
			if (sbs == null || sbs.isInUse()) continue;

			GameObject container = sbs.getContainer();
			if (container == null) continue;

			if (container.GetComponent<ElementContainerScript>().getHighlighted())
				sbs.setAlgorithmText(text);
		}
	}

	// only assigns sorting algo to sortingbox
	public void quickSort()
	{
		ApplyAlgorithmText(Algorithms.QUICKSORT);
	}

	public void heapSort()
	{
		ApplyAlgorithmText(Algorithms.HEAPSORT);
	}

	public void mergeSort()
	{
		ApplyAlgorithmText(Algorithms.MERGESORT);
	}

	public void gnomeSort()
	{
		ApplyAlgorithmText(Algorithms.GNOMESORT);
	}

	public void radixSort()
	{
		ApplyAlgorithmText(Algorithms.RADIXSORT);
	}

    public List<GameObject[]> getElementArrays(bool getsSetToInUse)
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
					if (!parent.GetComponent<SortingBoxScript>().isInUse())
					{
						if(getsSetToInUse)
							parent.GetComponent<SortingBoxScript>().setInUse(true);

						elementArrays.Add(parent.GetComponent<SortingBoxScript>().getElementArray());
					}
                }
            }
        }
        return elementArrays;
    }

	public void clearSortingboxes()
	{
		if (HelperScript.IsPaused()) return;

		GameObject[] boxes = GameObject.FindGameObjectsWithTag("SortingBoxes");
		if (boxes == null || boxes.Length == 0) return;

		foreach(GameObject box in boxes)
		{
			if(!box.GetComponent<SortingBoxScript>().isInUse())
			{
				Destroy(box);
			}
		}
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

    private void setTrailRenderer(GameObject[] array, bool visible)
    {
		foreach (GameObject go in array)
		{
			go.GetComponentInChildren<TrailRenderer>().enabled = visible;
			go.GetComponentInChildren<TrailRenderer>().Clear();
		}
    }

    private void createBuckets(List<GameObject[]> elementArrays)
    {
		foreach (GameObject[] go_array in elementArrays)
		{
			if (go_array.Length > 0)
			{
				SortingBoxScript sbs = go_array[0].GetComponentInParent<SortingBoxScript>();
				if (sbs == null) continue;

				GameObject container = sbs.getContainer();
				if (container == null) continue;

				if (container.GetComponent<ElementContainerScript>().getHighlighted())
				{
					BucketScript bs = container.GetComponentInParent<BucketScript>();
					if (bs != null)
						bs.createBuckets();
				}
			}
		}
	}

    private void deleteBuckets(List<GameObject[]> elementArrays)
    {
		foreach (GameObject[] go_array in elementArrays)
		{
			if (go_array.Length > 0)
			{
				SortingBoxScript sbs = go_array[0].GetComponentInParent<SortingBoxScript>();
				if (sbs == null) continue;

				GameObject container = sbs.getContainer();
				if (container == null) continue;

				if (container.GetComponent<ElementContainerScript>().getHighlighted())
				{
					BucketScript bs = container.GetComponentInParent<BucketScript>();
					if (bs != null)
						bs.deleteBuckets();
				}
			}
		}
	}

	// sets algorithm name in container
	// activates swapscounter for some algorithms
	private void setAlgorithmText(string text, List<GameObject[]> elementArrays, bool activateSwapsCounter)
	{
		foreach(GameObject[] go_array in elementArrays)
		{
			if(go_array.Length > 0)
			{
				SortingBoxScript sbs = go_array[0].GetComponentInParent<SortingBoxScript>();
				if (sbs == null) continue;

				GameObject container = sbs.getContainer();
				if (container == null) continue;

				if (container.GetComponent<ElementContainerScript>().getHighlighted())
					sbs.setAlgorithmText(text);

				if (activateSwapsCounter)
					sbs.ActivateSwapsCounter();
			}
		}
	}

	private void stopSortingboxUsage(GameObject[] array)
	{
		if (array == null || array.Length == 0) return;

		MoveHelperScript mhs = new MoveHelperScript();
		mhs.stopSortingboxUsage(array[0]);
	}

	// generates a sorted list with random numbers
	private List<int> GetRandomNumbers(int length)
	{
		List<int> randomNumbers = new List<int>();
		for (int i = 0; i < length; i++)
			randomNumbers.Add(Random.Range(1,99));

		//SetDebugNumbers(randomNumbers);
		//randomNumbers.Sort();
		return randomNumbers;
	}

	private void SetDebugNumbers(List<int> randomNumbers)
	{
		// debug
		randomNumbers[0] = 5;
		randomNumbers[1] = 5;
		randomNumbers[2] = 5;
		randomNumbers[3] = 66;
		randomNumbers[4] = 66;
		randomNumbers[5] = 66;
		randomNumbers[6] = 66;
	}
}
