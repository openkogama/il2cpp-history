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
	public class GizmoTransform
	{
		// Fields
		[CompilerGenerated]
		private GizmoEntityTransformChangedHandler Changed;
		private bool _firingChanged3DEvent;
		private bool _firingChanged2DEvent;
		private Vector3 _position3D;
		private Vector3 _localPosition3D;
		private Quaternion _rotation3D;
		private Quaternion _localRotation3D;
		private Vector2 _position2D;
		private Vector2 _localPosition2D;
		private float _rotation2DDegrees;
		private Quaternion _rotation2D;
		private float _localRotation2DDegrees;
		private Quaternion _localRotation2D;
		private Vector3[] _axes3D;
		private Vector2[] _axes2D;
		private GizmoTransform _parent;
		private List<GizmoTransform> _children;
	
		// Properties
		public bool CanChange3D { get; }
		public bool CanChange2D { get; }
		public GizmoTransform Parent { get; }
		public int NumChildren { get; }
		public List<GizmoTransform> Children { get; }
		public Vector3 Right3D { get; }
		public Vector3 Up3D { get; }
		public Vector3 Look3D { get; }
		public Vector2 Right2D { get; }
		public Vector2 Up2D { get; }
		public Vector3 Position3D { get; set; }
		public Vector2 Position2D { get; set; }
		public Quaternion Rotation3D { get; set; }
		public Quaternion Rotation2D { get; }
		public float Rotation2DDegrees { get; set; }
		public Vector3 LocalPosition3D { get; set; }
		public Vector2 LocalPosition2D { get; set; }
		public Quaternion LocalRotation3D { get; set; }
		public Quaternion LocalRotation2D { get; }
		public float LocalRotation2DDegrees { get; set; }
	
		// Events
		public event GizmoEntityTransformChangedHandler Changed {
			add;
			remove;
		}
	
		// Nested types
		public enum ChangeReason
		{
			TRSChange = 0,
			ParentChange = 1
		}
	
		public struct ChangeData
		{
			// Fields
			public ChangeReason ChangeReason;
			public GizmoDimension TRSDimension;
	
			// Constructors
			public ChangeData(ChangeReason changeReason, GizmoDimension trsDimension);
		}
	
		// Constructors
		public GizmoTransform();
	
		// Methods
		public static List<GizmoTransform> FilterParentsOnly(IEnumerable<GizmoTransform> transforms);
		public PlaneQuadrantId Get3DQuadrantFacingCamera(PlaneId planeId, Camera camera);
		public void Rotate3D(Quaternion rotation);
		public void Rotate2D(float rotation);
		public void Rotate2D(Quaternion rotation);
		public Vector3 TransformVector3D(Vector3 vec);
		public Vector2 TransformVector2D(Vector2 vec);
		public Vector3 TransformNormal3D(Vector3 normal);
		public Vector2 TransformNormal2D(Vector2 normal);
		public Vector3 InverseTransformNormal3D(Vector3 normal);
		public Vector2 InverseTransformNormal2D(Vector2 normal);
		public Vector3 TransformPoint3D(Vector3 point);
		public Vector2 TransformPoint2D(Vector2 point);
		public Vector3 InverseTransformPoint3D(Vector3 point);
		public Vector2 InverseTransformPoint2D(Vector2 point);
		public void AlignAxis3D(int axisIndex, AxisSign axisSign, Vector3 axis);
		public void AlignAxis2D(int axisIndex, AxisSign axisSign, Vector2 axis);
		public bool IsChildOf(GizmoTransform transform);
		public void SetParent(GizmoTransform newParent);
		public Vector3 GetAxis3D(AxisDescriptor axisDesc);
		public Vector3 GetAxis3D(int axisIndex, AxisSign axisSign);
		public Vector2 GetAxis2D(AxisDescriptor axisDesc);
		public Vector2 GetAxis2D(int axisIndex, AxisSign axisSign);
		public Vector3[] GetAxes3D();
		public Vector2[] GetAxes2D();
		public Plane GetPlane3D(PlaneId planeId, PlaneQuadrantId planeQuadrantId);
		public Plane GetPlane3D(PlaneDescriptor planeDesc);
		private void ChangePosition3D(Vector3 position);
		private void ChangePosition2D(Vector2 position);
		private void ChangeRotation3D(Quaternion rotation);
		private void ChangeRotation2D(float rotation);
		private void ChangeRotation2D(Quaternion rotation);
		private void ChangeLocalPosition3D(Vector3 localPosition);
		private void ChangeLocalPosition2D(Vector2 localPosition);
		private void ChangeLocalRotation3D(Quaternion localRotation);
		private void ChangeLocalRotation2D(float localRotation);
		private void ChangeLocalRotation2D(Quaternion localRotation);
		private void OnParentChanged();
		private void OnPosition3DChanged();
		private void OnPosition2DChanged();
		private void OnLocalPosition3DChanged();
		private void OnLocalPosition2DChanged();
		private void OnRotation3DChanged();
		private void OnRotation2DChanged();
		private void OnLocalRotation3DChanged();
		private void OnLocalRotation2DChanged();
		private void UpdateChildTransforms3D();
		private void UpdateChildTransforms2D();
		private void OnChanged(ChangeData changeData);
		private void Update3DAxes();
		private void Update2DAxes();
	}
}
