using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwapManagerScript : MonoBehaviour {

	public Button pauseResume;
	public Sprite pauseSprite, resumeSprite;
	public bool isPaused;
	// Use this for initialization
	void Start () {
		SetPaused(false);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void OnPauseResumeClick()
	{
		SetPaused(!isPaused);
	}

	private void SetPaused(bool isPaused_)
	{
		isPaused = isPaused_;
		if (isPaused)
		{
			//LeanTween.pauseAll();
			pauseResume.image.sprite = resumeSprite;
		}
		else
		{
			//LeanTween.resumeAll();
			pauseResume.image.sprite = pauseSprite;
		}
	}
}
