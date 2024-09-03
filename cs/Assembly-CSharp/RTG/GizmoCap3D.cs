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
	public class GizmoCap3D : GizmoCap
	{
		// Fields
		private int _coneIndex;
		private ConeShape3D _cone;
		private int _pyramidIndex;
		private PyramidShape3D _pyramid;
		private int _boxIndex;
		private BoxShape3D _box;
		private int _sphereIndex;
		private SphereShape3D _sphere;
		private int _trPrismIndex;
		private TriangPrismShape3D _trPrism;
		private GizmoCap3DControllerData _controllerData;
		private IGizmoCap3DController[] _controllers;
		private GizmoTransform _transform;
		private GizmoOverrideColor _overrideColor;
		private GizmoCap3DLookAndFeel _lookAndFeel;
		private GizmoCap3DLookAndFeel _sharedLookAndFeel;
	
		// Properties
		public Vector3 Position { get; set; }
		public Quaternion Rotation { get; set; }
		public GizmoOverrideColor OverrideColor { get; }
		public IGizmoDragSession DragSession { get; set; }
		public GizmoCap3DLookAndFeel LookAndFeel { get; }
		public GizmoCap3DLookAndFeel SharedLookAndFeel { get; set; }
	
		// Constructors
		public GizmoCap3D(Gizmo gizmo, int handleId);
	
		// Methods
		public void RegisterTransformAsDragTarget(IGizmoDragSession dragSession);
		public void UnregisterTransformAsDragTarget(IGizmoDragSession dragSession);
		public void AlignTransformAxis(int axisIndex, AxisSign axisSign, Vector3 axis);
		public void SetZoomFactorTransform(GizmoTransform transform);
		public void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt);
		public void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt);
		public float GetSliderAlignedRealLength(float zoomFactor);
		public float GetZoomFactor(Camera camera);
		public float GetRealConeHeight(float zoomFactor);
		public float GetRealConeRadius(float zoomFactor);
		public float GetRealPyramidWidth(float zoomFactor);
		public float GetRealPyramidDepth(float zoomFactor);
		public float GetRealPyramidHeight(float zoomFactor);
		public float GetRealBoxWidth(float zoomFactor);
		public float GetRealBoxHeight(float zoomFactor);
		public float GetRealBoxDepth(float zoomFactor);
		public Vector3 GetRealBoxSize(float zoomFactor);
		public float GetRealSphereRadius(float zoomFactor);
		public float GetRealTriPrismWidth(float zoomFactor);
		public float GetRealTriPrismHeight(float zoomFactor);
		public float GetRealTriPrismDepth(float zoomFactor);
		public void ApplyZoomFactor(Camera camera);
		public override void Render(Camera camera);
		public void Refresh();
		protected override void OnVisibilityStateChanged();
		protected override void OnHoverableStateChanged();
		private void OnGizmoPreUpdateBegin(Gizmo gizmo);
		private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData);
		private void OnGizmoPostEnabled(Gizmo gizmo);
		private void OnGizmoPostDisabled(Gizmo gizmo);
	}
}
