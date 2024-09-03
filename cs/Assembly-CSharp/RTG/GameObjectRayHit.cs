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
	public class GameObjectRayHit
	{
		// Fields
		private GameObject _hitObject;
		private Vector3 _hitPoint;
		private float _hitEnter;
		private Vector3 _hitNormal;
		private Plane _hitPlane;
		private MeshRayHit _meshRayHit;
	
		// Properties
		public GameObject HitObject { get; }
		public Vector3 HitPoint { get; }
		public float HitEnter { get; }
		public Vector3 HitNormal { get; }
		public Plane HitPlane { get; }
		public MeshRayHit MeshRayHit { get; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Comparison<GameObjectRayHit> __9__18_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal int _SortByHitDistance_b__18_0(GameObjectRayHit h0, GameObjectRayHit h1);
		}
	
		// Constructors
		public GameObjectRayHit(Ray hitRay, RaycastHit hit3D);
		public GameObjectRayHit(Ray hitRay, RaycastHit2D hit2D);
		public GameObjectRayHit(Ray hitRay, GameObject hitObject, Vector3 hitNormal, float hitEnter);
		public GameObjectRayHit(Ray ray, GameObject hitObject, MeshRayHit meshRayHit);
	
		// Methods
		public static void SortByHitDistance(List<GameObjectRayHit> hits);
		public static void Store(Ray hitRay, IEnumerable<RaycastHit2D> hits2D, IEnumerable<RaycastHit> hits3D, List<GameObjectRayHit> hits);
	}
}
