/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class GizmoQuad3DBorderController : IGizmoQuad3DBorderController
	{
		// Fields
		protected GizmoQuad3DBorderControllerData _data;
	
		// Constructors
		public GizmoQuad3DBorderController(GizmoQuad3DBorderControllerData data);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateEpsilons(float zoomFactor);
		public abstract void UpdateTransforms(float zoomFactor);
	}
}
