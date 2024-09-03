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
	public class GizmoDblAxisScaleDrag3D : GizmoPlaneDrag3D
	{
		// Fields
		private WorkData _workData;
		private float _accumSnapDrag0;
		private float _accumSnapDrag1;
		private float _scale0;
		private float _scale1;
		private float _relativeScale0;
		private float _relativeScale1;
		private float _totalScale0;
		private float _totalScale1;
		private Vector3 _scaleDragAxis;
	
		// Properties
		public override GizmoDragChannel DragChannel { get; }
		public int AxisIndex0 { get; }
		public int AxisIndex1 { get; }
		public float RelativeScale0 { get; }
		public float RelativeScale1 { get; }
		public float TotalScale0 { get; }
		public float TotalScale1 { get; }
	
		// Nested types
		public struct WorkData
		{
			// Fields
			public int AxisIndex0;
			public int AxisIndex1;
			public Vector3 DragOrigin;
			public Vector3 Axis0;
			public Vector3 Axis1;
			public float SnapStep;
		}
	
		// Constructors
		public GizmoDblAxisScaleDrag3D();
	
		// Methods
		public void SetWorkData(WorkData workData);
		protected override Plane CalculateDragPlane();
		protected override void CalculateDragValues();
		protected override void OnSessionEnd();
	}
}
