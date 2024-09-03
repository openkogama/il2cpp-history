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
	public interface IGizmoCap3DController
	{
		// Methods
		void UpdateHandles();
		void UpdateTransforms(float zoomFactor);
		void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
		void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
		float GetSliderAlignedRealLength(float zoomFactor);
	}
}
