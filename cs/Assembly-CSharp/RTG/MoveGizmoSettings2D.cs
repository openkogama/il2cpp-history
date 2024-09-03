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
	public class MoveGizmoSettings2D : Settings
	{
		// Fields
		[SerializeField]
		private GizmoPlaneSlider2DSettings _dblSliderSettings;
		[SerializeField]
		private GizmoLineSlider2DSettings[] _sglSliderSettings;
	
		// Properties
		public float LineSliderHoverEps { get; }
		public float BoxSliderHoverEps { get; }
		public float XSnapStep { get; }
		public float YSnapStep { get; }
		public float DragSensitivity { get; }
	
		// Constructors
		public MoveGizmoSettings2D();
	
		// Methods
		public void SetLineSliderHoverEps(float eps);
		public void SetBoxSliderHoverEps(float eps);
		public void SetXSnapStep(float snapStep);
		public void SetYSnapStep(float snapStep);
		public void SetDragSensitivity(float sensitivity);
		public void ConnectSliderSettings(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign);
		public void ConnectDblSliderSettings(GizmoPlaneSlider2D slider);
		private GizmoLineSlider2DSettings GetSliderSettings(int axisIndex, AxisSign axisSign);
	}
}
