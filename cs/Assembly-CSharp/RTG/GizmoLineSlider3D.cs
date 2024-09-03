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
	public class GizmoLineSlider3D : GizmoSlider
	{
		// Fields
		private SegmentShape3D _segment;
		private BoxShape3D _box;
		private CylinderShape3D _cylinder;
		private int _segmentIndex;
		private int _boxIndex;
		private int _cylinderIndex;
		private IGizmoLineSlider3DController[] _controllers;
		private GizmoLineSlider3DControllerData _controllerData;
		private GizmoDragChannel _dragChannel;
		private GizmoSglAxisOffsetDrag3D _offsetDrag;
		private GizmoSglAxisRotationDrag3D _rotationDrag;
		private GizmoRotationArc3D _rotationArc;
		private GizmoSglAxisScaleDrag3D _scaleDrag;
		private int _scaleDragAxisIndex;
		private List<GizmoScalerHandle> _scalerHandles;
		private IGizmoDragSession _selectedDragSession;
		private GizmoCap3D _cap3D;
		private GizmoTransform _transform;
		private GizmoTransformAxisMap3D _directionAxisMap;
		private GizmoTransformAxisMap3D _dragRotationAxisMap;
		private GizmoOverrideColor _overrideColor;
		private GizmoLineSlider3DSettings _settings;
		private GizmoLineSlider3DSettings _sharedSettings;
		private GizmoLineSlider3DLookAndFeel _lookAndFeel;
		private GizmoLineSlider3DLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public Vector3 Direction { get; }
		public Vector3 DragRotationAxis { get; }
		public int ScaleDragAxisIndex { get; set; }
		public Vector3 StartPosition { get; set; }
		public GizmoDragChannel DragChannel { get; }
		public bool IsDragged { get; }
		public bool IsMoving { get; }
		public bool IsRotating { get; }
		public bool IsScaling { get; }
		public bool Is3DCapVisible { get; }
		public bool Is3DCapHoverable { get; }
		public int Cap3DHandleId { get; }
		public Vector3 TotalDragOffset { get; }
		public Vector3 RelativeDragOffset { get; }
		public float TotalDragRotation { get; }
		public float RelativeDragRotation { get; }
		public float TotalDragScale { get; }
		public float RelativeDragScale { get; }
		public GizmoOverrideColor OverrideColor { get; }
		public GizmoOverrideColor Cap3DOverrideColor { get; }
		public GizmoLineSlider3DSettings Settings { get; }
		public GizmoLineSlider3DSettings SharedSettings { get; set; }
		public GizmoLineSlider3DLookAndFeel LookAndFeel { get; }
		public GizmoLineSlider3DLookAndFeel SharedLookAndFeel { get; set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass78_0
		{
			// Fields
			public int handleId;
	
			// Constructors
			public __c__DisplayClass78_0();
	
			// Methods
			internal bool _IsScalerHandleRegistered_b__0(GizmoScalerHandle item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass79_0
		{
			// Fields
			public int handleId;
	
			// Constructors
			public __c__DisplayClass79_0();
	
			// Methods
			internal bool _IsScalerHandleRegistered_b__0(GizmoScalerHandle item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass81_0
		{
			// Fields
			public int handleId;
	
			// Constructors
			public __c__DisplayClass81_0();
	
			// Methods
			internal bool _UnregisterScalerHandle_b__0(GizmoScalerHandle item);
		}
	
		// Constructors
		public GizmoLineSlider3D(Gizmo gizmo, int handleId, int capHandleId);
	
		// Methods
		public bool IsScalerHandleRegistered(int handleId);
		public bool IsScalerHandleRegistered(int handleId, int scaleDragAxisIndex);
		public void RegisterScalerHandle(int handleId, IEnumerable<int> scaleDragAxisIndices);
		public void UnregisterScalerHandle(int handleId);
		public override void SetSnapEnabled(bool isEnabled);
		public void Set3DCapVisible(bool isVisible);
		public void Set3DCapHoverable(bool isHoverable);
		public void SetZoomFactorTransform(GizmoTransform transform);
		public float GetZoomFactor(Camera camera);
		public Vector3 GetRealDirection();
		public float GetRealSizeAlongDirection(Camera camera, Vector3 direction);
		public float GetRealLength(float zoomFactor);
		public float GetRealLengthWith3DCap(float zoomFactor);
		public Vector3 GetRealEndPosition(float zoomFactor);
		public Vector3 GetRealEndPositionWith3DCap(float zoomFactor);
		public float GetRealBoxHeight(float zoomFactor);
		public float GetRealBoxDepth(float zoomFactor);
		public float GetRealCylinderRadius(float zoomFactor);
		public void MapDirection(int axisIndex, AxisSign axisSign);
		public void MapDragRotationAxis(GizmoTransform mapTransform, int axisIndex, AxisSign axisSign);
		public void UnmapDragRotationAxis();
		public void SetDirection(Vector3 directionAxis);
		public void SetDragRotationAxis(Vector3 rotationAxis);
		public void AddTargetTransform(GizmoTransform transform);
		public void AddTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel);
		public void RemoveTargetTransform(GizmoTransform transform);
		public void RemoveTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel);
		public void SetDragChannel(GizmoDragChannel dragChannel);
		public void ApplyZoomFactor(Camera camera);
		public override void Render(Camera camera);
		public void Refresh();
		protected override void OnVisibilityStateChanged();
		protected override void OnHoverableStateChanged();
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId);
		private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData);
		private void OnGizmoHandleHoverEnter(Gizmo gizmo, int handleId);
		private void OnGizmoPostEnabled(Gizmo gizmo);
		private void OnGizmoPostDisabled(Gizmo gizmo);
		private void OnGizmoHandleHoverExit(Gizmo gizmo, int handleId);
		private void SetupSharedLookAndFeel();
	}
}
