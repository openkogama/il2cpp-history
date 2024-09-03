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
	public class LocalTransformSnapshot
	{
		// Fields
		private Transform _transform;
		private Transform _parentTransform;
		private Vector3 _localPosition;
		private Quaternion _localRotation;
		private Vector3 _localScale;
	
		// Properties
		public Transform Transform { get; }
	
		// Constructors
		public LocalTransformSnapshot();
	
		// Methods
		public static List<LocalTransformSnapshot> GetSnapshotCollection(IEnumerable<GameObject> gameObjects);
		public void Snapshot(Transform transform);
		public bool SameAs(Transform transform);
		public void Apply();
	}
}
