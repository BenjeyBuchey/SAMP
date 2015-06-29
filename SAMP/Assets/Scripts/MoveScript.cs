using UnityEngine;
using System.Collections;

public class MoveScript : MonoBehaviour {

	private GameObject element;
	private Vector3 dest;
	private float speed = 10;

	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void FixedUpdate ()
	{
		if (element == null)
			return;

		StartCoroutine(DoMoving()); 

//		float step = speed * Time.deltaTime;
//		element.GetComponent<Rigidbody> ().position = Vector3.MoveTowards(element.GetComponent<Rigidbody> ().position
//		                                                                  , dest, step);

	}

	IEnumerator DoMoving()
	{
		float step = speed * Time.deltaTime;
		element.GetComponent<Rigidbody> ().position = Vector3.MoveTowards(element.GetComponent<Rigidbody> ().position
				                                                                  , dest, step);
		yield return new WaitForSeconds(2f);
	}

	public void swap(GameObject _element, Vector3 _dest)
	{
		element = _element;
		dest = _dest;
	}
}
