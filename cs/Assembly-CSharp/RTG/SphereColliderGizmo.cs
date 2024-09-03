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
	public class SphereColliderGizmo : GizmoBehaviour
	{
		// Fields
		private SphereCollider _targetCollider;
		private bool _scaleFromCenter;
		private bool _isSnapEnabled;
		private GizmoCap2D _rightTick;
		private GizmoCap2D _topTick;
		private GizmoCap2D _backTick;
		private GizmoCap2D _leftTick;
		private GizmoCap2D _bottomTick;
		private GizmoCap2D _frontTick;
		private ExtentTick[] _extentTicks;
		private GizmoPlaneSlider3D _axialCircleXY;
		private GizmoPlaneSlider3D _axialCircleYZ;
		private GizmoPlaneSlider3D _axialCircleZX;
		private PolygonShape2D _sphereBorderPoly;
		private SphereColliderSnapshot _preChangeColliderSnapshot;
		private SphereColliderSnapshot _postChangeColliderSnapshot;
		private GizmoSglAxisOffsetDrag3D.WorkData _offsetDragWorkData;
		private GizmoSglAxisOffsetDrag3D _offsetDrag;
		private SphereColliderGizmoLookAndFeel _lookAndFeel;
		private SphereColliderGizmoLookAndFeel _sharedLookAndFeel;
		private SphereColliderGizmoSettings _settings;
		private SphereColliderGizmoSettings _sharedSettings;
		private SphereColliderGizmoHotkeys _hotkeys;
		private SphereColliderGizmoHotkeys _sharedHotkeys;
	
		// Properties
		public SphereColliderGizmoLookAndFeel LookAndFeel { get; }
		public SphereColliderGizmoLookAndFeel SharedLookAndFeel { get; set; }
		public SphereColliderGizmoSettings Settings { get; }
		public SphereColliderGizmoSettings SharedSettings { get; set; }
		public SphereColliderGizmoHotkeys Hotkeys { get; }
		public SphereColliderGizmoHotkeys SharedHotkeys { get; set; }
		public SphereCollider TargetCollider { get; }
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
		public SphereColliderGizmo();
	
		// Methods
		public void SetTargetCollider(SphereCollider sphereCollider);
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
		private float CalcMaxTransformAbsScale();
		private void UpdateHandles();
		private void UpdateTickColors(Camera camera);
		private void UpdateHoverPriorities(Camera camera);
		private void SetupSharedLookAndFeel();
		private bool IsTargetReady();
	}
}
