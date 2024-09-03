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
	public abstract class GizmoLineSlider3DController : IGizmoLineSlider3DController
	{
		// Fields
		protected GizmoLineSlider3DControllerData _data;
	
		// Constructors
		public GizmoLineSlider3DController(GizmoLineSlider3DControllerData controllerData);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateTransforms(float zoomFactor);
		public abstract void UpdateEpsilons(float zoomFactor);
		public abstract float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor);
	}
}
