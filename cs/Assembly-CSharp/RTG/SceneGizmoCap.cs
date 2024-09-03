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
	public abstract class SceneGizmoCap
	{
		// Fields
		protected SceneGizmo _sceneGizmo;
		protected GizmoCap3D _cap;
	
		// Properties
		public int HandleId { get; }
		public Vector3 Position { get; }
	
		// Constructors
		public SceneGizmoCap(SceneGizmo sceneGizmo, int capHandleId);
	
		// Methods
		public void SetHoverable(bool isHoverable);
		public abstract void Render(Camera camera);
	}
}
