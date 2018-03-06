using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwapManagerScript : MonoBehaviour {

	public Button pause, resume;
	private bool isPaused;
	// Use this for initialization
	void Start () {
		SetPaused(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnPauseClick()
	{
		SetPaused(true);
	}

	public void OnResumeClick()
	{
		SetPaused(false);
	}

	private void SetPaused(bool isPaused_)
	{
		isPaused = isPaused_;
		if (isPaused)
		{
			LeanTween.pauseAll();
			pause.interactable = false;
			resume.interactable = true;
		}
		else
		{
			LeanTween.resumeAll();
			pause.interactable = true;
			resume.interactable = false;
		}
	}
}
