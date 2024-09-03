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
	public class GizmoQuad2DBorder
	{
		// Fields
		private GizmoPlaneSlider2D _planeSlider;
		private GizmoHandle _targetHandle;
		private QuadShape2D _targetQuad;
		private bool _isVisible;
		private bool _isHoverable;
		private int _borderQuadIndex;
		private QuadShape2D _borderQuad;
		private GizmoQuad2DBorderControllerData _controllerData;
		private IGizmoQuad2DBorderController[] _controllers;
	
		// Properties
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
	
		// Constructors
		public GizmoQuad2DBorder(GizmoPlaneSlider2D planeSlider, GizmoHandle targetHandle, QuadShape2D targetQuad);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public void OnQuadShapeChanged();
		public void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
	}
}
