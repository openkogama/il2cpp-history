/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class GizmoSglAxisRotationDrag3D : GizmoScreenDrag
	{
		// Fields
		private float _accumSnapDrag;
		private Plane _rotationPlane;
		private Vector3 _screenDragCircleTangent;
		private WorkData _workData;
		private bool _adjustRotationForAbsSnap;
		private float _relativeRotation;
		private float _totalRotation;
	
		// Properties
		public override GizmoDragChannel DragChannel { get; }
		public float RelativeRotation { get; }
		public float TotalRotation { get; }
		public Plane RotationPlane { get; }
	
		// Nested types
		public struct WorkData
		{
			// Fields
			public Vector3 RotationPlanePos;
			public Vector3 Axis;
			public GizmoSnapMode SnapMode;
			public float SnapStep;
		}
	
		// Constructors
		public GizmoSglAxisRotationDrag3D();
	
		// Methods
		public void SetWorkData(WorkData workData);
		protected override void CalculateDragValues();
		protected override void OnSessionBegin();
		protected override void OnSessionEnd();
	}
}
