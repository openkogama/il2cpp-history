/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public abstract class GizmoPolygon2DBorderController : IGizmoPolygon2DBorderController
	{
		// Fields
		protected GizmoPolygon2DBorderControllerData _data;
	
		// Constructors
		public GizmoPolygon2DBorderController(GizmoPolygon2DBorderControllerData data);
	
		// Methods
		public abstract void UpdateHandles();
		public abstract void UpdateEpsilons();
		public abstract void UpdateTransforms();
	}
}
