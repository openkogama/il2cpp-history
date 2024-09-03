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
	public static class GameObjectEx
	{
		// Fields
		private static List<Transform> _transformsChildren;
	
		// Constructors
		static GameObjectEx();
	
		// Methods
		public static List<GameObject> GetRoots(IEnumerable<GameObject> gameObjects);
		public static void FilterParentsOnly(IEnumerable<GameObject> gameObjects, List<GameObject> parents);
		public static List<GameObject> FilterParentsOnly(IEnumerable<GameObject> gameObjects);
	
		// Extension methods
		public static void SetStatic(this GameObject gameObject, bool isStatic, bool affectChildren);
		public static bool IsRTGAppObject(this GameObject gameObject);
		public static GameObjectType GetGameObjectType(this GameObject gameObject);
		public static bool HierarchyHasMesh(this GameObject root);
		public static bool HierarchyHasSprite(this GameObject root);
		public static bool HierarchyHasObjectsOfType(this GameObject root, GameObjectType typeFlags);
		public static List<GameObject> GetMeshObjectsInHierarchy(this GameObject root);
		public static List<GameObject> GetSpriteObjectsInHierarchy(this GameObject root);
		public static void SetHierarchyWorldScaleByPivot(this GameObject root, Vector3 worldScale, Vector3 pivotPoint);
		public static List<GameObject> GetAllChildren(this GameObject gameObject);
		public static List<GameObject> GetAllChildrenAndSelf(this GameObject gameObject);
		public static void GetAllChildrenAndSelf(this GameObject gameObject, List<GameObject> childrenAndSelf);
		public static Mesh GetMesh(this GameObject gameObject);
		public static Renderer GetMeshRenderer(this GameObject gameObject);
		public static Sprite GetSprite(this GameObject gameObject);
	}
}
