using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ExecuteButtonScript : MonoBehaviour {

	public GameObject execute_button;
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

		RectTransform[] parent_rts = gameObject.GetComponentsInParent<RectTransform>();

		foreach (RectTransform parent_rt in parent_rts)
		{
			if(parent_rt.transform.name.Equals("CodeField"))
			{
				pos.x -= parent_rt.rect.width / 2 + rt.rect.width/2;
				pos.y -= parent_rt.rect.height / 2 - rt.rect.height/2;
				gameObject.GetComponent<RectTransform>().anchoredPosition = pos;
			}
		}
	}

	public void exec()
	{
		if (HelperScript.IsPaused()) return;
		
		//get command string from codefield
		//execute inputscript function
		GameObject codefield = execute_button.transform.parent.gameObject;
		if (codefield == null) return;

		//var inputfield = codefield.GetComponent<UnityEngine.UI.InputField>();
		var inputfield = codefield.GetComponent<TMPro.TMP_InputField>();
		if (inputfield == null) return;

		gameObject.GetComponent<InputScript>().exec(inputfield.text);
	}
}