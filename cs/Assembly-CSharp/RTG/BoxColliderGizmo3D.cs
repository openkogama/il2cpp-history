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
	public class BoxColliderGizmo3D : GizmoBehaviour
	{
		// Fields
		private BoxCollider _targetCollider;
		private bool _scaleFromCenter;
		private bool _isMidCapVisible;
		private bool _isSnapEnabled;
		private GizmoCap2D _rightTick;
		private GizmoCap2D _topTick;
		private GizmoCap2D _backTick;
		private GizmoCap2D _leftTick;
		private GizmoCap2D _bottomTick;
		private GizmoCap2D _frontTick;
		private FaceTick[] _faceTicks;
		private GizmoCap3D _midCap;
		private BoxCollider3DSnapshot _preChangeColliderSnapshot;
		private BoxCollider3DSnapshot _postChangeColliderSnapshot;
		private GizmoSglAxisOffsetDrag3D.WorkData _offsetDragWorkData;
		private GizmoSglAxisOffsetDrag3D _offsetDrag;
		private Vector3 _scalePivot;
		private int _dragAxisIndex;
		private GizmoUniformScaleDrag3D.WorkData _uniScaleDragWorkData;
		private GizmoUniformScaleDrag3D _uniScaleDrag;
		private BoxColliderGizmo3DLookAndFeel _lookAndFeel;
		private BoxColliderGizmo3DLookAndFeel _sharedLookAndFeel;
		private BoxColliderGizmo3DSettings _settings;
		private BoxColliderGizmo3DSettings _sharedSettings;
		private BoxColliderGizmo3DHotkeys _hotkeys;
		private BoxColliderGizmo3DHotkeys _sharedHotkeys;
	
		// Properties
		public BoxColliderGizmo3DLookAndFeel LookAndFeel { get; }
		public BoxColliderGizmo3DLookAndFeel SharedLookAndFeel { get; set; }
		public BoxColliderGizmo3DSettings Settings { get; }
		public BoxColliderGizmo3DSettings SharedSettings { get; set; }
		public BoxColliderGizmo3DHotkeys Hotkeys { get; }
		public BoxColliderGizmo3DHotkeys SharedHotkeys { get; set; }
		public BoxCollider TargetCollider { get; }
		public bool IsSnapEnabled { get; }
	
		// Nested types
		private class FaceTick
		{
			// Fields
			public Vector3 FaceCenter;
			public Vector3 FaceNormal;
			public GizmoCap2D Tick;
	
			// Constructors
			public FaceTick();
		}
	
		// Constructors
		public BoxColliderGizmo3D();
	
		// Methods
		public void SetTargetCollider(BoxCollider boxCollider);
		public override void OnGizmoEnabled();
		public bool OwnsHandle(int handleId);
		public void SetSnapEnabled(bool isEnabled);
		public void SetScaleFromCenterEnabled(bool isEnabled);
		public void SetMidCapVisible(bool visible);
		public override void OnAttached();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		public override void OnGizmoDragUpdate(int handleId);
		public override void OnGizmoDragEnd(int handleId);
		public override void OnGizmoRender(Camera camera);
		private Vector3 CalcScalePivot(int handleId);
		private Vector3 CalcWorldCenter();
		private Vector3 CalcWorldSize();
		private void UpdateTicks();
		private void UpdateTickColors(Camera camera);
		private void UpdateHoverPriorities(Camera camera);
		private void SetupSharedLookAndFeel();
		private bool IsTargetReady();
	}
}
