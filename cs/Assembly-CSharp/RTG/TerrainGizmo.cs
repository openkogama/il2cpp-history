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
	public class TerrainGizmo : GizmoBehaviour
	{
		// Fields
		private TargetTypeFlags _targetTypeFlags;
		private bool _isSnapEnabled;
		private bool _isVisible;
		private Terrain _targetTerrain;
		private TerrainCollider _terrainCollider;
		private float[,] _terrainHeights;
		private float[,] _preChangeTerrainHeights;
		private float _radius;
		private AnimationCurve _elevationCurve;
		private ObjectRotationData _objectRotationData;
		private SceneOverlapFilter _sceneOverlapFilter;
		private Patch _editPatch;
		private List<Vector3> _modelRadiusCirclePoints;
		private List<Vector3> _radiusCirclePoints;
		private HashSet<GameObject> _affectedObjectsSet;
		private List<TerrainGizmoAffectedObject> _affectedObjects;
		private List<LocalTransformSnapshot> _preChangeTransformSnapshots;
		private Vector3 _preChangeGizmoPos;
		private List<GameObject> _objectsInRadius;
		private GizmoLineSlider3D _axisSlider;
		private GizmoCap3D _midCap;
		private RadiusTick _leftRadiusTick;
		private RadiusTick _rightRadiusTick;
		private RadiusTick _backRadiusTick;
		private RadiusTick _forwardRadiusTick;
		private GizmoSglAxisOffsetDrag3D _radiusDrag;
		private GizmoUniformScaleDrag3D _dummyDrag;
		private TerrainGizmoLookAndFeel _lookAndFeel;
		private TerrainGizmoLookAndFeel _sharedLookAndFeel;
		private TerrainGizmoSettings _settings;
		private TerrainGizmoSettings _sharedSettings;
		private TerrainGizmoHotkeys _hotkeys;
		private TerrainGizmoHotkeys _sharedHotkeys;
		private List<GameObject> _objectCollectRadius;
	
		// Properties
		public TerrainGizmoLookAndFeel LookAndFeel { get; }
		public TerrainGizmoLookAndFeel SharedLookAndFeel { get; set; }
		public TerrainGizmoSettings Settings { get; }
		public TerrainGizmoSettings SharedSettings { get; set; }
		public TerrainGizmoHotkeys Hotkeys { get; }
		public TerrainGizmoHotkeys SharedHotkeys { get; set; }
		public Terrain TargetTerrain { get; }
		public float Radius { get; set; }
		public AnimationCurve ElevationCurve { get; set; }
		public bool IsSnapEnabled { get; }
		public bool IsRotatingObjects { get; }
		public TargetTypeFlags TargetTypes { get; set; }
		public bool HasTerrainTarget { get; }
		public bool HasObjectsInRadiusTarget { get; }
	
		// Nested types
		[Flags]
		public enum TargetTypeFlags
		{
			Terrain = 1,
			ObjectsInRadius = 2,
			All = 3
		}
	
		private class RadiusTick
		{
			// Fields
			public GizmoCap2D Tick;
			public Vector3 DragAxis;
			public Vector3 WorldPosition;
	
			// Constructors
			public RadiusTick();
		}
	
		private class ObjectRotationData
		{
			// Fields
			public bool RotatingObjects;
			public List<GameObject> GameObjects;
			public List<LocalTransformSnapshot> PreSnapshots;
	
			// Constructors
			public ObjectRotationData();
		}
	
		private struct Patch
		{
			// Fields
			public int MinCol;
			public int MaxCol;
			public int MinDepth;
			public int MaxDepth;
	
			// Methods
			public void Clamp(int heightmapRes);
		}
	
		// Constructors
		public TerrainGizmo();
	
		// Methods
		public void SetSnapEnabled(bool enabled);
		public void SetTargetTerrain(Terrain terrain);
		public override void OnAttached();
		public override void OnDisabled();
		public override void OnEnabled();
		public override void OnGizmoUpdateBegin();
		public override bool OnGizmoCanBeginDrag(int handleId);
		public override void OnGizmoAttemptHandleDragBegin(int handleId);
		public override void OnGizmoDragUpdate(int handleId);
		public override void OnGizmoDragEnd(int handleId);
		public override void OnGizmoRender(Camera camera);
		private bool CanObjectBeMovedHrz(GameObject go);
		private bool CanObjectBeMovedVert(GameObject go);
		private bool CanObjectBeRotated(GameObject go);
		private RadiusTick GetRadiusTickFromHandleId(int handleId);
		private void OnUndoRedoPerformed(IUndoRedoAction action);
		private float GetTerrainYPos();
		private void ProjectGizmoOnTerrain();
		private void DragObjectsWithMidCap();
		private void OffsetTerrainPatch(float offset);
		private void OffsetObjectsInRadius(float offset);
		private void CollectObjectsInRadius(List<GameObject> objectsInRadius);
		private bool IsObjectInRadius(GameObject gameObject);
		private void UpdateTicks();
		private Vector3 GetRadiusCircleMinExtents();
		private Vector3 GetRadiusCircleMaxExtents();
		private void SnapGizmoToTerrain();
		private bool IsTargetReady();
		private void SetupSharedLookAndFeel();
		private void SetVisible(bool visible);
		[CompilerGenerated]
		private bool _CollectObjectsInRadius_b__93_0(GameObject item);
	}
}
