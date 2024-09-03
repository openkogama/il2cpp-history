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
	public class MeshRayHit
	{
		// Fields
		private int _hitTriangleIndex;
		private Vector3 _hitPoint;
		private float _hitEnter;
		private Vector3 _hitNormal;
	
		// Properties
		public int HitTriangleIndex { get; }
		public Vector3 HitPoint { get; }
		public float HitEnter { get; }
		public Vector3 HitNormal { get; }
	
		// Constructors
		public MeshRayHit(Ray ray, int hitTriangleIndex, float hitEnter, Vector3 hitNormal);
	}
}
