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
	public abstract class GizmoCap2DController : IGizmoCap2DController
	{
		// Fields
		protected GizmoCap2DControllerData _data;
	
		// Constructors
		public GizmoCap2DController(GizmoCap2DControllerData controllerData);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateTransforms();
		public abstract void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt);
		public abstract void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt);
		public abstract float GetSliderAlignedRealLength();
	}
}
