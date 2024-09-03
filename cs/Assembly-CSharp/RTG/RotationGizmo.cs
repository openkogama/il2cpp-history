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
	[Serializable]
	public class RotationGizmo : GizmoBehaviour
	{
		// Fields
		private GizmoPlaneSlider3D _xSlider;
		private GizmoPlaneSlider3D _ySlider;
		private GizmoPlaneSlider3D _zSlider;
		private GizmoPlaneSlider3DCollection _axesSliders;
		private GizmoCap3D _midCap;
		private GizmoDblAxisRotationDrag3D _camXYRotationDrag;
		private GizmoPlaneSlider2D _camLookSlider;
		[SerializeField]
		private RotationGizmoHotkeys _hotkeys;
		[SerializeField]
		private RotationGizmoSettings3D _settings3D;
		[SerializeField]
		private RotationGizmoLookAndFeel3D _lookAndFeel3D;
		[SerializeField]
		private bool _useSnapEnableHotkey;
		private RotationGizmoHotkeys _sharedHotkeys;
		private RotationGizmoSettings3D _sharedSettings3D;
		private RotationGizmoLookAndFeel3D _sharedLookAndFeel3D;
	
		// Properties
		public RotationGizmoSettings3D Settings3D { get; }
		public RotationGizmoLookAndFeel3D LookAndFeel3D { get; }
		public RotationGizmoHotkeys Hotkeys { get; }
		public RotationGizmoSettings3D SharedSettings3D { get; set; }
		public RotationGizmoLookAndFeel3D SharedLookAndFeel3D { get; set; }
		public RotationGizmoHotkeys SharedHotkeys { get; set; }
		public bool UseSnapEnableHotkey { get; set; }
	
		// Constructors
		public RotationGizmo();
	
		// Methods
		public float GetZoomFactor(Vector3 position);
		public float GetZoomFactor(Vector3 position, Camera camera);
		public bool OwnsHandle(int handleId);
		public void SetMidCapHoverable(bool hoverable);
		public void SetSnapEnabled(bool isEnabled);
		public override void OnGizmoEnabled();
		public override void OnDetached();
		public override void OnEnabled();
		public override void OnDisabled();
		public override void OnAttached();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoRender(Camera camera);
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		private void UpdateCamLookSlider(Camera camera);
		private void SetupSharedLookAndFeel();
		private void SetupSharedSettings();
		private void OnGizmoTransformChanged(GizmoTransform gizmoTransform, GizmoTransform.ChangeData changeData);
	}
}
