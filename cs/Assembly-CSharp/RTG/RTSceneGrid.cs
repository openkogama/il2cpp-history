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
	public class RTSceneGrid : MonoSingleton<RTG.RTSceneGrid>, IXZGrid
	{
		// Fields
		[SerializeField]
		private SceneGridHotkeys _hotkeys;
		[SerializeField]
		private XZGridSettings _settings;
		[SerializeField]
		private XZGridLookAndFeel _lookAndFeel;
		private List<Camera> _renderIgnoreCameras;
	
		// Properties
		public Quaternion Rotation { get; }
		public Vector3 Right { get; }
		public Vector3 Look { get; }
		public Vector3 Normal { get; }
		public Plane WorldPlane { get; }
		public Matrix4x4 WorldMatrix { get; }
		public float YOffset { get; set; }
		public SceneGridHotkeys Hotkeys { get; }
		public XZGridSettings Settings { get; }
		public XZGridLookAndFeel LookAndFeel { get; }
	
		// Nested types
		private enum SnapToPointMode
		{
			Exact = 0,
			ClosestExtremity = 1
		}
	
		// Constructors
		public RTSceneGrid();
	
		// Methods
		public void Initialize_SystemCall();
		public bool IsRenderIgnoreCamera(Camera camera);
		public void AddRenderIgnoreCamera(Camera camera);
		public void RemoveRenderIgnoreCamera(Camera camera);
		public XZGridCell CellFromWorldPoint(Vector3 worldPoint);
		public bool Raycast(Ray ray, out float t);
		public void Update_SystemCall();
		public void Render_SystemCall(Camera renderCamera);
		private void MoveUp();
		private void MoveDown();
		private float CalculateCellFadeZoom(Camera camera);
		private SceneRaycastHit GetSceneHitForGridSnap();
		private void OnInputDeviceDoubleTap(IInputDevice inputDevice, Vector2 position);
		private void SnapToObjectHitPoint(GameObjectRayHit objectHit, SnapToPointMode snapMode);
	}
}
