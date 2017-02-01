using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElementContainerScript : MonoBehaviour {

	// Use this for initialization
    Color color_default = new Color (0.0f, 0.0f, 0.0f, 0.0f);
    private bool is_highlighted = false;

	void Start () {
        gameObject.GetComponent<Renderer>().material.color = color_default;
	}
	
	// Update is called once per frame
	void Update () 
    {
        
	}

    public void setHighlighted(bool value)
    {
        is_highlighted = value;
    }

    public bool getHighlighted()
    {
        return is_highlighted;
    }
}
