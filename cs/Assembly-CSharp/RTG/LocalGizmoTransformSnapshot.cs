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
	public class LocalGizmoTransformSnapshot
	{
		// Fields
		private GizmoTransform _transform;
		private GizmoTransform _parentTransform;
		private Vector3 _localPosition3D;
		private Quaternion _localRotation3D;
		private Vector2 _localPosition2D;
		private float _localRotation2D_Degrees;
	
		// Properties
		public GizmoTransform Transform { get; }
	
		// Constructors
		public LocalGizmoTransformSnapshot();
	
		// Methods
		public static List<LocalGizmoTransformSnapshot> GetSnapshotCollection(IEnumerable<Gizmo> gizmos);
		public void Snapshot(GizmoTransform transform);
		public void Apply();
	}
}
