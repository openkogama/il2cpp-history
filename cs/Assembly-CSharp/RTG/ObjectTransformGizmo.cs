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
	[Serializable]
	public class ObjectTransformGizmo : GizmoBehaviour
	{
		// Fields
		private TargetObjectMode _targetObjectMode;
		private Channels _transformChannelFlags;
		private IEnumerable<GameObject> _targetObjects;
		private GameObject _targetPivotObject;
		private List<LocalTransformSnapshot> _preTransformSnapshots;
		private List<GameObject> _transformableParents;
		private AABB _targetGroupAABBOnDragBegin;
		private GizmoSpace _transformSpace;
		private bool _isTransformSpacePermanent;
		private GizmoObjectTransformPivot _transformPivot;
		private bool _isTransformPivotPermanent;
		private bool _scaleConstraintEnabled;
		private Vector3 _minPositiveScale;
		private Vector3 _customWorldPivot;
		private Dictionary<GameObject, Vector3> _objectToCustomLocalPivot;
		private Dictionary<GameObject, ObjectRestrictions> _objectToRestrictions;
		[SerializeField]
		private ObjectTransformGizmoSettings _settings;
		private ObjectTransformGizmoSettings _sharedSettings;
	
		// Properties
		public GizmoObjectTransformPivot TransformPivot { get; }
		public bool IsTransformPivotPermanent { get; }
		public GizmoSpace TransformSpace { get; }
		public bool IsTransformSpacePermanent { get; }
		public Channels TransformChannelFlags { get; }
		public bool CanAffectPosition { get; }
		public bool CanAffectRotation { get; }
		public bool CanAffectScale { get; }
		public Vector3 CustomWorldPivot { get; }
		public bool ScaleConstraintEnabled { get; set; }
		public Vector3 MinPositiveScale { get; set; }
		public ObjectTransformGizmoSettings Settings { get; }
		public ObjectTransformGizmoSettings SharedSettings { get; set; }
	
		// Nested types
		public class ObjectRestrictions
		{
			// Fields
			private bool[] _moveAxesMask;
			private bool[] _scaleAxesMask;
			private HashSet<int> _handleMask;
	
			// Constructors
			public ObjectRestrictions();
	
			// Methods
			public bool CanMoveAlongAllAxes();
			public bool CanScaleAlongAllAxes();
			public bool CanMoveAlongAxis(int axisIndex);
			public bool CanScaleAlongAxis(int axisIndex);
			public void SetCanMoveAlongAxis(int axisIndex, bool canMove);
			public void SetCanScaleAlongAxis(int axisIndex, bool canScale);
			public bool IsAffectedByHandle(int handleId);
			public void SetIsAffectedByHandle(int handleId, bool isAffected);
			public Vector3 AdjustMoveVector(Vector3 moveVector);
			public Vector3 AdjustScaleVector(Vector3 scaleVector);
		}
	
		[Flags]
		public enum Channels
		{
			None = 0,
			Position = 1,
			Rotation = 2,
			Scale = 4,
			All = 7
		}
	
		private enum TargetObjectMode
		{
			Multiple = 0,
			Single = 1
		}
	
		// Constructors
		public ObjectTransformGizmo();
	
		// Methods
		public override void OnAttached();
		public override void OnDetached();
		public void MakeTransformSpacePermanent();
		public void MakeTransformPivotPermanent();
		public bool ContainsRestrictionsForObject(GameObject targetObject);
		public void RegisterObjectRestrictions(GameObject targetObject, ObjectRestrictions restrictions);
		public void RegisterObjectRestrictions(List<GameObject> targetObjects, ObjectRestrictions restrictions);
		public void UnregisterObjectRestrictions(GameObject targetObject);
		public ObjectRestrictions GetObjectRestrictions(GameObject targetObject);
		public void SetTransformChannelFlags(Channels flags);
		public void SetCanAffectPosition(bool affectPosition);
		public void SetCanAffectRotation(bool affectRotation);
		public void SetCanAffectScale(bool affectScale);
		public void SetTargetPivotObject(GameObject targetPivotObject);
		public void SetTargetObjects(IEnumerable<GameObject> targetObjects);
		public void SetTargetObject(GameObject targetObject);
		public void SetTransformPivot(GizmoObjectTransformPivot transformPivot);
		public void SetCustomWorldPivot(Vector3 pivot);
		public void SetObjectCustomLocalPivot(GameObject gameObj, Vector3 pivot);
		public Vector3 GetObjectCustomLocalPivot(GameObject gameObj);
		public void SetTransformSpace(GizmoSpace transformSpace);
		public AABB GetTargetObjectGroupWorldAABB();
		public int GetNumTransformableParentObjects();
		public void RefreshPosition();
		public void RefreshRotation();
		public void RefreshPositionAndRotation();
		public override void OnGizmoDragBegin(int handleId);
		public override void OnGizmoDragUpdate(int handleId);
		public override void OnGizmoDragEnd(int handleId);
		private List<GameObject> GetTransformableParentObjects();
		private void OnUndoRedoEnd(IUndoRedoAction action);
		private void MoveObjects(Vector3 moveVector);
		private void MoveObject(GameObject gameObject, Vector3 moveVector);
		private void RotateObjects(Quaternion rotation);
		private void RotateObject(GameObject gameObject, Quaternion rotation, Vector3 rotationPivot);
		private void ScaleObjects();
		private void ScaleObject(GameObject gameObject, Vector3 scalePivot);
		private ObjectBounds.QueryConfig GetObjectBoundsQConfig();
	}
}
