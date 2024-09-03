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
	public class GizmoLineSlider3DLookAndFeel
	{
		// Fields
		[SerializeField]
		private GizmoShadeMode _shadeMode;
		[SerializeField]
		private GizmoLine3DType _lineType;
		[SerializeField]
		private GizmoFillMode3D _fillMode;
		[SerializeField]
		private float _length;
		[SerializeField]
		private float _scale;
		[SerializeField]
		private bool _useZoomFactor;
		[SerializeField]
		private float _boxHeight;
		[SerializeField]
		private float _boxDepth;
		[SerializeField]
		private float _cylinderRadius;
		[SerializeField]
		private bool _isRotationArcVisible;
		[SerializeField]
		private GizmoRotationArc3DLookAndFeel _rotationArcLookAndFeel;
		[SerializeField]
		private Color _color;
		[SerializeField]
		private Color _hoveredColor;
		[SerializeField]
		private GizmoCap3DLookAndFeel _capLookAndFeel;
	
		// Properties
		public GizmoShadeMode ShadeMode { get; set; }
		public GizmoLine3DType LineType { get; set; }
		public GizmoFillMode3D FillMode { get; set; }
		public float Length { get; set; }
		public float Scale { get; set; }
		public bool UseZoomFactor { get; set; }
		public bool IsRotationArcVisible { get; set; }
		public GizmoRotationArc3DLookAndFeel RotationArcLookAndFeel { get; }
		public GizmoCap3DLookAndFeel CapLookAndFeel { get; }
		public float BoxHeight { get; set; }
		public float BoxDepth { get; set; }
		public float CylinderRadius { get; set; }
		public Color Color { get; set; }
		public Color HoveredColor { get; set; }
	
		// Constructors
		public GizmoLineSlider3DLookAndFeel();
	}
}
