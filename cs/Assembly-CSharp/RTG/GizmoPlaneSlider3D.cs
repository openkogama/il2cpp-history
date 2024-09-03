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
	public class GizmoPlaneSlider3D : GizmoSlider
	{
		// Fields
		private int _quadIndex;
		private int _raTriangleIndex;
		private int _circleIndex;
		private QuadShape3D _quad;
		private RightAngTriangle3D _raTriangle;
		private CircleShape3D _circle;
		private GizmoQuad3DBorder _quadBorder;
		private GizmoRATriangle3DBorder _raTriangleBorder;
		private GizmoCircle3DBorder _circleBorder;
		private bool _isBorderHoverable;
		private bool _isBorderVisible;
		private GizmoTransform _transform;
		private GizmoDragChannel _dragChannel;
		private IGizmoDragSession _selectedDragSession;
		private GizmoDblAxisOffsetDrag3D _dblAxisOffsetDrag;
		private GizmoSglAxisRotationDrag3D _rotationDrag;
		private GizmoRotationArc3D _rotationArc;
		private GizmoDblAxisScaleDrag3D _scaleDrag;
		private int _scaleDragAxisIndexRight;
		private int _scaleDragAxisIndexUp;
		private GizmoPlaneSlider3DControllerData _controllerData;
		private IGizmoPlaneSlider3DController[] _controllers;
		private GizmoPlaneSlider3DSettings _settings;
		private GizmoPlaneSlider3DSettings _sharedSettings;
		private GizmoPlaneSlider3DLookAndFeel _lookAndFeel;
		private GizmoPlaneSlider3DLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public GizmoPlaneSlider3DSettings Settings { get; }
		public GizmoPlaneSlider3DSettings SharedSettings { get; set; }
		public GizmoPlaneSlider3DLookAndFeel LookAndFeel { get; }
		public GizmoPlaneSlider3DLookAndFeel SharedLookAndFeel { get; set; }
		public Plane Plane { get; }
		public Vector3 Position { get; set; }
		public Quaternion Rotation { get; set; }
		public Quaternion LocalRotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public Vector3 Normal { get; }
		public GizmoDragChannel DragChannel { get; }
		public int ScaleDragAxisIndexRight { get; set; }
		public int ScaleDragAxisIndexUp { get; set; }
		public Vector3 TotalDragOffset { get; }
		public Vector3 RelativeDragOffset { get; }
		public float TotalDragRotation { get; }
		public float RelativeDragRotation { get; }
		public float TotalDragScaleRight { get; }
		public float RelativeDragScaleRight { get; }
		public float TotalDragScaleUp { get; }
		public float RelativeDragScaleUp { get; }
		public bool IsBorderVisible { get; }
		public bool IsBorderHoverable { get; }
		public bool IsDragged { get; }
		public bool IsMoving { get; }
		public bool IsRotating { get; }
		public bool IsScaling { get; }
	
		// Constructors
		public GizmoPlaneSlider3D(Gizmo gizmo, int handleId);
	
		// Methods
		public void SetBorderVisible(bool isVisible);
		public void SetBorderHoverable(bool isHoverable);
		public override void SetSnapEnabled(bool isEnabled);
		public void SetZoomFactorTransform(GizmoTransform transform);
		public float GetZoomFactor(Camera camera);
		public float GetRealQuadWidth(float zoomFactor);
		public float GetRealQuadHeight(float zoomFactor);
		public Vector2 GetRealQuadSize(float zoomFactor);
		public float GetRealCircleRadius(float zoomFactor);
		public float GetRealRATriXLength(float zoomFactor);
		public float GetRealRATriYLength(float zoomFactor);
		public Vector2 GetRealRATriSize(float zoomFactor);
		public void AlignToQuadrant(GizmoTransform transform, PlaneId planeId, PlaneQuadrantId quadrantId, bool alignXToFirstAxis);
		public void MakeSliderPlane(GizmoTransform sliderPlaneTransform, PlaneId planeId, GizmoLineSlider3D firstAxisSlider, GizmoLineSlider3D secondAxisSlider, Camera camera);
		public Vector3 GetQuadCornerPosition(QuadCorner corner);
		public void SetQuadCornerPosition(QuadCorner corner, Vector3 cornerPosition);
		public void ApplyZoomFactor(Camera camera);
		public void SetDragChannel(GizmoDragChannel dragChannel);
		public void AddTargetTransform(GizmoTransform transform);
		public void AddTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel);
		public void RemoveTargetTransform(GizmoTransform transform);
		public void RemoveTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel);
		public override void Render(Camera camera);
		public void Refresh();
		protected override void OnVisibilityStateChanged();
		protected override void OnHoverableStateChanged();
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData);
		private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId);
		private void OnCanHoverHandle(int handleId, Gizmo gizmo, GizmoHandleHoverData hoverData, YesNoAnswer answer);
		private void OnGizmoPostEnabled(Gizmo gizmo);
	}
}
