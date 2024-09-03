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
	public class GizmoTransformAxisMap2D
	{
		// Fields
		private Vector2 _freeAxis;
		private AxisDescriptor _mappedAxisDesc;
		private GizmoTransform _transform;
	
		// Properties
		public AxisDescriptor MappedAxisDesc { get; }
		public int MappedAxisIndex { get; }
		public AxisSign MappedAxisSign { get; }
		public bool IsMapped { get; }
		public Vector2 Axis { get; }
		public GizmoTransform Transform { get; }
	
		// Constructors
		public GizmoTransformAxisMap2D();
	
		// Methods
		public void Map(GizmoTransform transform, int axisIndex, AxisSign axisSign);
		public void Unmap();
		public void SetAxis(Vector2 axis);
		public void SetMappedAxis(Vector2 axis);
		public void SetFreeAxis(Vector2 axis);
	}
}
