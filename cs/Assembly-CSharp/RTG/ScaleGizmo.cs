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
	public class ScaleGizmo : GizmoBehaviour
	{
		// Fields
		private GizmoLineSlider3D _pstvXSlider;
		private GizmoLineSlider3D _pstvYSlider;
		private GizmoLineSlider3D _pstvZSlider;
		private GizmoLineSlider3D _negXSlider;
		private GizmoLineSlider3D _negYSlider;
		private GizmoLineSlider3D _negZSlider;
		private GizmoLineSlider3DCollection _axesSliders;
		private GizmoMultiAxisScaleMode _multiAxisScaleMode;
		private GizmoPlaneSlider3D _xySlider;
		private GizmoPlaneSlider3D _yzSlider;
		private GizmoPlaneSlider3D _zxSlider;
		private GizmoPlaneSlider3DCollection _dblSliders;
		private GizmoCap3D _midCap;
		private GizmoUniformScaleDrag3D _unformScaleDrag;
		private GizmoScaleGuide _scaleGuide;
		private IEnumerable<GameObject> _scaleGuideTargetObjects;
		[SerializeField]
		private ScaleGizmoLookAndFeel3D _lookAndFeel3D;
		[SerializeField]
		private ScaleGizmoSettings3D _settings3D;
		[SerializeField]
		private ScaleGizmoHotkeys _hotkeys;
		[SerializeField]
		private bool _useSnapEnableHotkey;
		[SerializeField]
		private bool _useMultiAxisScaleModeHotkey;
		private ScaleGizmoLookAndFeel3D _sharedLookAndFeel3D;
		private ScaleGizmoSettings3D _sharedSettings3D;
		private ScaleGizmoHotkeys _sharedHotkeys;
	
		// Properties
		public GizmoMultiAxisScaleMode MultiAxisScaleMode { get; }
		public ScaleGizmoLookAndFeel3D LookAndFeel3D { get; }
		public ScaleGizmoSettings3D Settings3D { get; }
		public ScaleGizmoHotkeys Hotkeys { get; }
		public ScaleGizmoHotkeys SharedHotkeys { get; set; }
		public ScaleGizmoSettings3D SharedSettings3D { get; set; }
		public ScaleGizmoLookAndFeel3D SharedLookAndFeel3D { get; set; }
		public bool UseSnapEnableHotkey { get; set; }
		public bool UseMultiAxisScaleModeHotkey { get; set; }
	
		// Constructors
		public ScaleGizmo();
	
		// Methods
		public float GetZoomFactor(Vector3 position);
		public float GetZoomFactor(Vector3 position, Camera camera);
		public bool OwnsHandle(int handleId);
		public void SetAxesLinesHoverable(bool hoverable);
		public void SetSnapEnabled(bool isEnabled);
		public void SetMultiAxisScaleMode(GizmoMultiAxisScaleMode scaleMode);
		public void SetScaleGuideTargetObjects(IEnumerable<GameObject> targetObjects);
		public override void OnGizmoEnabled();
		public override void OnAttached();
		public override void OnGizmoUpdateBegin();
		public override void OnGizmoRender(Camera camera);
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		private void PlaceDblSlidersInSliderPlanes(Camera camera);
		private void SetupSharedLookAndFeel();
		private void SetupSharedSettings();
	}
}
