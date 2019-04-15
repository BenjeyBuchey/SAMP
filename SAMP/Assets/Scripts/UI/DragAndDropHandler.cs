using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DragAndDropHandler : MonoBehaviour, IDragHandler, IEndDragHandler {

	private Vector3 position;

	public void OnDrag(PointerEventData eventData)
	{
		if (HelperScript.IsPaused()) return;

		transform.position = Input.mousePosition;
	}

	public void OnEndDrag(PointerEventData eventData)
	{
		// check if it was released over sorting box
		RaycastHit[] hits;
		Ray camRay = Camera.main.ScreenPointToRay(Input.mousePosition);
		hits = Physics.RaycastAll(camRay);
		if (hits != null)
		{
			foreach (RaycastHit hit in hits)
			{
				if (hit.transform.gameObject.tag == "Container")
				{
					Debug.Log("DRAG AND DROP HIT: " + hit.transform.gameObject.name);
					ApplyAlgorithmText(hit.transform.gameObject);
				}
			}
		}

		//PointerEventData pointerData = new PointerEventData(EventSystem.current);

		//pointerData.position = Input.mousePosition;

		//List<RaycastResult> results = new List<RaycastResult>();
		//EventSystem.current.RaycastAll(pointerData, results);
		//foreach(RaycastResult result in results)
		//{
		//	Debug.Log("DRAG AND DROP HIT: " + result.gameObject.name);
		//}

		transform.position = position;
	}

	// Use this for initialization
	void Start () {
		position = transform.position;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	// go is a container --> set algorithm text
	private void ApplyAlgorithmText(GameObject go)
	{
		if (HelperScript.IsPaused() ||go == null) return;

			SortingBoxScript sbs = go.GetComponentInParent<SortingBoxScript>();
			if (sbs == null || sbs.isInUse()) return;

		sbs.setAlgorithmText(transform.gameObject.tag);
	}
}
