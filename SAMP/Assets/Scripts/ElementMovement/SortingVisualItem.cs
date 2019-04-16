using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

enum SortingVisualType { Swap = 0, Comparison = 1, Radix = 2 }

public class SortingVisualItem {

	private readonly GameObject _element1, _element2;
	private readonly int _type, _bucket, _bucketPosition;

	public GameObject Element1
	{
		get
		{
			return _element1;
		}
	}

	public GameObject Element2
	{
		get
		{
			return _element2;
		}
	}

	public int Type
	{
		get
		{
			return _type;
		}
	}

	public int Bucket
	{
		get
		{
			return _bucket;
		}
	}

	public int BucketPosition
	{
		get
		{
			return _bucketPosition;
		}
	}

	public SortingVisualItem(int type, GameObject element1, GameObject element2, int bucket = -1, int bucketPosition = -1)
	{
		_type = type;
		_element1 = element1;
		_element2 = element2;
		_bucket = bucket;
		_bucketPosition = bucketPosition;
	}
}
