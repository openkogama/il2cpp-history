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
	public class GizmoPlaneSlider2D : GizmoSlider
	{
		// Fields
		private int _quadIndex;
		private int _circleIndex;
		private int _polygonIndex;
		private QuadShape2D _quad;
		private CircleShape2D _circle;
		private PolygonShape2D _polygon;
		private GizmoQuad2DBorder _quadBorder;
		private GizmoCircle2DBorder _circleBorder;
		private GizmoPolygon2DBorder _polygonBorder;
		private bool _isBorderVisible;
		private bool _isBorderHoverable;
		private GizmoTransform _transform;
		private GizmoDragChannel _dragChannel;
		private IGizmoDragSession _selectedDragSession;
		private GizmoDblAxisOffsetDrag3D _offsetDrag;
		private Vector3 _offsetDragOrigin;
		private GizmoSglAxisRotationDrag3D _rotationDrag;
		private GizmoRotationArc2D _rotationArc;
		private GizmoDblAxisScaleDrag3D _scaleDrag;
		private Vector3 _scaleDragOrigin;
		private Vector3 _scaleAxisRight;
		private Vector3 _scaleAxisUp;
		private int _scaleDragAxisIndexRight;
		private int _scaleDragAxisIndexUp;
		private GizmoPlaneSlider2DControllerData _controllerData;
		private IGizmoPlaneSlider2DController[] _controllers;
		private GizmoPlaneSlider2DSettings _settings;
		private GizmoPlaneSlider2DSettings _sharedSettings;
		private GizmoPlaneSlider2DLookAndFeel _lookAndFeel;
		private GizmoPlaneSlider2DLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public GizmoPlaneSlider2DSettings Settings { get; }
		public GizmoPlaneSlider2DSettings SharedSettings { get; set; }
		public GizmoPlaneSlider2DLookAndFeel LookAndFeel { get; }
		public GizmoPlaneSlider2DLookAndFeel SharedLookAndFeel { get; set; }
		public Vector2 Position { get; set; }
		public Vector2 PolyCenter { get; }
		public Quaternion Rotation { get; }
		public float RotationDegrees { get; set; }
		public Vector2 Right { get; }
		public Vector2 Up { get; }
		public Vector3 OffsetDragOrigin { get; set; }
		public GizmoDragChannel DragChannel { get; }
		public Vector3 ScaleDragOrigin { get; set; }
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
		public GizmoPlaneSlider2D(Gizmo gizmo, int handleId);
	
		// Methods
		public void SetBorderVisible(bool isVisible);
		public void SetBorderHoverable(bool isHoverable);
		public override void SetSnapEnabled(bool isEnabled);
		public void SetPolyCwPoints(List<Vector2> cwPoints, bool isClosed);
		public void MakePolySphereBorder(Vector3 sphereCenter, float sphereRadius, int numPoints, Camera camera);
		public float GetRealQuadWidth();
		public float GetRealQuadHeight();
		public Vector2 GetRealQuadSize();
		public float GetRealCircleRadius();
		public Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt);
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
		private void OnGizmoHandleDragUpdate(Gizmo gizmo, int handleId);
		private void OnGizmoPostEnabled(Gizmo gizmo);
	}
}
