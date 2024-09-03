/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class GizmoPlaneSlider3DController : IGizmoPlaneSlider3DController
	{
		// Fields
		protected GizmoPlaneSlider3DControllerData _data;
	
		// Constructors
		public GizmoPlaneSlider3DController(GizmoPlaneSlider3DControllerData controllerData);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateTransforms(float zoomFactor);
		public abstract void UpdateEpsilons(float zoomFactor);
	}
}
