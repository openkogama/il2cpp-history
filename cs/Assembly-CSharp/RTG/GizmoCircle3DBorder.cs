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
	public class GizmoCircle3DBorder
	{
		// Fields
		private GizmoPlaneSlider3D _planeSlider;
		private GizmoHandle _targetHandle;
		private CircleShape3D _targetCircle;
		private bool _isVisible;
		private bool _isHoverable;
		private int _borderCircleIndex;
		private int _borderTorusIndex;
		private int _borderCylTorusIndex;
		private CircleShape3D _borderCircle;
		private TorusShape3D _borderTorus;
		private CylTorusShape3D _borderCylTorus;
		private GizmoCircle3DBorderControllerData _controllerData;
		private IGizmoCircle3DBorderController[] _controllers;
	
		// Properties
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
		public Gizmo Gizmo { get; }
	
		// Constructors
		public GizmoCircle3DBorder(GizmoPlaneSlider3D planeSlider, GizmoHandle targetHandle, CircleShape3D targetCircle);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public float GetZoomFactor(Camera camera);
		public float GetRealTorusThickness(float zoomFactor);
		public float GetRealCylTorusWidth(float zoomFactor);
		public float GetRealCylTorusHeight(float zoomFactor);
		public void OnCircleShapeChanged();
		public void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
	}
}
