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
	public class Tut_5_CustomObjectLocalPivot : MonoBehaviour
	{
		// Fields
		private ObjectTransformGizmo _objectMoveGizmo;
		private ObjectTransformGizmo _objectRotationGizmo;
		private ObjectTransformGizmo _objectScaleGizmo;
		private ObjectTransformGizmo _objectUniversalGizmo;
		private GizmoId _workGizmoId;
		private ObjectTransformGizmo _workGizmo;
		private List<GameObject> _selectedObjects;
	
		// Nested types
		private enum GizmoId
		{
			Move = 1,
			Rotate = 2,
			Scale = 3,
			Universal = 4
		}
	
		// Constructors
		public Tut_5_CustomObjectLocalPivot();
	
		// Methods
		private void Start();
		private void Update();
		private GameObject PickGameObject();
		private void SetWorkGizmoId(GizmoId gizmoId);
		private void OnSelectionChanged();
		private void SetTransformSpace(GizmoSpace transformSpace);
		private void SetTransformPivot(GizmoObjectTransformPivot transformPivot);
	}
}
