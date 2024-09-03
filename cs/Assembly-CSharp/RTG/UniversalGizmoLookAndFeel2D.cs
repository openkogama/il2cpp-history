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
	public class UniversalGizmoLookAndFeel2D : Settings
	{
		// Fields
		[SerializeField]
		private UniversalGizmoSettingsCategory _displayCategory;
		[SerializeField]
		private GizmoPlaneSlider2DLookAndFeel _mvDblSliderLookAndFeel;
		[SerializeField]
		private GizmoLineSlider2DLookAndFeel[] _mvSglSliderLookAndFeel;
		[SerializeField]
		private bool _isMvDblSliderVisible;
		[SerializeField]
		private bool[] _mvSglSliderVis;
		[SerializeField]
		private bool[] _mvSglSliderCapVis;
	
		// Properties
		public float MvScale { get; }
		public float MvSliderLength { get; }
		public float MvBoxSliderThickness { get; }
		public float MvSliderArrowCapHeight { get; }
		public float MvSliderArrowCapBaseRadius { get; }
		public float MvSliderQuadCapWidth { get; }
		public float MvSliderQuadCapHeight { get; }
		public float MvSliderCircleCapRadius { get; }
		public float MvDblSliderQuadWidth { get; }
		public float MvDblSliderQuadHeight { get; }
		public float MvDblSliderCircleRadius { get; }
		public Color MvXColor { get; }
		public Color MvYColor { get; }
		public Color MvXBorderColor { get; }
		public Color MvYBorderColor { get; }
		public Color MvDblSliderColor { get; }
		public Color MvDblSliderBorderColor { get; }
		public Color MvDblSliderHoveredColor { get; }
		public Color MvDblSliderHoveredBorderColor { get; }
		public bool IsMvDblSliderVisible { get; }
		public Color MvSliderHoveredColor { get; }
		public Color MvSliderHoveredBorderColor { get; }
		public GizmoFillMode2D MvSliderFillMode { get; }
		public GizmoFillMode2D MvSliderCapFillMode { get; }
		public GizmoFillMode2D MvDblSliderFillMode { get; }
		public GizmoCap2DType MvSliderCapType { get; }
		public GizmoLine2DType MvSliderLineType { get; }
		public GizmoPlane2DType MvDblSliderPlaneType { get; }
		public UniversalGizmoSettingsCategory DisplayCategory { get; set; }
	
		// Constructors
		public UniversalGizmoLookAndFeel2D();
	
		// Methods
		public void SetMvDblSliderVisible(bool isVisible);
		public bool IsMvSliderVisible(int axisIndex, AxisSign axisSign);
		public bool IsMvPositiveSliderVisible(int axisIndex);
		public bool IsMvNegativeSliderVisible(int axisIndex);
		public void SetMvSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public bool IsMvSliderCapVisible(int axisIndex, AxisSign axisSign);
		public bool IsMvPositiveSliderCapVisible(int axisIndex);
		public bool IsMvNegativeSliderCapVisible(int axisIndex);
		public void SetMvSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetMvAxisColor(int axisIndex, Color color);
		public void SetMvAxisBorderColor(int axisIndex, Color color);
		public void SetMvSliderHoveredFillColor(Color color);
		public void SetMvSliderHoveredBorderColor(Color color);
		public void SetMvSliderFillMode(GizmoFillMode2D fillMode);
		public void SetMvDblSliderFillMode(GizmoFillMode2D fillMode);
		public void SetMvSliderCapFillMode(GizmoFillMode2D fillMode);
		public void SetMvSliderLineType(GizmoLine2DType lineType);
		public void SetMvBoxSliderThickness(float thickness);
		public void SetMvSliderLength(float length);
		public void SetMvSliderCapType(GizmoCap2DType capType);
		public void SetMvSliderArrowCapBaseRadius(float radius);
		public void SetMvSliderArrowCapHeight(float height);
		public void SetMvSliderQuadCapWidth(float width);
		public void SetMvSliderQuadCapHeight(float height);
		public void SetMvSliderCircleCapRadius(float radius);
		public void SetMvDblSliderPlaneType(GizmoPlane2DType sliderType);
		public void SetMvDblSliderQuadWidth(float width);
		public void SetMvDblSliderQuadHeight(float height);
		public void SetMvDblSliderCircleRadius(float radius);
		public void SetMvDblSliderColor(Color color);
		public void SetMvDblSliderBorderColor(Color color);
		public void SetMvDblSliderHoveredColor(Color color);
		public void SetMvDblSliderHoveredBorderColor(Color color);
		public void SetMvScale(float scale);
		public void ConnectMvSliderLookAndFeel(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign);
		public void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider2D slider);
		public void Inherit(MoveGizmoLookAndFeel2D lookAndFeel);
		private GizmoLineSlider2DLookAndFeel GetMvSliderLookAndFeel(int axisIndex, AxisSign axisSign);
	}
}
