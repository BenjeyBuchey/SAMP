using UnityEngine;
using System.Collections;

public class CameraSliderScript : MonoBehaviour {

    public float vSliderValue = 80;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
        checkZoom();
	}

    void OnGUI()
    {
        vSliderValue = GUI.VerticalSlider(new Rect(25, 50, 10, (Screen.height - 100)), vSliderValue, 100f, 60f);
    }

    private void checkZoom()
    {
        Camera camera = gameObject.GetComponent<Camera>();
		camera.fieldOfView = vSliderValue;
    }
}
