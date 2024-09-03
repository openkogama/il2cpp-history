/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class ObjectPool
	{
		// Fields
		private GameObject _sourceObject;
		private GrowMode _growMode;
		private int _growAmount;
		private List<GameObject> _pooledObjects;
		private Transform _pooledParent;
	
		// Properties
		public GrowMode PoolGrowMode { get; set; }
		public int GrowAmount { get; set; }
	
		// Nested types
		public enum GrowMode
		{
			None = 0,
			Increment = 1,
			ByAmount = 2
		}
	
		// Constructors
		public ObjectPool(GameObject sourceObject, int numPooled, GrowMode growMode);
	
		// Methods
		public void SetPooledObjectsParent(Transform parent);
		public GameObject GetPooledObject();
		public void MarkAsUnused(GameObject gameObject);
		public void MarkAllAsUnused();
		private void Grow();
		private GameObject CreatePooledObject();
	}
}
