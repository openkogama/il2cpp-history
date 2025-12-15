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
	public class RTGizmosEngine : MonoSingleton<RTG.RTGizmosEngine>, IHoverableSceneEntityContainer
	{
		// Fields
		[CompilerGenerated]
		private GizmoEngineCanDoHoverUpdateHandler CanDoHoverUpdate;
		[SerializeField]
		private EditorToolbar _mainToolbar;
		[SerializeField]
		private GizmoEngineSettings _settings;
		private GizmosEnginePipelineStage _pipelineStage;
		private Gizmo _draggedGizmo;
		private bool _justReleasedDrag;
		private Gizmo _hoveredGizmo;
		private GizmoHoverInfo _gizmoHoverInfo;
		private List<Gizmo> _gizmos;
		private List<Camera> _renderCameras;
		[SerializeField]
		private MoveGizmoSettings2D _moveGizmoSettings2D;
		[SerializeField]
		private MoveGizmoSettings3D _moveGizmoSettings3D;
		[SerializeField]
		private MoveGizmoLookAndFeel2D _moveGizmoLookAndFeel2D;
		[SerializeField]
		private MoveGizmoLookAndFeel3D _moveGizmoLookAndFeel3D;
		[SerializeField]
		private MoveGizmoHotkeys _moveGizmoHotkeys;
		[SerializeField]
		private ObjectTransformGizmoSettings _objectMoveGizmoSettings;
		[SerializeField]
		private RotationGizmoSettings3D _rotationGizmoSettings3D;
		[SerializeField]
		private RotationGizmoLookAndFeel3D _rotationGizmoLookAndFeel3D;
		[SerializeField]
		private ObjectTransformGizmoSettings _objectRotationGizmoSettings;
		[SerializeField]
		private ScaleGizmoSettings3D _scaleGizmoSettings3D;
		[SerializeField]
		private ScaleGizmoLookAndFeel3D _scaleGizmoLookAndFeel3D;
		[SerializeField]
		private ScaleGizmoHotkeys _scaleGizmoHotkeys;
		[SerializeField]
		private ObjectTransformGizmoSettings _objectScaleGizmoSettings;
		[SerializeField]
		private UniversalGizmoConfig _universalGizmoConfig;
		[SerializeField]
		private UniversalGizmoSettings2D _universalGizmoSettings2D;
		[SerializeField]
		private UniversalGizmoSettings3D _universalGizmoSettings3D;
		[SerializeField]
		private UniversalGizmoLookAndFeel2D _universalGizmoLookAndFeel2D;
		[SerializeField]
		private UniversalGizmoLookAndFeel3D _universalGizmoLookAndFeel3D;
		[SerializeField]
		private UniversalGizmoHotkeys _universalGizmoHotkeys;
		[SerializeField]
		private ObjectTransformGizmoSettings _objectUniversalGizmoSettings;
	
		// Properties
		public GizmoEngineSettings Settings { get; }
		public GizmosEnginePipelineStage PipelineStage { get; }
		public Camera RenderStageCamera { get; }
		public bool HasHoveredSceneEntity { get; }
		public bool IsAnyGizmoHovered { get; }
		public Gizmo HoveredGizmo { get; }
		public Gizmo DraggedGizmo { get; }
		public bool JustReleasedDrag { get; }
		public int NumRenderCameras { get; }
		public MoveGizmoSettings2D MoveGizmoSettings2D { get; }
		public MoveGizmoSettings3D MoveGizmoSettings3D { get; }
		public MoveGizmoLookAndFeel2D MoveGizmoLookAndFeel2D { get; }
		public MoveGizmoLookAndFeel3D MoveGizmoLookAndFeel3D { get; }
		public MoveGizmoHotkeys MoveGizmoHotkeys { get; }
		public ObjectTransformGizmoSettings ObjectMoveGizmoSettings { get; }
		public RotationGizmoSettings3D RotationGizmoSettings3D { get; }
		public RotationGizmoLookAndFeel3D RotationGizmoLookAndFeel3D { get; }
		public ObjectTransformGizmoSettings ObjectRotationGizmoSettings { get; }
		public ScaleGizmoSettings3D ScaleGizmoSettings3D { get; }
		public ScaleGizmoLookAndFeel3D ScaleGizmoLookAndFeel3D { get; }
		public ScaleGizmoHotkeys ScaleGizmoHotkeys { get; }
		public ObjectTransformGizmoSettings ObjectScaleGizmoSettings { get; }
		public UniversalGizmoSettings2D UniversalGizmoSettings2D { get; }
		public UniversalGizmoSettings3D UniversalGizmoSettings3D { get; }
		public UniversalGizmoLookAndFeel2D UniversalGizmoLookAndFeel2D { get; }
		public UniversalGizmoLookAndFeel3D UniversalGizmoLookAndFeel3D { get; }
		public UniversalGizmoHotkeys UniversalGizmoHotkeys { get; }
		public ObjectTransformGizmoSettings ObjectUniversalGizmoSettings { get; }
	
		// Events
		public event GizmoEngineCanDoHoverUpdateHandler CanDoHoverUpdate {
			add;
			remove;
		}
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass102_0
		{
			// Fields
			public Gizmo gizmo;
			public Vector3 screenRayOrigin;
	
			// Constructors
			public __c__DisplayClass102_0();
	
			// Methods
			internal int _GetGizmoHandleHoverData_b__0(GizmoHandleHoverData h0, GizmoHandleHoverData h1);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass103_0
		{
			// Fields
			public Vector3 camPos;
	
			// Constructors
			public __c__DisplayClass103_0();
	
			// Methods
			internal int _Render_SystemCall_b__0(Gizmo g0, Gizmo g1);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass104_0
		{
			// Fields
			public Vector3 inputDevicePos;
			public Ray hoverRay;
	
			// Constructors
			public __c__DisplayClass104_0();
	
			// Methods
			internal int _SortHandleHoverDataCollection_b__0(GizmoHandleHoverData h0, GizmoHandleHoverData h1);
		}
	
		// Constructors
		public RTGizmosEngine();
	
		// Methods
		public void AddRenderCamera(Camera camera);
		public bool IsRenderCamera(Camera camera);
		public void RemoveRenderCamera(Camera camera);
		public Gizmo CreateGizmo();
		public void RemoveGizmo(Gizmo gizmo);
		public MoveGizmo CreateMoveGizmo();
		public ObjectTransformGizmo CreateObjectMoveGizmo();
		public RotationGizmo CreateRotationGizmo();
		public ObjectTransformGizmo CreateObjectRotationGizmo();
		public ScaleGizmo CreateScaleGizmo();
		public ObjectTransformGizmo CreateObjectScaleGizmo();
		public UniversalGizmo CreateUniversalGizmo();
		public ObjectTransformGizmo CreateObjectUniversalGizmo();
		public void Update_SystemCall();
		public GizmoHandleHoverData GetGizmoHandleHoverData(Gizmo gizmo);
		public void Render_SystemCall(Camera renderCamera);
		private void SortHandleHoverDataCollection(List<GizmoHandleHoverData> hoverDataCollection, Vector3 inputDevicePos);
		private void RegisterGizmo(Gizmo gizmo);
		private void UnregisterGizmo(Gizmo gizmo);
		private void OnGUI();
		private void OnGizmoDragBegin(Gizmo gizmo, int handleId);
		private void OnGizmoDragEnd(Gizmo gizmo, int handleId);
	}
}
