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
	public class ScaleGizmoSettings3D : Settings
	{
		// Fields
		[SerializeField]
		private float _uniformSnapStep;
		[SerializeField]
		private GizmoLineSlider3DSettings[] _sglSliderSettings;
		[SerializeField]
		private GizmoPlaneSlider3DSettings[] _dblSliderSettings;
	
		// Properties
		public float LineSliderHoverEps { get; }
		public float BoxSliderHoverEps { get; }
		public float CylinderSliderHoverEps { get; }
		public float XSnapStep { get; }
		public float YSnapStep { get; }
		public float ZSnapStep { get; }
		public float XYSnapStep { get; }
		public float YZSnapStep { get; }
		public float ZXSnapStep { get; }
		public float UniformSnapStep { get; }
		public float DragSensitivity { get; }
	
		// Constructors
		public ScaleGizmoSettings3D();
	
		// Methods
		public void SetLineSliderHoverEps(float eps);
		public void SetBoxSliderHoverEps(float eps);
		public void SetCylinderSliderHoverEps(float eps);
		public void SetXSnapStep(float snapStep);
		public void SetYSnapStep(float snapStep);
		public void SetZSnapStep(float snapStep);
		public void SetXYSnapStep(float snapStep);
		public void SetYZSnapStep(float snapStep);
		public void SetZXSnapStep(float snapStep);
		public void SetUniformScaleSnapStep(float snapStep);
		public void SetDragSensitivity(float sensitivity);
		public void ConnectSliderSettings(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign);
		public void ConnectDblSliderSettings(GizmoPlaneSlider3D dblSlider, PlaneId planeId);
		private GizmoLineSlider3DSettings GetSglSliderSettings(int axisIndex, AxisSign axisSign);
		private GizmoPlaneSlider3DSettings GetDblSliderSettings(PlaneId planeId);
	}
}
