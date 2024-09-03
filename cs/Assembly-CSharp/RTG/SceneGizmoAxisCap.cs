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
	public class SceneGizmoAxisCap : SceneGizmoCap
	{
		// Fields
		private AxisDescriptor _axisDesc;
		private BoxFace _midAxisBoxFace;
		private GizmoTransform _zoomFactorTransform;
		private ColorRef _color;
		private ColorTransition _colorTransition;
		private Texture2D _labelTexture;
	
		// Constructors
		public SceneGizmoAxisCap(SceneGizmo sceneGizmo, int id, AxisDescriptor gizmoAxisDesc);
	
		// Methods
		public override void Render(Camera camera);
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void UpdateHoverPermission();
		private void UpdateColor();
		private void UpdateTransform(Camera camera);
		private void OnGizmoHandlePicked(Gizmo gizmo, int handleId);
	}
}
