using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MoveHelperScript {

	private Color DEFAULT_COLOR = Color.red, SWAP_COLOR = Color.green, COMPARISON_COLOR = Color.blue;

	public void ChangeColor(GameObject element1, GameObject element2, int type, bool isDefaultColor)
	{
		//if (element1 == null || element2 == null) return;

		HandleColor(element1, type, isDefaultColor);
		HandleColor(element2, type, isDefaultColor);
	}

	private void HandleColor(GameObject element, int type, bool isDefaultColor)
	{
		if (element == null) return;

		foreach (Transform child in element.transform)
		{
			if (child.tag.Equals("BasicElement"))
			{
				switch(type)
				{
					case (int)SortingVisualType.Swap:
						if (isDefaultColor)
							child.GetComponent<Renderer>().material.color = DEFAULT_COLOR;
						else
							child.GetComponent<Renderer>().material.color = SWAP_COLOR;
						break;
					case (int)SortingVisualType.Comparison:
						if (isDefaultColor)
							child.GetComponent<Renderer>().material.color = DEFAULT_COLOR;
						else
							child.GetComponent<Renderer>().material.color = COMPARISON_COLOR;
						break;
				}
			}
		}
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

	public void stopSortingboxUsage(GameObject go)
	{
		if (go == null) return;

		SortingBoxScript sbs = go.GetComponentInParent<SortingBoxScript>();
		if (sbs == null) return;

		sbs.setInUse(false);
	}

	public float GetSwapSpeed(int type)
	{
		GameObject go = GameObject.Find("SwapSpeedSlider");
		if (go == null) return 0.0f;

		Slider s = go.GetComponent<Slider>();
		if (s == null) return 0.0f;

		float modifier = (type == (int)SortingVisualType.Comparison) ? 2.0f : 1.0f;

		return s.value * -1 / modifier;
	}
}
