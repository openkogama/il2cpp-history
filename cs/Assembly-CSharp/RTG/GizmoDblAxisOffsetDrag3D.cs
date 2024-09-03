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
	public class GizmoDblAxisOffsetDrag3D : GizmoPlaneDrag3D
	{
		// Fields
		private float _accumSnapDrag0;
		private float _accumSnapDrag1;
		private WorkData _workData;
	
		// Properties
		public override GizmoDragChannel DragChannel { get; }
	
		// Nested types
		public struct WorkData
		{
			// Fields
			public Vector3 DragOrigin;
			public Vector3 Axis0;
			public Vector3 Axis1;
			public float SnapStep0;
			public float SnapStep1;
		}
	
		// Constructors
		public GizmoDblAxisOffsetDrag3D();
	
		// Methods
		public void SetWorkData(WorkData workData);
		protected override Plane CalculateDragPlane();
		protected override void CalculateDragValues();
		protected override void OnSessionEnd();
	}
}
