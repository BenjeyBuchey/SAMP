using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DragAndDropHandler : MonoBehaviour, IDragHandler, IEndDragHandler, IBeginDragHandler {

	private Vector3 position;

	public void OnDrag(PointerEventData eventData)
	{
		if (HelperScript.IsPaused()) return;

		transform.position = Input.mousePosition;
	}

	public void OnBeginDrag(PointerEventData eventData)
	{
		position = transform.position;
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
					ApplyAlgorithmText(hit.transform.gameObject);
				}
			}
		}
		transform.position = position;
	}

	// Use this for initialization
	void Start () {
		
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