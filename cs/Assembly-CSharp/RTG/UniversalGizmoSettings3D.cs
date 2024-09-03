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
	public class UniversalGizmoSettings3D : Settings
	{
		// Fields
		[SerializeField]
		private UniversalGizmoSettingsCategory _displayCategory;
		[SerializeField]
		private GizmoObjectVertexSnapSettings _mvVertexSnapSettings;
		[SerializeField]
		private GizmoLineSlider3DSettings[] _mvSglSliderSettings;
		[SerializeField]
		private GizmoPlaneSlider3DSettings[] _mvDblSliderSettings;
		[SerializeField]
		private float _rtCamRightSnapStep;
		[SerializeField]
		private float _rtCamUpSnapStep;
		[SerializeField]
		private GizmoPlaneSlider3DSettings[] _rtSliderSettings;
		[SerializeField]
		private GizmoPlaneSlider2DSettings _rtCamLookSliderSettings;
		[SerializeField]
		private float _scUniformSnapStep;
		[SerializeField]
		private GizmoLineSlider3DSettings[] _scSglSliderSettings;
		[SerializeField]
		private GizmoPlaneSlider3DSettings[] _scDblSliderSettings;
	
		// Properties
		public GizmoObjectVertexSnapSettings VertexSnapSettings { get; }
		public float MvLineSliderHoverEps { get; }
		public float MvBoxSliderHoverEps { get; }
		public float MvCylinderSliderHoverEps { get; }
		public float MvXSnapStep { get; }
		public float MvYSnapStep { get; }
		public float MvZSnapStep { get; }
		public float MvDragSensitivity { get; }
		public float RtAxisLineHoverEps { get; }
		public float RtAxisTorusHoverEps { get; }
		public float RtCamLookLineHoverEps { get; }
		public float RtCamLookThickHoverEps { get; }
		public bool RtCanHoverCulledPixels { get; }
		public GizmoSnapMode RtSnapMode { get; }
		public float RtXSnapStep { get; }
		public float RtYSnapStep { get; }
		public float RtZSnapStep { get; }
		public float RtCamRightSnapStep { get; }
		public float RtCamUpSnapStep { get; }
		public float RtCamLookSnapStep { get; }
		public float RtDragSensitivity { get; }
		public float ScLineSliderHoverEps { get; }
		public float ScBoxSliderHoverEps { get; }
		public float ScCylinderSliderHoverEps { get; }
		public float ScXSnapStep { get; }
		public float ScYSnapStep { get; }
		public float ScZSnapStep { get; }
		public float ScXYSnapStep { get; }
		public float ScYZSnapStep { get; }
		public float ScZXSnapStep { get; }
		public float ScUniformSnapStep { get; }
		public float ScDragSensitivity { get; }
		public UniversalGizmoSettingsCategory DisplayCategory { get; set; }
	
		// Constructors
		public UniversalGizmoSettings3D();
	
		// Methods
		public void SetMvLineSliderHoverEps(float eps);
		public void SetMvBoxSliderHoverEps(float eps);
		public void SetMvCylinderSliderHoverEps(float eps);
		public void SetMvXSnapStep(float snapStep);
		public void SetMvYSnapStep(float snapStep);
		public void SetMvZSnapStep(float snapStep);
		public void SetMvDragSensitivity(float sensitivity);
		public void ConnectMvSliderSettings(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign);
		public void ConnectMvDblSliderSettings(GizmoPlaneSlider3D dblSlider, PlaneId planeId);
		public void Inherit(MoveGizmoSettings3D settings);
		private GizmoLineSlider3DSettings GetMvSglSliderSettings(int axisIndex, AxisSign axisSign);
		private GizmoPlaneSlider3DSettings GetMvDblSliderSettings(PlaneId planeId);
		public void SetRtCanHoverCulledPixels(bool canHover);
		public void SetRtAxisLineHoverEps(float eps);
		public void SetRtAxisTorusHoverEps(float eps);
		public void SetRtCamLookLineHoverEps(float eps);
		public void SetRtCamLookThickHoverEps(float eps);
		public void SetRtAxisSnapStep(int axisIndex, float snapStep);
		public void SetRtCamRightSnapStep(float snapStep);
		public void SetRtCamUpSnapStep(float snapStep);
		public void SetRtCamLookSnapStep(float snapStep);
		public void SetRtSnapMode(GizmoSnapMode snapMode);
		public void SetRtDragSensitivity(float sensitivity);
		public void ConnectRtSliderSettings(GizmoPlaneSlider3D slider, int axisIndex);
		public void ConnectRtCamLookSliderSettings(GizmoPlaneSlider2D slider);
		public void Inherit(RotationGizmoSettings3D settings);
		public void SetScLineSliderHoverEps(float eps);
		public void SetScBoxSliderHoverEps(float eps);
		public void SetScCylinderSliderHoverEps(float eps);
		public void SetScXSnapStep(float snapStep);
		public void SetScYSnapStep(float snapStep);
		public void SetScZSnapStep(float snapStep);
		public void SetScXYSnapStep(float snapStep);
		public void SetScYZSnapStep(float snapStep);
		public void SetScZXSnapStep(float snapStep);
		public void SetScUniformScaleSnapStep(float snapStep);
		public void SetScDragSensitivity(float sensitivity);
		public void ConnectScSliderSettings(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign);
		public void ConnectScDblSliderSettings(GizmoPlaneSlider3D dblSlider, PlaneId planeId);
		public void Inherit(ScaleGizmoSettings3D settings);
		private GizmoLineSlider3DSettings GetScSglSliderSettings(int axisIndex, AxisSign axisSign);
		private GizmoPlaneSlider3DSettings GetScDblSliderSettings(PlaneId planeId);
	}
}
