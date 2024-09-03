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
	public class UniversalGizmoSettings2D : Settings
	{
		// Fields
		[SerializeField]
		private UniversalGizmoSettingsCategory _displayCategory;
		[SerializeField]
		private GizmoPlaneSlider2DSettings _mvDblSliderSettings;
		[SerializeField]
		private GizmoLineSlider2DSettings[] _mvSglSliderSettings;
	
		// Properties
		public float MvLineSliderHoverEps { get; }
		public float MvBoxSliderHoverEps { get; }
		public float MvXSnapStep { get; }
		public float MvYSnapStep { get; }
		public float MvDragSensitivity { get; }
		public UniversalGizmoSettingsCategory DisplayCategory { get; set; }
	
		// Constructors
		public UniversalGizmoSettings2D();
	
		// Methods
		public void SetMvLineSliderHoverEps(float eps);
		public void SetMvBoxSliderHoverEps(float eps);
		public void SetMvXSnapStep(float snapStep);
		public void SetMvYSnapStep(float snapStep);
		public void SetMvDragSensitivity(float sensitivity);
		public void ConnectMvSliderSettings(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign);
		public void ConnectMvDblSliderSettings(GizmoPlaneSlider2D slider);
		public void Inherit(MoveGizmoSettings2D settings);
		private GizmoLineSlider2DSettings GetMvSliderSettings(int axisIndex, AxisSign axisSign);
	}
}
