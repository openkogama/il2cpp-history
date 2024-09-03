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
	public class GizmoObjectVertexSnapDrag3D : GizmoDragSession
	{
		// Fields
		private IEnumerable<GameObject> _targetObjects;
		private Vector3 _snapPivot;
		private bool _isActive;
		private List<GameObject> _destinationObjects;
		private GizmoObjectVertexSnapSettings _settings;
		private List<GameObject> _visibleObjectBuffer;
	
		// Properties
		public override bool IsActive { get; }
		public override GizmoDragChannel DragChannel { get; }
		public Vector3 SnapPivot { get; }
		public GizmoObjectVertexSnapSettings Settings { set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass22_0
		{
			// Fields
			public List<GameObject> targetObjects;
			public Camera focusCamera;
			public ObjectBounds.QueryConfig boundsQConfig;
			public Vector2 inputDevicePos;
	
			// Constructors
			public __c__DisplayClass22_0();
	
			// Methods
			internal bool _GatherDestinationObjects_b__0(GameObject a);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass22_1
		{
			// Fields
			public GameObject a;
	
			// Constructors
			public __c__DisplayClass22_1();
	
			// Methods
			internal bool _GatherDestinationObjects_b__1(GameObject b);
		}
	
		// Constructors
		public GizmoObjectVertexSnapDrag3D();
	
		// Methods
		public void SetTargetObjects(IEnumerable<GameObject> targetObjects);
		public bool SelectSnapPivotPoint(Gizmo gizmo);
		protected override bool DoBeginSession();
		protected override bool DoUpdateSession();
		protected override void DoEndSession();
		protected override void CalculateDragValues();
		protected bool GetWorldPointClosestToInputDevice(Camera focusCamera, IEnumerable<GameObject> gameObjects, out Vector3 point);
		protected bool CanUseObjectAsSnapDestination(GameObject gameObject);
		private void GatherDestinationObjects();
	}
}
