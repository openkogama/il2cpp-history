/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	[Serializable]
	public class SceneGizmo : GizmoBehaviour, ISceneGizmo
	{
		// Fields
		private SceneGizmoCamPrjSwitchLabel _camPrjSwitchLabel;
		private SceneGizmoMidCap _midAxisHandle;
		private SceneGizmoAxisCap[] _axesHandles;
		private List<SceneGizmoCap> _renderSortedHandles;
		private RTSceneGizmoCamera _sceneGizmoCamera;
		[SerializeField]
		private SceneGizmoLookAndFeel _lookAndFeel;
		[SerializeField]
		private SceneGizmoLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public RTSceneGizmoCamera SceneGizmoCamera { get; }
		public Gizmo OwnerGizmo { get; }
		public Camera SceneCamera { get; }
		public SceneGizmoLookAndFeel LookAndFeel { get; }
		public SceneGizmoLookAndFeel SharedLookAndFeel { get; set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass20_0
		{
			// Fields
			public Vector3 cameraPos;
	
			// Constructors
			public __c__DisplayClass20_0();
	
			// Methods
			internal int _OnGizmoRender_b__0(SceneGizmoCap h0, SceneGizmoCap h1);
		}
	
		// Constructors
		public SceneGizmo();
	
		// Methods
		public override void OnAttached();
		public override void OnGUI();
		public override void OnGizmoRender(Camera camera);
	}
}
