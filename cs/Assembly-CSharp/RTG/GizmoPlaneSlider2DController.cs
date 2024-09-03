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
	public abstract class GizmoPlaneSlider2DController : IGizmoPlaneSlider2DController
	{
		// Fields
		protected GizmoPlaneSlider2DControllerData _data;
	
		// Constructors
		public GizmoPlaneSlider2DController(GizmoPlaneSlider2DControllerData controllerData);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateTransforms();
		public abstract void UpdateEpsilons();
		public abstract Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt);
	}
}
