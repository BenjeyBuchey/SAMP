using UnityEngine;
using System.Collections;

public class MoveHelperScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void changeColor(GameObject go1, GameObject go2, bool is_moving, ref Color prevColor, ref Color prevColor2)
	{
		if (is_moving)
		{
			prevColor = Color.red;
			prevColor2 = Color.red;

			if (go1 != null) 
			{
				foreach (Transform child in go1.transform) 
				{
					if (child.tag.Equals ("BasicElement")) 
					{
						prevColor = child.GetComponent<Renderer> ().material.color;
						child.GetComponent<Renderer> ().material.color = Color.green;
					}
				}
			}

			if (go2 != null) 
			{
				foreach (Transform child in go2.transform) 
				{
					if (child.tag.Equals ("BasicElement")) 
					{
						prevColor2 = child.GetComponent<Renderer> ().material.color;
						child.GetComponent<Renderer> ().material.color = Color.green;
					}
				}
			}
		} 
		else 
		{
			if (go1 != null) 
			{
				foreach (Transform child in go1.transform) 
				{
					if (child.tag.Equals ("BasicElement"))
						child.GetComponent<Renderer> ().material.color = prevColor;
				}
			}

			if (go2 != null) 
			{
				foreach (Transform child in go2.transform) 
				{
					if (child.tag.Equals ("BasicElement"))
						child.GetComponent<Renderer> ().material.color = prevColor2;
				}
			}
		}
	}
		
}
