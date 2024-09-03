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
	public class MoveGizmo : GizmoBehaviour
	{
		// Fields
		private GizmoLineSlider3D _pXSlider;
		private GizmoLineSlider3D _pYSlider;
		private GizmoLineSlider3D _pZSlider;
		private GizmoLineSlider3D _nXSlider;
		private GizmoLineSlider3D _nYSlider;
		private GizmoLineSlider3D _nZSlider;
		private GizmoLineSlider3DCollection _axesSliders;
		private GizmoPlaneSlider3D _xySlider;
		private GizmoPlaneSlider3D _yzSlider;
		private GizmoPlaneSlider3D _zxSlider;
		private GizmoPlaneSlider3DCollection _dblSliders;
		private GizmoCap3D _midCap;
		private bool _isVertexSnapEnabled;
		private GizmoCap2D _vertSnapCap;
		private GizmoObjectVertexSnapDrag3D _vertexSnapDrag;
		private Vector3 _postVSnapPosRestore;
		private bool _is2DModeEnabled;
		private GizmoLineSlider2D _p2DModeXSlider;
		private GizmoLineSlider2D _p2DModeYSlider;
		private GizmoLineSlider2D _n2DModeXSlider;
		private GizmoLineSlider2D _n2DModeYSlider;
		private GizmoLineSlider2DCollection _2DModeSliders;
		private GizmoPlaneSlider2D _2DModeDblSlider;
		[SerializeField]
		private bool _useSnapEnableHotkey;
		[SerializeField]
		private bool _useVertSnapEnableHotkey;
		[SerializeField]
		private bool _use2DModeEnableHotkey;
		[SerializeField]
		private MoveGizmoHotkeys _hotkeys;
		[SerializeField]
		private MoveGizmoSettings2D _settings2D;
		[SerializeField]
		private MoveGizmoSettings3D _settings3D;
		[SerializeField]
		private MoveGizmoLookAndFeel2D _lookAndFeel2D;
		[SerializeField]
		private MoveGizmoLookAndFeel3D _lookAndFeel3D;
		private MoveGizmoHotkeys _sharedHotkeys;
		private MoveGizmoSettings2D _sharedSettings2D;
		private MoveGizmoSettings3D _sharedSettings3D;
		private MoveGizmoLookAndFeel2D _sharedLookAndFeel2D;
		private MoveGizmoLookAndFeel3D _sharedLookAndFeel3D;
	
		// Properties
		public MoveGizmoSettings2D Settings2D { get; }
		public MoveGizmoSettings3D Settings3D { get; }
		public MoveGizmoLookAndFeel2D LookAndFeel2D { get; }
		public MoveGizmoLookAndFeel3D LookAndFeel3D { get; }
		public MoveGizmoHotkeys Hotkeys { get; }
		public MoveGizmoSettings2D SharedSettings2D { get; set; }
		public MoveGizmoSettings3D SharedSettings3D { get; set; }
		public MoveGizmoLookAndFeel2D SharedLookAndFeel2D { get; set; }
		public MoveGizmoLookAndFeel3D SharedLookAndFeel3D { get; set; }
		public MoveGizmoHotkeys SharedHotkeys { get; set; }
		public bool UseSnapEnableHotkey { get; set; }
		public bool UseVertSnapEnableHotkey { get; set; }
		public bool Use2DModeEnableHotkey { get; set; }
	
		// Nested types
		public enum VertexSnapState
		{
			SelectingPivot = 0,
			Snapping = 1,
			Inactive = 2
		}
	
		// Constructors
		public MoveGizmo();
	
		// Methods
		public VertexSnapState GetVertexSnapState();
		public float GetZoomFactor(Vector3 position);
		public float GetZoomFactor(Vector3 position, Camera camera);
		public bool OwnsHandle(int handleId);
		public void SetAxesLinesHoverable(bool hoverable);
		public void SetSnapEnabled(bool isEnabled);
		public void SetVertexSnapEnabled(bool isEnabled);
		public void Set2DModeEnabled(bool isEnabled);
		public void SetVertexSnapTargetObjects(IEnumerable<GameObject> targetObjects);
		public override void OnAttached();
		public override void OnDetached();
		public override void OnEnabled();
		public override void OnDisabled();
		public override void OnGizmoEnabled();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoRender(Camera camera);
		public override void OnGizmoDragUpdate(int handleId);
		private void PlaceDblSlidersInSliderPlanes(Camera camera);
		private void SetupSharedLookAndFeel();
		private void SetupSharedSettings();
		private void Update2DGizmoPosition();
		private void Update2DModeHandlePositions();
		private void OnGizmoTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData);
		private void Hide2DModeHandles();
	}
}
