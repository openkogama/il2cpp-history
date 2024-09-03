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
	public class GizmoRATriangle3DBorder
	{
		// Fields
		private GizmoPlaneSlider3D _planeSlider;
		private GizmoHandle _targetHandle;
		private RightAngTriangle3D _targetTriangle;
		private bool _isVisible;
		private bool _isHoverable;
		private int _borderTriangleIndex;
		private RightAngTriangle3D _borderTriangle;
		private GizmoRATriangle3DBorderControllerData _controllerData;
		private IGizmoRATriangle3DBorderController[] _controllers;
	
		// Properties
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
		public Gizmo Gizmo { get; }
	
		// Constructors
		public GizmoRATriangle3DBorder(GizmoPlaneSlider3D planeSlider, GizmoHandle targetHandle, RightAngTriangle3D targetRiangle);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public float GetZoomFactor(Camera camera);
		public void OnTriangleShapeChanged();
		public void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
	}
}
