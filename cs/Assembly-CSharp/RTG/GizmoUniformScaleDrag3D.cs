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
	public class GizmoUniformScaleDrag3D : GizmoPlaneDrag3D
	{
		// Fields
		private WorkData _workData;
		private Vector3 _planeAxis0;
		private Vector3 _planeAxis1;
		private float _accumSnapDrag;
		private float _scale;
		private float _relativeScale;
		private float _totalScale;
		private Vector3 _scaleDragAxis;
	
		// Properties
		public override GizmoDragChannel DragChannel { get; }
		public float TotalScale { get; }
		public float RelativeScale { get; }
	
		// Nested types
		public struct WorkData
		{
			// Fields
			public Vector3 CameraRight;
			public Vector3 CameraUp;
			public Vector3 DragOrigin;
			public float SnapStep;
		}
	
		// Constructors
		public GizmoUniformScaleDrag3D();
	
		// Methods
		public void SetWorkData(WorkData workData);
		protected override Plane CalculateDragPlane();
		protected override void CalculateDragValues();
		protected override void OnSessionEnd();
	}
}
