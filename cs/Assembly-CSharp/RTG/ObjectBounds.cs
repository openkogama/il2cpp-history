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
	public static class ObjectBounds
	{
		// Fields
		private static QueryConfig _defaultQConfig;
	
		// Properties
		public static QueryConfig DefaultQConfig { get; }
	
		// Nested types
		public struct QueryConfig
		{
			// Fields
			public GameObjectType ObjectTypes;
			public Vector3 NoVolumeSize;
		}
	
		// Constructors
		static ObjectBounds();
	
		// Methods
		public static Rect CalcScreenRect(GameObject gameObject, Camera camera, QueryConfig queryConfig);
		public static OBB CalcSpriteWorldOBB(GameObject gameObject);
		public static AABB CalcSpriteWorldAABB(GameObject gameObject);
		public static AABB CalcSpriteModelAABB(GameObject spriteObject);
		public static OBB GetMeshWorldOBB(GameObject gameObject);
		public static AABB GetMeshWorldAABB(GameObject gameObject);
		public static AABB CalcObjectCollectionWorldAABB(IEnumerable<GameObject> gameObjectCollection, QueryConfig queryConfig);
		public static AABB CalcHierarchyCollectionWorldAABB(IEnumerable<GameObject> roots, QueryConfig queryConfig);
		public static OBB CalcHierarchyWorldOBB(GameObject root, QueryConfig queryConfig);
		public static AABB CalcHierarchyWorldAABB(GameObject root, QueryConfig queryConfig);
		public static OBB CalcWorldOBB(GameObject gameObject, QueryConfig queryConfig);
		public static AABB CalcWorldAABB(GameObject gameObject, QueryConfig queryConfig);
		public static AABB CalcMeshWorldAABB(GameObject gameObject);
		public static AABB CalcHierarchyModelAABB(GameObject root, QueryConfig queryConfig);
		public static AABB CalcMeshModelAABB(GameObject gameObject);
		public static AABB CalcModelAABB(GameObject gameObject, QueryConfig queryConfig, GameObjectType objectType);
	}
}
