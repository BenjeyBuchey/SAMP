using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SwapManagerScript : MonoBehaviour {

	public Button pauseResume;
	public Sprite pauseSprite, resumeSprite;
	public bool isPaused = false;
	public GameObject elementController;
	// Use this for initialization
	void Start () {
		//SetPaused(false);
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

	public void Begin()
	{
		if (!isPaused) return;

		Debug.Log("BEGIN CLICKED");
	}

	public void End()
	{
		if (!isPaused) return;

		MoveScript[] moveScripts = FindObjectsOfType<MoveScript>() as MoveScript[];
		if (moveScripts == null || moveScripts.Length == 0) return;

		foreach (MoveScript ms in moveScripts)
		{
			ms.StepEnd();
		}
	}

	// execute next step for all sorting boxes that are in use (we can just find all movescripts)
	public void Next()
	{
		if (!isPaused) return;

		MoveScript[] moveScripts = FindObjectsOfType<MoveScript>() as MoveScript[];
		if (moveScripts == null || moveScripts.Length == 0) return;

		foreach(MoveScript ms in moveScripts)
		{
			ms.StepForward();
		}
	}

	public void Previous()
	{
		if (!isPaused) return;

		MoveScript[] moveScripts = FindObjectsOfType<MoveScript>() as MoveScript[];
		if (moveScripts == null || moveScripts.Length == 0) return;

		foreach (MoveScript ms in moveScripts)
		{
			ms.StepBackwards();
		}
	}
}
