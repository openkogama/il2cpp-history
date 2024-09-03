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
	public class GizmoArrowCap2DController : GizmoCap2DController
	{
		// Constructors
		public GizmoArrowCap2DController(GizmoCap2DControllerData controllerData);
	
		// Methods
		public override void UpdateHandles();
		public override void UpdateTransforms();
		public override void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt);
		public override void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt);
		public override float GetSliderAlignedRealLength();
	}
}
