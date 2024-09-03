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
	public interface IGizmoLineSlider3DController
	{
		// Methods
		void UpdateHandles();
		void UpdateTransforms(float zoomFactor);
		void UpdateEpsilons(float zoomFactor);
		float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor);
	}
}
