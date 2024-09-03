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
	public class GizmoPolygon2DBorder
	{
		// Fields
		private GizmoPlaneSlider2D _planeSlider;
		private GizmoHandle _targetHandle;
		private PolygonShape2D _targetPolygon;
		private bool _isVisible;
		private bool _isHoverable;
		private int _borderPolygonIndex;
		private int _thickBorderPolygonIndex;
		private PolygonShape2D _borderPolygon;
		private PolygonShape2D _thickBorderPolygon;
		private GizmoPolygon2DBorderControllerData _controllerData;
		private IGizmoPolygon2DBorderController[] _controllers;
	
		// Properties
		public bool IsVisible { get; }
		public bool IsHoverable { get; }
	
		// Constructors
		public GizmoPolygon2DBorder(GizmoPlaneSlider2D planeSlider, GizmoHandle targetHandle, PolygonShape2D targetPolygon);
	
		// Methods
		public void SetVisible(bool isVisible);
		public void SetHoverable(bool isHoverable);
		public void OnPolygonShapeChanged();
		public void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
	}
}
