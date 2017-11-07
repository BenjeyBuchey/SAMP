using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExecuteButtonScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		setPosition();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void setPosition()
	{
		Vector2 pos = gameObject.GetComponent<RectTransform>().anchoredPosition;
		RectTransform rt = gameObject.GetComponent<RectTransform>();

		//RectTransform parent_rts = gameObject.GetComponentsInParent<RectTransform>();
		//RectTransform parent_rt;
		//Debug.Log("PARENT: " + parent_rt.transform.name);

		//pos.x -= parent_rt.rect.width / 2;
		//pos.y += parent_rt.rect.height / 2;
		gameObject.GetComponent<RectTransform>().anchoredPosition = pos;
	}
}
