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
	public class UniversalGizmoLookAndFeel3D : Settings
	{
		// Fields
		[SerializeField]
		private UniversalGizmoSettingsCategory _displayCategory;
		[SerializeField]
		private GizmoCap2DLookAndFeel _mvVertSnapCapLookAndFeel;
		[SerializeField]
		private bool[] _mvSglSliderVis;
		[SerializeField]
		private bool[] _mvSglSliderCapVis;
		[SerializeField]
		private bool[] _mvDblSliderVis;
		[SerializeField]
		private GizmoLineSlider3DLookAndFeel[] _mvSglSlidersLookAndFeel;
		[SerializeField]
		private GizmoPlaneSlider3DLookAndFeel[] _mvDblSlidersLookAndFeel;
		[SerializeField]
		private bool _isRtMidCapVisible;
		[SerializeField]
		private GizmoCap3DLookAndFeel _rtMidCapLookAndFeel;
		[SerializeField]
		private bool[] _rtAxesVis;
		[SerializeField]
		private GizmoPlaneSlider3DLookAndFeel[] _rtAxesLookAndFeel;
		[SerializeField]
		private bool _isRtCamLookSliderVisible;
		[SerializeField]
		private float _rtCamLookSliderRadiusOffset;
		[SerializeField]
		private GizmoPlaneSlider2DLookAndFeel _rtCamLookSliderLookAndFeel;
		[SerializeField]
		private GizmoCap3DLookAndFeel _scMidCapLookAndFeel;
		[SerializeField]
		private bool[] _scSglSliderVis;
		[SerializeField]
		private bool[] _scSglSliderCapVis;
		[SerializeField]
		private bool[] _scDblSliderVis;
		[SerializeField]
		private bool _isScMidCapVisible;
		[SerializeField]
		private GizmoScaleGuideLookAndFeel _scScaleGuideLookAndFeel;
		[SerializeField]
		private bool _isScScaleGuideVisible;
		[SerializeField]
		private GizmoLineSlider3DLookAndFeel[] _scSglSlidersLookAndFeel;
		[SerializeField]
		private GizmoPlaneSlider3DLookAndFeel[] _scDblSlidersLookAndFeel;
	
		// Properties
		public float MvScale { get; }
		public bool MvUseZoomFactor { get; }
		public float MvSliderLength { get; }
		public float MvBoxSliderHeight { get; }
		public float MvBoxSliderDepth { get; }
		public float MvCylinderSliderRadius { get; }
		public float MvSliderBoxCapWidth { get; }
		public float MvSliderBoxCapHeight { get; }
		public float MvSliderBoxCapDepth { get; }
		public float MvSliderConeCapHeight { get; }
		public float MvSliderConeCapBaseRadius { get; }
		public float MvSliderPyramidCapWidth { get; }
		public float MvSliderPyramidCapHeight { get; }
		public float MvSliderPyramidCapDepth { get; }
		public float MvSliderTriPrismCapWidth { get; }
		public float MvSliderTriPrismCapHeight { get; }
		public float MvSliderTriPrismCapDepth { get; }
		public float MvSliderSphereCapRadius { get; }
		public GizmoFillMode3D MvSliderFillMode { get; }
		public GizmoFillMode3D MvSliderCapFillMode { get; }
		public GizmoCap3DType MvSliderCapType { get; }
		public GizmoShadeMode MvSliderShadeMode { get; }
		public GizmoShadeMode MvSliderCapShadeMode { get; }
		public GizmoLine3DType MvSliderLineType { get; }
		public Color MvPXColor { get; }
		public Color MvNXColor { get; }
		public Color MvPYColor { get; }
		public Color MvNYColor { get; }
		public Color MvPZColor { get; }
		public Color MvNZColor { get; }
		public float MvDblSliderSize { get; }
		public float MvDblSliderBorderBoxHeight { get; }
		public float MvDblSliderBorderBoxDepth { get; }
		public float MvDblSliderFillAlpha { get; }
		public GizmoShadeMode MvDblSliderBorderShadeMode { get; }
		public GizmoQuad3DBorderType MvDblSliderBorderType { get; }
		public GizmoFillMode3D MvDblSliderBorderFillMode { get; }
		public float MvVertSnapCapQuadWidth { get; }
		public float MvVertSnapCapQuadHeight { get; }
		public float MvVertSnapCapCircleRadius { get; }
		public Color MvVertSnapCapColor { get; }
		public Color MvVertSnapCapBorderColor { get; }
		public Color MvVertSnapCapHoveredColor { get; }
		public Color MvVertSnapCapHoveredBorderColor { get; }
		public GizmoFillMode2D MvVertSnapCapFillMode { get; }
		public GizmoCap2DType MvVertSnapCapType { get; }
		public Color MvHoveredColor { get; }
		public float RtScale { get; }
		public float RtRadius { get; }
		public bool RtUseZoomFactor { get; }
		public Color RtXBorderColor { get; }
		public Color RtYBorderColor { get; }
		public Color RtZBorderColor { get; }
		public Color RtHoveredColor { get; }
		public float RtAxisTorusThickness { get; }
		public float RtAxisCylTorusWidth { get; }
		public float RtAxisCylTorusHeight { get; }
		public float RtAxisCullAlphaScale { get; }
		public GizmoShadeMode RtShadeMode { get; }
		public GizmoCircle3DBorderType RtAxisBorderType { get; }
		public GizmoFillMode3D RtAxisBorderFillMode { get; }
		public int RtNumAxisTorusWireAxialSlices { get; }
		public Color RtRotationArcColor { get; }
		public Color RtRotationArcBorderColor { get; }
		public bool RtUseShortestRotationArc { get; }
		public bool IsRtRotationArcVisible { get; }
		public Color RtMidCapColor { get; }
		public Color RtHoveredMidCapColor { get; }
		public bool IsRtMidCapVisible { get; }
		public bool IsRtMidCapBorderVisible { get; }
		public float RtCamLookSliderRadiusOffset { get; }
		public Color RtCamLookSliderBorderColor { get; }
		public Color RtCamLookSliderHoveredBorderColor { get; }
		public GizmoPolygon2DBorderType RtCamLookSliderPolyBorderType { get; }
		public float RtCamLookSliderPolyBorderThickness { get; }
		public bool IsRtCamLookSliderVisible { get; }
		public float ScScale { get; }
		public bool ScUseZoomFactor { get; }
		public float ScSliderLength { get; }
		public float ScBoxSliderHeight { get; }
		public float ScBoxSliderDepth { get; }
		public float ScCylinderSliderRadius { get; }
		public float ScSliderBoxCapWidth { get; }
		public float ScSliderBoxCapHeight { get; }
		public float ScSliderBoxCapDepth { get; }
		public float ScSliderConeCapHeight { get; }
		public float ScSliderConeCapBaseRadius { get; }
		public float ScSliderPyramidCapWidth { get; }
		public float ScSliderPyramidCapHeight { get; }
		public float ScSliderPyramidCapDepth { get; }
		public float ScSliderTriPrismCapWidth { get; }
		public float ScSliderTriPrismCapHeight { get; }
		public float ScSliderTriPrismCapDepth { get; }
		public float ScSliderSphereCapRadius { get; }
		public GizmoFillMode3D ScSliderFillMode { get; }
		public GizmoFillMode3D ScSliderCapFillMode { get; }
		public GizmoCap3DType ScSliderCapType { get; }
		public GizmoShadeMode ScSliderShadeMode { get; }
		public GizmoShadeMode ScSliderCapShadeMode { get; }
		public GizmoLine3DType ScSliderLineType { get; }
		public Color ScPXColor { get; }
		public Color ScNXColor { get; }
		public Color ScPYColor { get; }
		public Color ScNYColor { get; }
		public Color ScPZColor { get; }
		public Color ScNZColor { get; }
		public float ScDblSliderSize { get; }
		public float ScDblSliderFillAlpha { get; }
		public float ScMidCapBoxWidth { get; }
		public float ScMidCapBoxHeight { get; }
		public float ScMidCapBoxDepth { get; }
		public float ScMidCapSphereRadius { get; }
		public GizmoCap3DType ScMidCapType { get; }
		public GizmoShadeMode ScMidCapShadeMode { get; }
		public GizmoFillMode3D ScMidCapFillMode { get; }
		public bool IsScMidCapVisible { get; }
		public Color ScMidCapColor { get; }
		public Color ScHoveredColor { get; }
		public bool IsScScaleGuideVisible { get; }
		public float ScScaleGuideAxisLength { get; }
		public UniversalGizmoSettingsCategory DisplayCategory { get; set; }
	
		// Constructors
		public UniversalGizmoLookAndFeel3D();
	
		// Methods
		public bool IsMvVertSnapCapTypeAllowed(GizmoCap2DType capType);
		public List<Enum> GetAllowedMvVertSnapCapTypes();
		public void SetMvVertSnapCapType(GizmoCap2DType capType);
		public void SetMvVertSnapCapQuadWidth(float width);
		public void SetMvVertSnapCapQuadHeight(float height);
		public void SetMvVertSnapCapCircleRadius(float radius);
		public void SetMvVertSnapCapFillMode(GizmoFillMode2D fillMode);
		public void SetMvVertSnapCapColor(Color color);
		public void SetMvVertSnapCapBorderColor(Color color);
		public void SetMvVertSnapCapHoveredColor(Color color);
		public void SetMvVertSnapCapHoveredBorderColor(Color color);
		public bool IsMvSliderVisible(int axisIndex, AxisSign axisSign);
		public bool IsMvDblSliderVisible(PlaneId planeId);
		public bool IsMvSliderCapVisible(int axisIndex, AxisSign axisSign);
		public bool IsMvPositiveSliderVisible(int axisIndex);
		public bool IsMvPositiveSliderCapVisible(int axisIndex);
		public bool IsMvNegativeSliderVisible(int axisIndex);
		public bool IsMvNegativeSliderCapVisible(int axisIndex);
		public void SetMvSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetMvDblSliderVisible(PlaneId planeId, bool isVisible);
		public void SetMvSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetMvPositiveSliderVisible(int axisIndex, bool isVisible);
		public void SetMvPositiveSliderCapVisible(int axisIndex, bool isVisible);
		public void SetMvNegativeSliderVisible(int axisIndex, bool isVisible);
		public void SetMvNegativeSliderCapVisible(int axisIndex, bool isVisible);
		public void SetMvSliderLength(float axisLength);
		public void SetMvSliderLineType(GizmoLine3DType lineType);
		public void SetMvDblSliderBorderType(GizmoQuad3DBorderType borderType);
		public void SetMvDblSliderBorderBoxHeight(float height);
		public void SetMvDblSliderBorderBoxDepth(float depth);
		public void SetMvBoxSliderHeight(float height);
		public void SetMvBoxSliderDepth(float depth);
		public void SetMvCylinderSliderRadius(float radius);
		public void SetMvDblSliderSize(float size);
		public void SetMvScale(float scale);
		public void SetMvUseZoomFactor(bool useZoomFactor);
		public void SetMvAxisColor(int axisIndex, Color color);
		public void SetMvDblSliderFillAlpha(float alpha);
		public void SetMvHoveredColor(Color hoveredColor);
		public void SetMvSliderShadeMode(GizmoShadeMode shadeMode);
		public void SetMvSliderCapShadeMode(GizmoShadeMode shadeMode);
		public void SetMvDblSliderBorderShadeMode(GizmoShadeMode shadeMode);
		public void SetMvSliderCapType(GizmoCap3DType capType);
		public void SetMvSliderFillMode(GizmoFillMode3D fillMode);
		public void SetMvSliderCapFillMode(GizmoFillMode3D fillMode);
		public void SetMvDblSliderBorderFillMode(GizmoFillMode3D fillMode);
		public void SetMvSliderBoxCapWidth(float width);
		public void SetMvSliderBoxCapHeight(float height);
		public void SetMvSliderBoxCapDepth(float depth);
		public void SetMvSliderConeCapHeight(float height);
		public void SetMvSliderConeCapBaseRadius(float radius);
		public void SetMvSliderPyramidCapWidth(float width);
		public void SetMvSliderPyramidCapHeight(float height);
		public void SetMvSliderPyramidCapDepth(float depth);
		public void SetMvSliderTriPrismCapWidth(float width);
		public void SetMvSliderTriPrismCapHeight(float height);
		public void SetMvSliderTriPrismCapDepth(float depth);
		public void SetMvSliderSphereCapRadius(float radius);
		public void ConnectMvSliderLookAndFeel(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign);
		public void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider3D dblSlider, PlaneId planeId);
		public void ConnectMvVertSnapCapLookAndFeel(GizmoCap2D vertSnapCap);
		public void Inherit(MoveGizmoLookAndFeel3D lookAndFeel);
		private GizmoLineSlider3DLookAndFeel GetMvSglSliderLookAndFeel(int axisIndex, AxisSign axisSign);
		private GizmoPlaneSlider3DLookAndFeel GetMvDblSliderLookAndFeel(PlaneId planeId);
		public bool IsRtAxisVisible(int axisIndex);
		public void SetRtAxisVisible(int axisIndex, bool isVisible);
		public void SetRtShadeMode(GizmoShadeMode shadeMode);
		public void SetRtAxisBorderFillMode(GizmoFillMode3D fillMode);
		public void SetRtNumAxisTorusWireAxialSlices(int numSlices);
		public void SetRtUseZoomFactor(bool useZoomFactor);
		public void SetRtScale(float scale);
		public void SetRtRadius(float radius);
		public void SetRtAxisBorderCullAlphaScale(float scale);
		public void SetRtAxisBorderType(GizmoCircle3DBorderType borderType);
		public void SetRtAxisTorusThickness(float thickness);
		public void SetRtAxisCylTorusWidth(float width);
		public void SetRtAxisCylTorusHeight(float height);
		public void SetRtMidCapVisible(bool isVisible);
		public void SetRtMidCapColor(Color color);
		public void SetRtHoveredMidCapColor(Color color);
		public void SetRtMidCapBorderVisible(bool isVisible);
		public void SetRtMidCapBorderColor(Color color);
		public void SetRtAxisBorderColor(int axisIndex, Color color);
		public void SetRtHoveredColor(Color hoveredColor);
		public void SetRtRotationArcColor(Color color);
		public void SetRtRotationArcBorderColor(Color color);
		public void SetRtUseShortestRotationArc(bool useShortest);
		public void SetRtRotationArcVisible(bool isVisible);
		public void SetRtCamLookSliderRadiusOffset(float offset);
		public void SetRtCamLookSliderBorderColor(Color color);
		public void SetRtCamLookSliderHoveredBorderColor(Color color);
		public void SetRtCamLookSliderVisible(bool isVisible);
		public void SetRtCamLookSliderPolyBorderType(GizmoPolygon2DBorderType polyBorderType);
		public void SetRtCamLookSliderPolyBorderThickness(float thickness);
		public void ConnectRtSliderLookAndFeel(GizmoPlaneSlider3D slider, int axisIndex);
		public void ConnectRtMidCapLookAndFeel(GizmoCap3D cap);
		public void ConnectRtCamLookSliderLookAndFeel(GizmoPlaneSlider2D slider);
		public void Inherit(RotationGizmoLookAndFeel3D lookAndFeel);
		public void SetScScaleGuideVisible(bool isVisible);
		public bool IsScDblSliderVisible(PlaneId planeId);
		public void SetScDblSliderVisible(PlaneId planeId, bool isVisible);
		public bool IsScSliderVisible(int axisIndex, AxisSign axisSign);
		public bool IsScSliderCapVisible(int axisIndex, AxisSign axisSign);
		public bool IsScPositiveSliderVisible(int axisIndex);
		public bool IsScPositiveSliderCapVisible(int axisIndex);
		public bool IsScNegativeSliderVisible(int axisIndex);
		public bool IsScNegativeSliderCapVisible(int axisIndex);
		public void SetScSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetScSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible);
		public void SetScPositiveSliderVisible(int axisIndex, bool isVisible);
		public void SetScPositiveSliderCapVisible(int axisIndex, bool isVisible);
		public void SetScNegativeSliderVisible(int axisIndex, bool isVisible);
		public void SetScNegativeSliderCapVisible(int axisIndex, bool isVisible);
		public void SetScSliderLength(float axisLength);
		public void SetScSliderLineType(GizmoLine3DType lineType);
		public void SetScBoxSliderHeight(float height);
		public void SetScBoxSliderDepth(float depth);
		public void SetScCylinderSliderRadius(float radius);
		public void SetScScale(float scale);
		public void SetScUseZoomFactor(bool useZoomFactor);
		public void SetScScaleGuideAxisLength(float length);
		public void SetScAxisColor(int axisIndex, Color color);
		public void SetScDblSliderFillAlpha(float alpha);
		public void SetScMidCapColor(Color color);
		public void SetScMidCapVisible(bool visible);
		public void SetScHoveredColor(Color hoveredColor);
		public void SetScSliderShadeMode(GizmoShadeMode shadeMode);
		public void SetScSliderCapShadeMode(GizmoShadeMode shadeMode);
		public void SetScMidCapShadeMode(GizmoShadeMode shadeMode);
		public void SetScSliderCapType(GizmoCap3DType capType);
		public void SetScMidCapType(GizmoCap3DType capType);
		public bool IsScMidCapTypeAllowed(GizmoCap3DType capType);
		public List<Enum> GetAllowedScMidCapTypes();
		public void SetScSliderFillMode(GizmoFillMode3D fillMode);
		public void SetScSliderCapFillMode(GizmoFillMode3D fillMode);
		public void SetScMidCapFillMode(GizmoFillMode3D fillMode);
		public void SetScSliderBoxCapWidth(float width);
		public void SetScSliderBoxCapHeight(float height);
		public void SetScSliderBoxCapDepth(float depth);
		public void SetScSliderConeCapHeight(float height);
		public void SetScSliderConeCapBaseRadius(float radius);
		public void SetScSliderPyramidCapWidth(float width);
		public void SetScSliderPyramidCapHeight(float height);
		public void SetScSliderPyramidCapDepth(float depth);
		public void SetScSliderTriPrismCapWidth(float width);
		public void SetScSliderTriPrismCapHeight(float height);
		public void SetScSliderTriPrismCapDepth(float depth);
		public void SetScSliderSphereCapRadius(float radius);
		public void SetScMidCapBoxWidth(float width);
		public void SetScMidCapBoxHeight(float height);
		public void SetScMidCapBoxDepth(float depth);
		public void SetScMidCapSphereRadius(float radius);
		public void SetScDblSliderSize(float size);
		public void ConnectScSliderLookAndFeel(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign);
		public void ConnectScMidCapLookAndFeel(GizmoCap3D cap);
		public void ConnectScDblSliderLookAndFeel(GizmoPlaneSlider3D slider, PlaneId planeId);
		public void ConnectScGizmoScaleGuideLookAndFeel(GizmoScaleGuide scaleGuide);
		public void Inherit(ScaleGizmoLookAndFeel3D lookAndFeel);
		private GizmoLineSlider3DLookAndFeel GetScSglSliderLookAndFeel(int axisIndex, AxisSign axisSign);
		private GizmoPlaneSlider3DLookAndFeel GetScDblSliderLookAndFeel(PlaneId planeId);
	}
}
