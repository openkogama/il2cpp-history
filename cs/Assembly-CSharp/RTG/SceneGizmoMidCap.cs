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
	public class SceneGizmoMidCap : SceneGizmoCap
	{
		// Constructors
		public SceneGizmoMidCap(SceneGizmo sceneGizmo);
	
		// Methods
		public override void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void OnGizmoHandlePicked(Gizmo gizmo, int handleId);
	}
}
