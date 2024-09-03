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
	public class GizmoSglAxisScaleDrag3D : GizmoPlaneDrag3D
	{
		// Fields
		private float _accumSnapDrag;
		private WorkData _workData;
		private float _scale;
		private float _relativeScale;
		private float _totalScale;
	
		// Properties
		public override GizmoDragChannel DragChannel { get; }
		public int AxisIndex { get; }
		public float RelativeScale { get; }
		public float TotalScale { get; }
	
		// Nested types
		public struct WorkData
		{
			// Fields
			public int AxisIndex;
			public Vector3 DragOrigin;
			public Vector3 Axis;
			public float SnapStep;
			public float EntityScale;
		}
	
		// Constructors
		public GizmoSglAxisScaleDrag3D();
	
		// Methods
		public void SetWorkData(WorkData workData);
		protected override Plane CalculateDragPlane();
		protected override void CalculateDragValues();
		protected override void OnSessionEnd();
	}
}
