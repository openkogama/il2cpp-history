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
	public static class ObjectVertexCollect
	{
		// Fields
		private static List<Vector3> _hierarchyVertsCollectBuffer;
	
		// Constructors
		static ObjectVertexCollect();
	
		// Methods
		public static List<Vector3> CollectModelSpriteVerts(Sprite sprite, AABB collectAABB);
		public static List<Vector3> CollectWorldSpriteVerts(Sprite sprite, Transform spriteTransform, OBB collectOBB);
		public static List<Vector3> CollectHierarchyVerts(GameObject root, BoxFace collectFace, float collectBoxScale, float collectEps);
	}
}
