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
	public class GizmoCircle2DBorder
	{
		// Fields
		private GizmoPlaneSlider2D _planeSlider;
		private GizmoHandle _targetHandle;
		private CircleShape2D _targetCircle;
		private bool _isVisible;
		private bool _isHoverable;
		private int _borderCircleIndex;
		private CircleShape2D _borderCircle;
		private GizmoCircle2DBorderControllerData _controllerData;
		private IGizmoCircle2DBorderController[] _controllers;
	
		// Properties
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
	
		// Constructors
		public GizmoCircle2DBorder(GizmoPlaneSlider2D planeSlider, GizmoHandle targetHandle, CircleShape2D targetCircle);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public void OnCircleShapeChanged();
		public void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
	}
}
