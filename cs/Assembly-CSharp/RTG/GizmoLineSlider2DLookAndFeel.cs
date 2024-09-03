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
	public class GizmoLineSlider2DLookAndFeel
	{
		// Fields
		[SerializeField]
		private GizmoLine2DType _lineType;
		[SerializeField]
		private GizmoFillMode2D _fillMode;
		[SerializeField]
		private float _length;
		[SerializeField]
		private float _scale;
		[SerializeField]
		private float _boxThickness;
		[SerializeField]
		private bool _isRotationArcVisible;
		[SerializeField]
		private Color _color;
		[SerializeField]
		private Color _hoveredColor;
		[SerializeField]
		private Color _borderColor;
		[SerializeField]
		private Color _hoveredBorderColor;
		[SerializeField]
		private GizmoRotationArc2DLookAndFeel _rotationArcLookAndFeel;
		[SerializeField]
		private GizmoCap2DLookAndFeel _capLookAndFeel;
	
		// Properties
		public GizmoLine2DType LineType { get; set; }
		public GizmoFillMode2D FillMode { get; set; }
		public float Length { get; set; }
		public float Scale { get; set; }
		public GizmoCap2DLookAndFeel CapLookAndFeel { get; }
		public float BoxThickness { get; set; }
		public bool IsRotationArcVisible { get; set; }
		public Color Color { get; set; }
		public Color HoveredColor { get; set; }
		public Color BorderColor { get; set; }
		public Color HoveredBorderColor { get; set; }
		public GizmoRotationArc2DLookAndFeel RotationArcLookAndFeel { get; }
	
		// Constructors
		public GizmoLineSlider2DLookAndFeel();
	}
}
