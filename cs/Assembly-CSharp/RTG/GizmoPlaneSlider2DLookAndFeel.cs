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
	[Serializable]
	public class GizmoPlaneSlider2DLookAndFeel
	{
		// Fields
		[SerializeField]
		private GizmoFillMode2D _fillMode;
		[SerializeField]
		private GizmoPlane2DType _planeType;
		[SerializeField]
		private float _scale;
		[SerializeField]
		private float _quadWidth;
		[SerializeField]
		private float _quadHeight;
		[SerializeField]
		private float _circleRadius;
		[SerializeField]
		private bool _isRotationArcVisible;
		[SerializeField]
		private GizmoRotationArc2DLookAndFeel _rotationArcLookAndFeel;
		[SerializeField]
		private Color _color;
		[SerializeField]
		private Color _hoveredColor;
		[SerializeField]
		private Color _borderColor;
		[SerializeField]
		private Color _hoveredBorderColor;
		[SerializeField]
		private GizmoQuad2DBorderType _quadBorderType;
		[SerializeField]
		private GizmoCircle2DBorderType _circleBorderType;
		[SerializeField]
		private GizmoPolygon2DBorderType _polygonBorderType;
		[SerializeField]
		private float _borderPolyThickness;
	
		// Properties
		public GizmoFillMode2D FillMode { get; set; }
		public GizmoPlane2DType PlaneType { get; set; }
		public float Scale { get; set; }
		public float QuadWidth { get; set; }
		public float QuadHeight { get; set; }
		public float CircleRadius { get; set; }
		public bool IsRotationArcVisible { get; set; }
		public GizmoRotationArc2DLookAndFeel RotationArcLookAndFeel { get; }
		public Color Color { get; set; }
		public Color HoveredColor { get; set; }
		public Color BorderColor { get; set; }
		public Color HoveredBorderColor { get; set; }
		public GizmoQuad2DBorderType QuadBorderType { get; set; }
		public GizmoCircle2DBorderType CircleBorderType { get; set; }
		public GizmoPolygon2DBorderType PolygonBorderType { get; set; }
		public float BorderPolyThickness { get; set; }
	
		// Constructors
		public GizmoPlaneSlider2DLookAndFeel();
	}
}
