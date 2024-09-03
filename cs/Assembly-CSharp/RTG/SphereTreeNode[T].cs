/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class SphereTreeNode<T>
	{
		// Fields
		private SphereTreeNode<T> _stackTop;
		private SphereTreeNode<T> _stackPrevious;
		private Sphere _sphere;
		private T _data;
		private SphereTreeNode<T> _parent;
		private SphereTreeNode<T>[] _children;
		private int _numChildren;
	
		// Properties
		public SphereTreeNode<T>[] Children { get; }
		public int NumChildren { get; }
		public bool IsLeaf { get; }
		public Sphere Sphere { get; set; }
		public Vector3 Center { get; set; }
		public float Radius { get; set; }
		public SphereTreeNode<T> Parent { get; }
		public T Data { get; set; }
		public SphereTreeNode<T> StackTop { get; }
	
		// Constructors
		public SphereTreeNode();
		public SphereTreeNode(T data, Sphere sphere);
	
		// Methods
		public void StackPush(SphereTreeNode<T> node);
		public SphereTreeNode<T> StackPop();
		public bool IsOutsideParent();
		public SphereTreeNode<T> ClosestChild(SphereTreeNode<T> node);
		public void SetParent(SphereTreeNode<T> newParent);
		public void EncapsulateChildrenBottomUp();
		public void DebugDraw();
	}
}
