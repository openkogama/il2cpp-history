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
	public class CharacterControllerGizmo3D : GizmoBehaviour
	{
		// Fields
		private CharacterController _targetController;
		private bool _scaleFromCenter;
		private bool _isSnapEnabled;
		private float _heightOnDragBegin;
		private GizmoCap2D _rightTick;
		private GizmoCap2D _topTick;
		private GizmoCap2D _backTick;
		private GizmoCap2D _leftTick;
		private GizmoCap2D _bottomTick;
		private GizmoCap2D _frontTick;
		private ExtentTick[] _extentTicks;
		private List<Vector3> _semiCirclePts;
		private List<Vector3> _circlePts;
		private CharacterController3DSnapshot _preChangeColliderSnapshot;
		private CharacterController3DSnapshot _postChangeColliderSnapshot;
		private GizmoSglAxisOffsetDrag3D.WorkData _offsetDragWorkData;
		private GizmoSglAxisOffsetDrag3D _offsetDrag;
		private CharacterControllerGizmo3DLookAndFeel _lookAndFeel;
		private CharacterControllerGizmo3DLookAndFeel _sharedLookAndFeel;
		private CharacterControllerGizmo3DSettings _settings;
		private CharacterControllerGizmo3DSettings _sharedSettings;
		private CharacterControllerGizmo3DHotkeys _hotkeys;
		private CharacterControllerGizmo3DHotkeys _sharedHotkeys;
	
		// Properties
		public CharacterControllerGizmo3DLookAndFeel LookAndFeel { get; }
		public CharacterControllerGizmo3DLookAndFeel SharedLookAndFeel { get; set; }
		public CharacterControllerGizmo3DSettings Settings { get; }
		public CharacterControllerGizmo3DSettings SharedSettings { get; set; }
		public CharacterControllerGizmo3DHotkeys Hotkeys { get; }
		public CharacterControllerGizmo3DHotkeys SharedHotkeys { get; set; }
		public CharacterController TargetController { get; }
		public bool IsSnapEnabled { get; }
	
		// Nested types
		private class ExtentTick
		{
			// Fields
			public Vector3 Position;
			public Vector3 Normal;
			public GizmoCap2D Tick;
	
			// Constructors
			public ExtentTick();
		}
	
		// Constructors
		public CharacterControllerGizmo3D();
	
		// Methods
		public void SetTargetController(CharacterController characterController);
		public override void OnGizmoEnabled();
		public bool OwnsHandle(int handleId);
		public void SetSnapEnabled(bool isEnabled);
		public void SetScaleFromCenterEnabled(bool isEnabled);
		public override void OnAttached();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		public override void OnGizmoDragUpdate(int handleId);
		public override void OnGizmoDragEnd(int handleId);
		public override void OnGizmoRender(Camera camera);
		private Vector3 CalcScalePivot(int handleId);
		private Vector3 CalcWorldCenter();
		private float CalcWorldRadius();
		private float CalcWorldHeight();
		private float CalcHeightScale();
		private float CalcRadiusScale();
		private Quaternion CalcRotationByDirection();
		private void UpdateHandles();
		private void UpdateTickColors(Camera camera);
		private void UpdateHoverPriorities(Camera camera);
		private void SetupSharedLookAndFeel();
		private bool IsTargetReady();
	}
}
