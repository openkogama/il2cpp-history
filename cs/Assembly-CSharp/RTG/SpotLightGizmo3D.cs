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
	public class SpotLightGizmo3D : GizmoBehaviour
	{
		// Fields
		private Light _targetLight;
		private Vector3 _pickedWorldSnapPoint;
		private bool _isSnapEnabled;
		private List<Vector3> _coneCirclePoints;
		private GizmoCap2D _dirSnapTick;
		private SceneRaycastFilter _raycastFilter;
		private AngleTick[] _angleTicks;
		private GizmoCap2D _rangeTick;
		private GizmoSglAxisOffsetDrag3D _dummyDragSession;
		private GizmoSglAxisOffsetDrag3D.WorkData _dummySessionWorkData;
		private GizmoSglAxisOffsetDrag3D _sglAxisDrag;
		private GizmoSglAxisOffsetDrag3D.WorkData _sglAxisDragWorkData;
		private Light3DSnapshot _preChangeSnapshot;
		private Light3DSnapshot _postChangeSnapshot;
		private SpotLightGizmo3DLookAndFeel _lookAndFeel;
		private SpotLightGizmo3DLookAndFeel _sharedLookAndFeel;
		private SpotLightGizmo3DSettings _settings;
		private SpotLightGizmo3DSettings _sharedSettings;
		private SpotLightGizmo3DHotkeys _hotkeys;
		private SpotLightGizmo3DHotkeys _sharedHotkeys;
	
		// Properties
		public SpotLightGizmo3DLookAndFeel LookAndFeel { get; }
		public SpotLightGizmo3DLookAndFeel SharedLookAndFeel { get; set; }
		public SpotLightGizmo3DSettings Settings { get; }
		public SpotLightGizmo3DSettings SharedSettings { get; set; }
		public SpotLightGizmo3DHotkeys Hotkeys { get; }
		public SpotLightGizmo3DHotkeys SharedHotkeys { get; set; }
		public Light TargetLight { get; }
		public bool IsSnapEnabled { get; }
	
		// Nested types
		private enum AngleTickId
		{
			Top = 0,
			Right = 1,
			Bottom = 2,
			Left = 3
		}
	
		private class AngleTick
		{
			// Fields
			public Vector3 Position;
			public Vector3 LightAxis;
			public GizmoCap2D Tick;
	
			// Constructors
			public AngleTick();
		}
	
		// Constructors
		public SpotLightGizmo3D();
	
		// Methods
		public void SetTargetLight(Light targetLight);
		public void SetSnapEnabled(bool isEnabled);
		public bool OwnsHandle(int handleId);
		public override void OnAttached();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		public override void OnGizmoDragUpdate(int handleId);
		public override void OnGizmoDragEnd(int handleId);
		public override void OnGizmoRender(Camera camera);
		private float CalcConeRadius();
		private Vector3 CalcConeBase();
		private float CalcSpotAngleDegrees(float radius);
		private void UpdateTicks();
		private void SetupSharedLookAndFeel();
		private void SnapDirection();
		private bool IsTargetReady();
	}
}
