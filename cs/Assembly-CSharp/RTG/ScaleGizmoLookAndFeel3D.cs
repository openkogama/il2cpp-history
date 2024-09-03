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
	public class ScaleGizmoLookAndFeel3D : Settings
	{
		// Fields
		[SerializeField]
		private GizmoCap3DLookAndFeel _midCapLookAndFeel;
		[SerializeField]
		private bool[] _sglSliderVis;
		[SerializeField]
		private bool[] _sglSliderCapVis;
		[SerializeField]
		private bool[] _dblSliderVis;
		[SerializeField]
		private GizmoScaleGuideLookAndFeel _scaleGuideLookAndFeel;
		[SerializeField]
		private bool _isScaleGuideVisible;
		[SerializeField]
		private GizmoLineSlider3DLookAndFeel[] _sglSlidersLookAndFeel;
		[SerializeField]
		private GizmoPlaneSlider3DLookAndFeel[] _dblSlidersLookAndFeel;
	
		// Properties
		public float Scale { get; }
		public bool UseZoomFactor { get; }
		public float SliderLength { get; }
		public float BoxSliderHeight { get; }
		public float BoxSliderDepth { get; }
		public float CylinderSliderRadius { get; }
		public float SliderBoxCapWidth { get; }
		public float SliderBoxCapHeight { get; }
		public float SliderBoxCapDepth { get; }
		public float SliderConeCapHeight { get; }
		public float SliderConeCapBaseRadius { get; }
		public float SliderPyramidCapWidth { get; }
		public float SliderPyramidCapHeight { get; }
		public float SliderPyramidCapDepth { get; }
		public float SliderTriPrismCapWidth { get; }
		public float SliderTriPrismCapHeight { get; }
		public float SliderTriPrismCapDepth { get; }
		public float SliderSphereCapRadius { get; }
		public GizmoFillMode3D SliderFillMode { get; }
		public GizmoFillMode3D SliderCapFillMode { get; }
		public GizmoCap3DType SliderCapType { get; }
		public GizmoShadeMode SliderShadeMode { get; }
		public GizmoShadeMode SliderCapShadeMode { get; }
		public GizmoLine3DType SliderLineType { get; }
		public Color XColor { get; }
		public Color YColor { get; }
		public Color ZColor { get; }
		public float DblSliderSize { get; }
		public float DblSliderFillAlpha { get; }
		public float MidCapBoxWidth { get; }
		public float MidCapBoxHeight { get; }
		public float MidCapBoxDepth { get; }
		public float MidCapSphereRadius { get; }
		public GizmoCap3DType MidCapType { get; }
		public GizmoShadeMode MidCapShadeMode { get; }
		public GizmoFillMode3D MidCapFillMode { get; }
		public Color MidCapColor { get; }
		public Color HoveredColor { get; }
		public bool IsScaleGuideVisible { get; }
		public float ScaleGuideAxisLength { get; }
	
		// Constructors
		public ScaleGizmoLookAndFeel3D();
	
		// Methods
		public void SetScaleGuideVisible(bool isVisible);
		public bool IsDblSliderVisible(PlaneId planeId);
		public void SetDblSliderVisible(PlaneId planeId, bool isVisible);
		public bool IsSliderVisible(int axisIndex, AxisSign axisSign);
		public bool IsSliderCapVisible(int axisIndex, AxisSign axisSign);
		public bool IsPositiveSliderVisible(int axisIndex);
		public bool IsPositiveSliderCapVisible(int axisIndex);
		public bool IsNegativeSliderVisible(int axisIndex);
		public bool IsNegativeSliderCapVisible(int axisIndex);
		public void SetSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetPositiveSliderVisible(int axisIndex, bool isVisible);
		public void SetPositiveCapVisible(int axisIndex, bool isVisible);
		public void SetNegativeSliderVisible(int axisIndex, bool isVisible);
		public void SetNegativeCapVisible(int axisIndex, bool isVisible);
		public void SetSliderLength(float axisLength);
		public void SetSliderLineType(GizmoLine3DType lineType);
		public void SetBoxSliderHeight(float height);
		public void SetBoxSliderDepth(float depth);
		public void SetCylinderSliderRadius(float radius);
		public void SetScale(float scale);
		public void SetUseZoomFactor(bool useZoomFactor);
		public void SetScaleGuideAxisLength(float length);
		public void SetAxisColor(int axisIndex, Color color);
		public void SetDblSliderFillAlpha(float alpha);
		public void SetMidCapColor(Color color);
		public void SetHoveredColor(Color hoveredColor);
		public void SetSliderShadeMode(GizmoShadeMode shadeMode);
		public void SetSliderCapShadeMode(GizmoShadeMode shadeMode);
		public void SetMidCapShadeMode(GizmoShadeMode shadeMode);
		public void SetSliderCapType(GizmoCap3DType capType);
		public void SetMidCapType(GizmoCap3DType capType);
		public bool IsMidCapTypeAllowed(GizmoCap3DType capType);
		public List<Enum> GetAllowedMidCapTypes();
		public void SetSliderFillMode(GizmoFillMode3D fillMode);
		public void SetSliderCapFillMode(GizmoFillMode3D fillMode);
		public void SetMidCapFillMode(GizmoFillMode3D fillMode);
		public void SetSliderBoxCapWidth(float width);
		public void SetSliderBoxCapHeight(float height);
		public void SetSliderBoxCapDepth(float depth);
		public void SetSliderConeCapHeight(float height);
		public void SetSliderConeCapBaseRadius(float radius);
		public void SetSliderPyramidCapWidth(float width);
		public void SetSliderPyramidCapHeight(float height);
		public void SetSliderPyramidCapDepth(float depth);
		public void SetSliderTriPrismCapWidth(float width);
		public void SetSliderTriPrismCapHeight(float height);
		public void SetSliderTriPrismCapDepth(float depth);
		public void SetSliderSphereCapRadius(float radius);
		public void SetMidCapBoxWidth(float width);
		public void SetMidCapBoxHeight(float height);
		public void SetMidCapBoxDepth(float depth);
		public void SetMidCapSphereRadius(float radius);
		public void SetDblSliderSize(float size);
		public void ConnectSliderLookAndFeel(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign);
		public void ConnectMidCapLookAndFeel(GizmoCap3D cap);
		public void ConnectDblSliderLookAndFeel(GizmoPlaneSlider3D slider, PlaneId planeId);
		public void ConnectGizmoScaleGuideLookAndFeel(GizmoScaleGuide scaleGuide);
		private GizmoLineSlider3DLookAndFeel GetSglSliderLookAndFeel(int axisIndex, AxisSign axisSign);
		private GizmoPlaneSlider3DLookAndFeel GetDblSliderLookAndFeel(PlaneId planeId);
	}
}
