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
	public class GizmoDblAxisRotationDrag3D : GizmoScreenDrag
	{
		// Fields
		private WorkData _workData;
		private bool _adjustRotationForAbsSnap;
		private float _accumSnapDrag0;
		private float _accumSnapDrag1;
		private float _relativeRotation0;
		private float _relativeRotation1;
		private float _totalRotation0;
		private float _totalRotation1;
	
		// Properties
		public override GizmoDragChannel DragChannel { get; }
		public float RelativeRotation0 { get; }
		public float RelativeRotation1 { get; }
		public float TotalRotation0 { get; }
		public float TotalRotation1 { get; }
	
		// Nested types
		public struct WorkData
		{
			// Fields
			public Vector2 ScreenAxis0;
			public Vector2 ScreenAxis1;
			public Vector3 Axis0;
			public Vector3 Axis1;
			public GizmoSnapMode SnapMode;
			public float SnapStep0;
			public float SnapStep1;
		}
	
		// Constructors
		public GizmoDblAxisRotationDrag3D();
	
		// Methods
		public void SetWorkData(WorkData workData);
		protected override void CalculateDragValues();
		protected override void OnSessionEnd();
	}
}
