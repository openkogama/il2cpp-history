/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class GizmoTorusCircle3DBorderController : GizmoCircle3DBorderController
	{
		// Constructors
		public GizmoTorusCircle3DBorderController(GizmoCircle3DBorderControllerData controllerData);
	
		// Methods
		public override void UpdateHandles();
		public override void UpdateEpsilons(float zoomFactor);
		public override void UpdateTransforms(float zoomFactor);
		public float GetTorusCoreRadius(float zoomFactor);
	}
}
