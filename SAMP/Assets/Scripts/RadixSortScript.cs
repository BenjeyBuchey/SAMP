using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class RadixSortScript : MonoBehaviour {

	private GameObject[] elementArray;
	private List<GameObject> swappingQueue;

	// Use this for initialization
	void Start () {
		swappingQueue = new List<GameObject> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void startSort(GameObject[] array)
	{
		swappingQueue.Clear ();
		elementArray = array;
		myRadixSort ();

		// TODO: swappingqueue mit gameobject und destination position (slighty versetzt in höhe)
		if (swappingQueue != null && swappingQueue.Count >= 1) 
		{
//			MoveScript m = gameObject.AddComponent<MoveScript> ();
//			m.swap (swappingQueue);
			Debug.Log("GameObjects:");
			foreach (GameObject go in elementArray)
				Debug.Log (go.GetComponent<SingleElementScript> ().getElementId ());

			Debug.Log("Movement Order:");
			foreach(GameObject go in swappingQueue)
				Debug.Log (go.GetComponent<SingleElementScript> ().getElementId ());
		}
	}

	// Source: http://algorithmsandstuff.blogspot.co.at/2014/06/radix-sort-in-c-sharp.html
	private void myRadixSort()
	{
		bool isFinished = false;
		int digitPosition = 0;

		List<Queue<GameObject>> buckets = new List<Queue<GameObject>>();
		InitializeBuckets(buckets);

		while (!isFinished)
		{
			isFinished = true;

			foreach (GameObject go in elementArray)
			{
				int value = go.GetComponent<SingleElementScript> ().getElementId ();
				int bucketNumber = GetBucketNumber(value, digitPosition);
				if (bucketNumber > 0)
				{
					isFinished = false;
				}

				buckets[bucketNumber].Enqueue(go);
			}

			int i = 0;
			foreach (Queue<GameObject> bucket in buckets)
			{
				while (bucket.Count > 0)
				{
					elementArray[i] = bucket.Dequeue();
					swappingQueue.Add (elementArray [i]);
					i++;
				}
			}

			digitPosition++;
		}
	}

	private int GetBucketNumber(int value, int digitPosition)
	{
		int bucketNumber = (value / (int)Math.Pow(10, digitPosition)) % 10;
		return bucketNumber;
	}

	private static void InitializeBuckets(List<Queue<GameObject>> buckets)
	{
		for (int i = 0; i < 10; i++)
		{
			Queue<GameObject> q = new Queue<GameObject>();
			buckets.Add(q);
		}
	}
}
