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
	public class ObjectSurfaceSnap
	{
		// Nested types
		public enum Type
		{
			UnityTerrain = 0,
			Mesh = 1,
			TerrainMesh = 2,
			SphericalMesh = 3,
			SceneGrid = 4
		}
	
		public struct SnapConfig
		{
			// Fields
			public bool AlignAxis;
			public TransformAxis AlignmentAxis;
			public RTG.ObjectSurfaceSnap.Type SurfaceType;
			public float OffsetFromSurface;
			public Vector3 SurfaceHitPoint;
			public Vector3 SurfaceHitNormal;
			public Plane SurfaceHitPlane;
			public GameObject SurfaceObject;
	
			// Methods
			public bool IsSurfaceMesh();
		}
	
		public struct SnapResult
		{
			// Fields
			public bool Success;
			public Plane SittingPlane;
			public Vector3 SittingPoint;
	
			// Constructors
			public SnapResult(Plane sittingPlane, Vector3 sittingPoint);
		}
	
		private abstract class SurfaceRaycaster
		{
			// Fields
			protected GameObject _surfaceObject;
			protected bool _raycastReverse;
	
			// Constructors
			public SurfaceRaycaster(GameObject surfaceObject, bool raycastReverse);
	
			// Methods
			public abstract GameObjectRayHit Raycast(Ray ray);
		}
	
		private class MeshSurfaceRaycaster : SurfaceRaycaster
		{
			// Constructors
			public MeshSurfaceRaycaster(GameObject surfaceObject, bool raycastReverse);
	
			// Methods
			public override GameObjectRayHit Raycast(Ray ray);
		}
	
		private class TerrainSurfaceRaycaster : SurfaceRaycaster
		{
			// Fields
			private TerrainCollider _terrainCollider;
	
			// Constructors
			public TerrainSurfaceRaycaster(GameObject surfaceObject, bool raycastReverse);
	
			// Methods
			public override GameObjectRayHit Raycast(Ray ray);
		}
	
		// Constructors
		public ObjectSurfaceSnap();
	
		// Methods
		public static SnapResult SnapHierarchy(GameObject root, SnapConfig snapConfig);
		public static Vector3 CalculateSitOnSurfaceOffset(OBB obb, Plane surfacePlane, float offsetFromSurface);
		public static Vector3 CalculateSitOnSurfaceOffset(AABB aabb, Plane surfacePlane, float offsetFromSurface);
		public static Vector3 CalculateEmbedVector(List<Vector3> embedPoints, GameObject embedSurface, Vector3 embedDirection, Type surfaceType);
		private static SurfaceRaycaster CreateSurfaceRaycaster(Type surfaceType, GameObject surfaceObject, bool raycastReverse);
	}
}
