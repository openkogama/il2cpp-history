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
	public class PointLightGizmo3D : GizmoBehaviour
	{
		// Fields
		private Light _targetLight;
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
		private Light3DSnapshot _preChangeSnapshot;
		private Light3DSnapshot _postChangeSnapshot;
		private GizmoSglAxisOffsetDrag3D.WorkData _offsetDragWorkData;
		private GizmoSglAxisOffsetDrag3D _offsetDrag;
		private PointLightGizmo3DLookAndFeel _lookAndFeel;
		private PointLightGizmo3DLookAndFeel _sharedLookAndFeel;
		private PointLightGizmo3DSettings _settings;
		private PointLightGizmo3DSettings _sharedSettings;
		private PointLightGizmo3DHotkeys _hotkeys;
		private PointLightGizmo3DHotkeys _sharedHotkeys;
	
		// Properties
		public PointLightGizmo3DLookAndFeel LookAndFeel { get; }
		public PointLightGizmo3DLookAndFeel SharedLookAndFeel { get; set; }
		public PointLightGizmo3DSettings Settings { get; }
		public PointLightGizmo3DSettings SharedSettings { get; set; }
		public PointLightGizmo3DHotkeys Hotkeys { get; }
		public PointLightGizmo3DHotkeys SharedHotkeys { get; set; }
		public Light TargetLight { get; }
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
		public PointLightGizmo3D();
	
		// Methods
		public void SetTargetLight(Light targetLight);
		public override void OnGizmoEnabled();
		public bool OwnsHandle(int handleId);
		public void SetSnapEnabled(bool isEnabled);
		public override void OnAttached();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		public override void OnGizmoDragUpdate(int handleId);
		public override void OnGizmoDragEnd(int handleId);
		public override void OnGizmoRender(Camera camera);
		private Vector3 CalcScalePivot(int handleId);
		private void UpdateHandles();
		private void UpdateTickColors(Camera camera);
		private void UpdateHoverPriorities(Camera camera);
		private void SetupSharedLookAndFeel();
		private bool IsTargetReady();
	}
}
