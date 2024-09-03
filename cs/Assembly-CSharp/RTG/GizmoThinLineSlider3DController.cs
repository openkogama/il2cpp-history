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
	public class GizmoThinLineSlider3DController : GizmoLineSlider3DController
	{
		// Constructors
		public GizmoThinLineSlider3DController(GizmoLineSlider3DControllerData controllerData);
	
		// Methods
		public override void UpdateHandles();
		public override void UpdateTransforms(float zoomFactor);
		public override void UpdateEpsilons(float zoomFactor);
		public override float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor);
	}
}
