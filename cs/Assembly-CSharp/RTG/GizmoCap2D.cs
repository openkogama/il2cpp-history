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
	public class GizmoCap2D : GizmoCap
	{
		// Fields
		private int _quadIndex;
		private QuadShape2D _quad;
		private int _circleIndex;
		private CircleShape2D _circle;
		private int _arrowIndex;
		private ConeShape2D _arrow;
		private GizmoTransform _transform;
		private GizmoOverrideColor _overrideFillColor;
		private GizmoOverrideColor _overrideBorderColor;
		private GizmoCap2DControllerData _controllerData;
		private IGizmoCap2DController[] _controllers;
		private GizmoCap2DLookAndFeel _lookAndFeel;
		private GizmoCap2DLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public Vector2 Position { get; set; }
		public Quaternion Rotation { get; }
		public float RotationDegrees { get; set; }
		public GizmoOverrideColor OverrideFillColor { get; }
		public GizmoOverrideColor OverrideBorderColor { get; }
		public IGizmoDragSession DragSession { get; set; }
		public GizmoCap2DLookAndFeel LookAndFeel { get; }
		public GizmoCap2DLookAndFeel SharedLookAndFeel { get; set; }
	
		// Constructors
		public GizmoCap2D(Gizmo gizmo, int handleId);
	
		// Methods
		public void RegisterTransformAsDragTarget(IGizmoDragSession dragSession);
		public void UnregisterTransformAsDragTarget(IGizmoDragSession dragSession);
		public void AlignTransformAxis(int axisIndex, AxisSign axisSign, Vector2 axis);
		public float GetRealQuadWidth();
		public float GetRealQuadHeight();
		public float GetRealCircleRadius();
		public float GetRealArrowHeight();
		public float GetRealArrowBaseRadius();
		public void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt);
		public void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt);
		public override void Render(Camera camera);
		public void Refresh();
		protected override void OnVisibilityStateChanged();
		protected override void OnHoverableStateChanged();
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData);
		private void OnGizmoPostEnabled(Gizmo gizmo);
	}
}
