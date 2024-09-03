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
	public class MeshTree
	{
		// Fields
		private RTMesh _mesh;
		private SphereTree<MeshTriangle> _tree;
		private List<SphereTreeNode<MeshTriangle>> _nodeBuffer;
		private List<SphereTreeNodeRayHit<MeshTriangle>> _nodeHitBuffer;
		private HashSet<int> _vertexIndexSet;
		private bool _isBuilt;
	
		// Properties
		public bool IsBuilt { get; }
	
		// Constructors
		public MeshTree(RTMesh mesh);
	
		// Methods
		public void SetDirty();
		public void Build();
		public bool OverlapVerts(OBB obb, MeshTransform meshTransform, List<Vector3> verts);
		public bool OverlapModelVerts(OBB modelOBB, List<Vector3> verts);
		public MeshRayHit RaycastClosest(Ray ray, Matrix4x4 meshTransform);
		public void DebugDraw();
	}
}
