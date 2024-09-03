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
	public abstract class GizmoCap3DController : IGizmoCap3DController
	{
		// Fields
		protected GizmoCap3DControllerData _data;
	
		// Constructors
		public GizmoCap3DController(GizmoCap3DControllerData controllerData);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateTransforms(float zoomFactor);
		public abstract void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
		public abstract void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
		public abstract float GetSliderAlignedRealLength(float zoomFactor);
	}
}
