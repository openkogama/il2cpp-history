/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class MoveGizmoLookAndFeel2D : Settings
	{
		// Fields
		[SerializeField]
		private GizmoPlaneSlider2DLookAndFeel _dblSliderLookAndFeel;
		[SerializeField]
		private GizmoLineSlider2DLookAndFeel[] _sglSliderLookAndFeel;
		[SerializeField]
		private bool _isDblSliderVisible;
		[SerializeField]
		private bool[] _sglSliderVis;
		[SerializeField]
		private bool[] _sglSliderCapVis;
	
		// Properties
		public float Scale { get; }
		public float SliderLength { get; }
		public float BoxSliderThickness { get; }
		public float SliderArrowCapHeight { get; }
		public float SliderArrowCapBaseRadius { get; }
		public float SliderQuadCapWidth { get; }
		public float SliderQuadCapHeight { get; }
		public float SliderCircleCapRadius { get; }
		public float DblSliderQuadWidth { get; }
		public float DblSliderQuadHeight { get; }
		public float DblSliderCircleRadius { get; }
		public Color XColor { get; }
		public Color YColor { get; }
		public Color XBorderColor { get; }
		public Color YBorderColor { get; }
		public Color DblSliderColor { get; }
		public Color DblSliderBorderColor { get; }
		public Color DblSliderHoveredColor { get; }
		public Color DblSliderHoveredBorderColor { get; }
		public bool IsDblSliderVisible { get; }
		public Color SliderHoveredColor { get; }
		public Color SliderHoveredBorderColor { get; }
		public GizmoFillMode2D SliderFillMode { get; }
		public GizmoFillMode2D SliderCapFillMode { get; }
		public GizmoFillMode2D DblSliderFillMode { get; }
		public GizmoCap2DType SliderCapType { get; }
		public GizmoLine2DType SliderLineType { get; }
		public GizmoPlane2DType DblSliderPlaneType { get; }
	
		// Constructors
		public MoveGizmoLookAndFeel2D();
	
		// Methods
		public bool IsDblSliderPlaneTypeAllowed(GizmoPlane2DType planeType);
		public List<Enum> GetAllowedDblSliderPlaneTypes();
		public void SetDblSliderVisible(bool isVisible);
		public bool IsSliderVisible(int axisIndex, AxisSign axisSign);
		public bool IsPositiveSliderVisible(int axisIndex);
		public bool IsNegativeSliderVisible(int axisIndex);
		public void SetSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public bool IsSliderCapVisible(int axisIndex, AxisSign axisSign);
		public bool IsPositiveSliderCapVisible(int axisIndex);
		public bool IsNegativeSliderCapVisible(int axisIndex);
		public void SetSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetAxisColor(int axisIndex, Color color);
		public void SetAxisBorderColor(int axisIndex, Color color);
		public void SetSliderHoveredFillColor(Color color);
		public void SetSliderHoveredBorderColor(Color color);
		public void SetSliderFillMode(GizmoFillMode2D fillMode);
		public void SetDblSliderFillMode(GizmoFillMode2D fillMode);
		public void SetSliderCapFillMode(GizmoFillMode2D fillMode);
		public void SetSliderLineType(GizmoLine2DType lineType);
		public void SetBoxSliderThickness(float thickness);
		public void SetSliderLength(float length);
		public void SetSliderCapType(GizmoCap2DType capType);
		public void SetSliderArrowCapBaseRadius(float radius);
		public void SetSliderArrowCapHeight(float height);
		public void SetSliderQuadCapWidth(float width);
		public void SetSliderQuadCapHeight(float height);
		public void SetSliderCircleCapRadius(float radius);
		public void SetDblSliderPlaneType(GizmoPlane2DType sliderType);
		public void SetDblSliderQuadWidth(float width);
		public void SetDblSliderQuadHeight(float height);
		public void SetDblSliderCircleRadius(float radius);
		public void SetDblSliderColor(Color color);
		public void SetDblSliderBorderColor(Color color);
		public void SetDblSliderHoveredColor(Color color);
		public void SetDblSliderHoveredBorderColor(Color color);
		public void SetScale(float scale);
		public void ConnectSliderLookAndFeel(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign);
		public void ConnectDblSliderLookAndFeel(GizmoPlaneSlider2D slider);
		private GizmoLineSlider2DLookAndFeel GetSliderLookAndFeel(int axisIndex, AxisSign axisSign);
	}
}
