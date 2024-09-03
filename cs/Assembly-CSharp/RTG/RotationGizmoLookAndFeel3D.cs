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
	public class RotationGizmoLookAndFeel3D : Settings
	{
		// Fields
		[SerializeField]
		private bool _isMidCapVisible;
		[SerializeField]
		private GizmoCap3DLookAndFeel _midCapLookAndFeel;
		[SerializeField]
		private bool[] _axesVis;
		[SerializeField]
		private GizmoPlaneSlider3DLookAndFeel[] _axesLookAndFeel;
		[SerializeField]
		private bool _isCamLookSliderVisible;
		[SerializeField]
		private float _camLookSliderRadiusOffset;
		[SerializeField]
		private GizmoPlaneSlider2DLookAndFeel _camLookSliderLookAndFeel;
	
		// Properties
		public float Scale { get; }
		public float Radius { get; }
		public bool UseZoomFactor { get; }
		public Color XBorderColor { get; }
		public Color YBorderColor { get; }
		public Color ZBorderColor { get; }
		public Color HoveredColor { get; }
		public float AxisTorusThickness { get; }
		public float AxisCylTorusWidth { get; }
		public float AxisCylTorusHeight { get; }
		public float AxisCullAlphaScale { get; }
		public GizmoShadeMode ShadeMode { get; }
		public GizmoCircle3DBorderType AxisBorderType { get; }
		public GizmoFillMode3D AxisBorderFillMode { get; }
		public int NumAxisTorusWireAxialSlices { get; }
		public Color RotationArcColor { get; }
		public Color RotationArcBorderColor { get; }
		public bool UseShortestRotationArc { get; }
		public bool IsRotationArcVisible { get; }
		public Color MidCapColor { get; }
		public Color MidCapBorderColor { get; }
		public Color HoveredMidCapColor { get; }
		public bool IsMidCapVisible { get; }
		public bool IsMidCapBorderVisible { get; }
		public float CamLookSliderRadiusOffset { get; }
		public Color CamLookSliderBorderColor { get; }
		public Color CamLookSliderHoveredBorderColor { get; }
		public GizmoPolygon2DBorderType CamLookSliderPolyBorderType { get; }
		public float CamLookSliderPolyBorderThickness { get; }
		public bool IsCamLookSliderVisible { get; }
	
		// Constructors
		public RotationGizmoLookAndFeel3D();
	
		// Methods
		public bool IsAxisVisible(int axisIndex);
		public void SetAxisVisible(int axisIndex, bool isVisible);
		public void SetShadeMode(GizmoShadeMode shadeMode);
		public void SetAxisBorderFillMode(GizmoFillMode3D fillMode);
		public void SetNumAxisTorusWireAxialSlices(int numSlices);
		public void SetUseZoomFactor(bool useZoomFactor);
		public void SetScale(float scale);
		public void SetRadius(float radius);
		public void SetAxisBorderCullAlphaScale(float scale);
		public void SetAxisBorderType(GizmoCircle3DBorderType borderType);
		public void SetAxisTorusThickness(float thickness);
		public void SetAxisCylTorusWidth(float width);
		public void SetAxisCylTorusHeight(float height);
		public void SetMidCapVisible(bool isVisible);
		public void SetMidCapColor(Color color);
		public void SetHoveredMidCapColor(Color color);
		public void SetMidCapBorderVisible(bool isVisible);
		public void SetMidCapBorderColor(Color color);
		public void SetAxisBorderColor(int axisIndex, Color color);
		public void SetHoveredColor(Color hoveredColor);
		public void SetRotationArcColor(Color color);
		public void SetRotationArcBorderColor(Color color);
		public void SetUseShortestRotationArc(bool useShortest);
		public void SetRotationArcVisible(bool isVisible);
		public void SetCamLookSliderRadiusOffset(float offset);
		public void SetCamLookSliderBorderColor(Color color);
		public void SetCamLookSliderHoveredBorderColor(Color color);
		public void SetCamLookSliderVisible(bool isVisible);
		public void SetCamLookSliderPolyBorderType(GizmoPolygon2DBorderType polyBorderType);
		public void SetCamLookSliderPolyBorderThickness(float thickness);
		public void ConnectSliderLookAndFeel(GizmoPlaneSlider3D slider, int axisIndex);
		public void ConnectMidCapLookAndFeel(GizmoCap3D cap);
		public void ConnectCamLookSliderLookAndFeel(GizmoPlaneSlider2D slider);
	}
}
