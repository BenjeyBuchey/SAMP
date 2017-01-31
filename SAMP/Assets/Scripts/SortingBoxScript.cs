using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SortingBoxScript : MonoBehaviour {

    private GameObject[] elementArray;

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
}
