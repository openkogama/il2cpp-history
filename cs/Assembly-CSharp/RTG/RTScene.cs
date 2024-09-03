/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class RTScene : MonoSingleton<RTG.RTScene>
	{
		// Fields
		[SerializeField]
		private SceneSettings _settings;
		private List<IHoverableSceneEntityContainer> _hoverableSceneEntityContainers;
		private SceneTree _sceneTree;
		private HashSet<GameObject> _ignoredRootObjects;
		private List<GameObject> _childrenAndSelfBuffer;
		private List<GameObject> _rootGameObjectsBuffer;
		private List<GameObjectRayHit> _objectHitBuffer;
	
		// Properties
		public SceneSettings Settings { get; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Predicate<RaycastResult> __9__15_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal bool _GetHoveredUIElements_b__15_0(RaycastResult item);
		}
	
		// Constructors
		public RTScene();
	
		// Methods
		public void SetRootObjectIgnored(GameObject root, bool ignored);
		public void OnGameObjectWillBeDestroyed(GameObject gameObject);
		public AABB CalculateBounds();
		public bool IsAnySceneEntityHovered();
		public void RegisterHoverableSceneEntityContainer(IHoverableSceneEntityContainer container);
		public bool IsAnyUIElementHovered();
		public List<RaycastResult> GetHoveredUIElements();
		public GameObject[] GetSceneObjects();
		public bool OverlapBox(OBB obb, List<GameObject> gameObjects);
		public bool OverlapBox(OBB obb, SceneOverlapFilter overlapFilter, List<GameObject> gameObjects);
		public SceneRaycastHit Raycast(Ray ray, SceneRaycastPrecision rtRaycastPrecision, SceneRaycastFilter raycastFilter);
		public bool RaycastAllObjects(Ray ray, SceneRaycastPrecision rtRaycastPrecision, List<GameObjectRayHit> hits);
		public bool RaycastAllObjectsSorted(Ray ray, SceneRaycastPrecision raycastPresicion, List<GameObjectRayHit> hits);
		public bool RaycastAllObjectsSorted(Ray ray, SceneRaycastPrecision rtRaycastPrecision, SceneRaycastFilter raycastFilter, List<GameObjectRayHit> hits);
		public GameObjectRayHit RaycastMeshObject(Ray ray, GameObject meshObject);
		public GameObjectRayHit RaycastMeshObjectReverseIfFail(Ray ray, GameObject meshObject);
		public GameObjectRayHit RaycastSpriteObject(Ray ray, GameObject spriteObject);
		public GameObjectRayHit RaycastTerrainObject(Ray ray, GameObject terrainObject);
		public GameObjectRayHit RaycastTerrainObject(Ray ray, GameObject terrainObject, TerrainCollider terrainCollider);
		public GameObjectRayHit RaycastTerrainObjectReverseIfFail(Ray ray, GameObject terrainObject);
		public XZGridRayHit RaycastSceneGridIfVisible(Ray ray);
		public void Update_SystemCall();
	}
}
