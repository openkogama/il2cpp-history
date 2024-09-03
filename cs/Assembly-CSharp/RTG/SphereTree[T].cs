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
	public class SphereTree<T>
	{
		// Fields
		private SphereTreeNode<T> _root;
	
		// Constructors
		public SphereTree();
	
		// Methods
		public void DebugDraw();
		public SphereTreeNode<T> AddNode(T nodeData, Sphere sphere);
		public void RemoveNode(SphereTreeNode<T> node);
		public void OnNodeSphereUpdated(SphereTreeNode<T> node);
		public bool RaycastAll(Ray ray, List<SphereTreeNodeRayHit<T>> hits);
		public bool OverlapBox(OBB box, List<SphereTreeNode<T>> nodes);
		private void InsertNode(SphereTreeNode<T> node);
	}
}
