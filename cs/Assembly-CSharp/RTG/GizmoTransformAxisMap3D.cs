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
	public class GizmoTransformAxisMap3D
	{
		// Fields
		private Vector3 _freeAxis;
		private AxisDescriptor _mappedAxisDesc;
		private GizmoTransform _transform;
	
		// Properties
		public AxisDescriptor MappedAxisDesc { get; }
		public int MappedAxisIndex { get; }
		public AxisSign MappedAxisSign { get; }
		public bool IsMapped { get; }
		public Vector3 Axis { get; }
		public GizmoTransform Transform { get; }
	
		// Constructors
		public GizmoTransformAxisMap3D();
	
		// Methods
		public void Map(GizmoTransform transform, int axisIndex, AxisSign axisSign);
		public void Unmap();
		public void SetAxis(Vector3 axis);
		public void SetMappedAxis(Vector3 axis);
		public void SetFreeAxis(Vector3 axis);
	}
}
