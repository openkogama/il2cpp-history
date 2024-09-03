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
	public class GizmoSphereCap3DController : GizmoCap3DController
	{
		// Constructors
		public GizmoSphereCap3DController(GizmoCap3DControllerData controllerData);
	
		// Methods
		public override void UpdateHandles();
		public override void UpdateTransforms(float zoomFactor);
		public override void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
		public override void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
		public override float GetSliderAlignedRealLength(float zoomFactor);
	}
}
