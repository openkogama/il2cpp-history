/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class GizmoQuad2DBorderController : IGizmoQuad2DBorderController
	{
		// Fields
		protected GizmoQuad2DBorderControllerData _data;
	
		// Constructors
		public GizmoQuad2DBorderController(GizmoQuad2DBorderControllerData data);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateEpsilons();
		public abstract void UpdateTransforms();
	}
}
