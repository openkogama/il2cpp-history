/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class GizmoLineSlider2DController : IGizmoLineSlider2DController
	{
		// Fields
		protected GizmoLineSlider2DControllerData _data;
	
		// Constructors
		public GizmoLineSlider2DController(GizmoLineSlider2DControllerData controllerData);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateTransforms();
		public abstract void UpdateEpsilons();
	}
}
