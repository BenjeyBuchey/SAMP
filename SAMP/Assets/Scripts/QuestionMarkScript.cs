using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class QuestionMarkScript : MonoBehaviour, IPointerClickHandler, IPointerDownHandler, IPointerUpHandler
{
	public bool doWindow0 = true;
	public Rect windowRect = new Rect(20, 20, 120, 50);
	void OnGUI()
	{
		doWindow0 = GUI.Toggle(new Rect(10, 10, 100, 20), doWindow0, "Window 0");
		if (doWindow0)
			GUI.Window(0, new Rect(110, 10, 200, 60), DoMyWindow, "Basic Window");
	}
	void DoMyWindow(int windowID)
	{

	}

	public void OnPointerClick(PointerEventData eventData)
	{
		Debug.Log("CLICKED ON QUESTION MARK!!!");
	}

	public void OnPointerDown(PointerEventData eventData)
	{
	}

	public void OnPointerUp(PointerEventData eventData)
	{
	}
}
