/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class SceneGizmoCamPrjSwitchLabel
	{
		// Fields
		private SceneGizmo _sceneGizmo;
		private GizmoHandle _handle;
		private QuadShape2D _labelQuad;
	
		// Properties
		public GizmoHandle Handle { get; }
		public int Id { get; }
	
		// Constructors
		public SceneGizmoCamPrjSwitchLabel(SceneGizmo sceneGizmo);
	
		// Methods
		public void OnGUI();
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void UpdateTransform();
		private void OnGizmoHandlePicked(Gizmo gizmo, int handleId);
	}
}
