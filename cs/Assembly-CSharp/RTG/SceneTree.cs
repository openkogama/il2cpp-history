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
	public class SceneTree
	{
		// Fields
		private static float _nonMeshObjectSize;
		private SphereTree<GameObject> _objectTree;
		private List<SphereTreeNodeRayHit<GameObject>> _nodeHitBuffer;
		private List<SphereTreeNode<GameObject>> _nodeBuffer;
		private Dictionary<GameObject, SphereTreeNode<GameObject>> _objectToNode;
	
		// Constructors
		public SceneTree();
		static SceneTree();
	
		// Methods
		public GameObjectRayHit RaycastMeshObject(Ray ray, GameObject gameObject);
		public GameObjectRayHit RaycastSpriteObject(Ray ray, GameObject gameObject);
		public bool RaycastAll(Ray ray, SceneRaycastPrecision raycastPresicion, List<GameObjectRayHit> hits);
		public bool OverlapBox(OBB obb, List<GameObject> gameObjects);
		public bool IsObjectRegistered(GameObject gameObject);
		public bool RegisterObject(GameObject gameObject);
		public bool UnregisterObject(GameObject gameObject);
		public void OnObjectTransformChanged(Transform objectTransform);
		public void RemoveNodesWithNullObjects();
		public void DebugDraw();
		private bool CanRegisterObject(GameObject gameObject);
	}
}
