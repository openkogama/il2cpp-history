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
	public class RotationGizmoSettings3D : Settings
	{
		// Fields
		[SerializeField]
		private float _camRightSnapStep;
		[SerializeField]
		private float _camUpSnapStep;
		[SerializeField]
		private GizmoPlaneSlider3DSettings[] _sliderSettings;
		[SerializeField]
		private GizmoPlaneSlider2DSettings _camLookSliderSettings;
	
		// Properties
		public float AxisLineHoverEps { get; }
		public float AxisTorusHoverEps { get; }
		public float CamLookLineHoverEps { get; }
		public float CamLookThickHoverEps { get; }
		public bool CanHoverCulledPixels { get; }
		public GizmoSnapMode SnapMode { get; }
		public float XSnapStep { get; }
		public float YSnapStep { get; }
		public float ZSnapStep { get; }
		public float CamRightSnapStep { get; }
		public float CamUpSnapStep { get; }
		public float CamLookSnapStep { get; }
		public float DragSensitivity { get; }
	
		// Constructors
		public RotationGizmoSettings3D();
	
		// Methods
		public void SetCanHoverCulledPixels(bool canHover);
		public void SetAxisLineHoverEps(float eps);
		public void SetAxisTorusHoverEps(float eps);
		public void SetCamLookLineHoverEps(float eps);
		public void SetCamLookThickHoverEps(float eps);
		public void SetAxisSnapStep(int axisIndex, float snapStep);
		public void SetCamRightSnapStep(float snapStep);
		public void SetCamUpSnapStep(float snapStep);
		public void SetCamLookSnapStep(float snapStep);
		public void SetSnapMode(GizmoSnapMode snapMode);
		public void SetDragSensitivity(float sensitivity);
		public void ConnectSliderSettings(GizmoPlaneSlider3D slider, int axisIndex);
		public void ConnectCamLookSliderSettings(GizmoPlaneSlider2D slider);
	}
}
