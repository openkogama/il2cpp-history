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
	public class GizmoLineSlider2D : GizmoSlider
	{
		// Fields
		private SegmentShape2D _segment;
		private QuadShape2D _quad;
		private int _segmentIndex;
		private int _quadIndex;
		private GizmoDragChannel _dragChannel;
		private GizmoSglAxisOffsetDrag3D _offsetDrag;
		private Vector3 _offsetDragOrigin;
		private GizmoSglAxisRotationDrag3D _rotationDrag;
		private GizmoRotationArc2D _rotationArc;
		private GizmoSglAxisScaleDrag3D _scaleDrag;
		private Vector3 _scaleDragOrigin;
		private Vector3 _scaleAxis;
		private int _scaleDragAxisIndex;
		private IGizmoDragSession _selectedDragSession;
		private GizmoCap2D _cap2D;
		private GizmoTransform _transform;
		private GizmoTransformAxisMap2D _directionAxisMap;
		private GizmoOverrideColor _overrideFillColor;
		private GizmoOverrideColor _overrideBorderColor;
		private GizmoLineSlider2DControllerData _controllerData;
		private IGizmoLineSlider2DController[] _controllers;
		private GizmoLineSlider2DSettings _settings;
		private GizmoLineSlider2DSettings _sharedSettings;
		private GizmoLineSlider2DLookAndFeel _lookAndFeel;
		private GizmoLineSlider2DLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public Quaternion Rotation { get; }
		public float RotationDegrees { get; }
		public Vector2 StartPosition { get; set; }
		public Vector2 Direction { get; }
		public Vector3 OffsetDragOrigin { get; set; }
		public Vector3 ScaleDragOrigin { get; set; }
		public int ScaleDragAxisIndex { get; set; }
		public int Cap2DHandleId { get; }
		public bool IsDragged { get; }
		public bool IsMoving { get; }
		public bool IsRotating { get; }
		public bool IsScaling { get; }
		public bool Is2DCapVisible { get; }
		public bool Is2DCapHoverable { get; }
		public Vector3 TotalDragOffset { get; }
		public Vector3 RelativeDragOffset { get; }
		public float TotalDragRotation { get; }
		public float RelativeDragRotation { get; }
		public float TotalDragScale { get; }
		public float RelativeDragScale { get; }
		public GizmoOverrideColor OverrideFillColor { get; }
		public GizmoOverrideColor OverrideBorderColor { get; }
		public GizmoLineSlider2DSettings Settings { get; }
		public GizmoLineSlider2DSettings SharedSettings { get; set; }
		public GizmoLineSlider2DLookAndFeel LookAndFeel { get; }
		public GizmoLineSlider2DLookAndFeel SharedLookAndFeel { get; set; }
	
		// Constructors
		public GizmoLineSlider2D(Gizmo gizmo, int handleId, int capHandleId);
	
		// Methods
		public override void SetSnapEnabled(bool isEnabled);
		public void Set2DCapVisible(bool isVisible);
		public void Set2DCapHoverable(bool isHoverable);
		public Vector2 GetRealDirection();
		public float GetRealLength();
		public Vector2 GetRealEndPosition();
		public float GetRealBoxThickness();
		public void MapDirection(int axisIndex, AxisSign axisSign);
		public void SetDirection(Vector2 directionAxis);
		public void AddTargetTransform(GizmoTransform transform);
		public void AddTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel);
		public void RemoveTargetTransform(GizmoTransform transform);
		public void RemoveTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel);
		public void SetDragChannel(GizmoDragChannel dragChannel);
		public override void Render(Camera camera);
		public void Refresh();
		protected override void OnVisibilityStateChanged();
		protected override void OnHoverableStateChanged();
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId);
		private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData);
		private void OnGizmoHandleHoverEnter(Gizmo gizmo, int handleId);
		private void OnGizmoHandleHoverExit(Gizmo gizmo, int handleId);
		private void OnGizmoHandleDragUpdate(Gizmo gizmo, int handleId);
		private void SetupSharedLookAndFeel();
		private void OnGizmoPostEnabled(Gizmo gizmo);
	}
}
