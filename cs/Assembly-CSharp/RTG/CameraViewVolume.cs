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
	public class CameraViewVolume
	{
		// Fields
		private const int _numWorldPoints = 8;
		private const int _numWorldPlanes = 6;
		private Vector3[] _worldPoints;
		private Plane[] _worldPlanes;
		private Vector2 _farPlaneSize;
		private Vector2 _nearPlaneSize;
		private AABB _worldAABB;
		private OBB _worldOBB;
	
		// Properties
		public Plane LeftPlane { get; }
		public Plane RightPlane { get; }
		public Plane BottomPlane { get; }
		public Plane TopPlane { get; }
		public Plane NearPlane { get; }
		public Plane FarPlane { get; }
		public Vector3 NearTopLeft { get; }
		public Vector3 NearTopRight { get; }
		public Vector3 NearBottomRight { get; }
		public Vector3 NearBottomLeft { get; }
		public Vector3 FarTopLeft { get; }
		public Vector3 FarTopRight { get; }
		public Vector3 FarBottomRight { get; }
		public Vector3 FarBottomLeft { get; }
		public Vector2 FarPlaneSize { get; }
		public Vector2 NearPlaneSize { get; }
		public AABB WorldAABB { get; }
		public OBB WorldOBB { get; }
	
		// Nested types
		public enum VPoint
		{
			NearTopLeft = 0,
			NearTopRight = 1,
			NearBottomRight = 2,
			NearBottomLeft = 3,
			FarTopLeft = 4,
			FarTopRight = 5,
			FarBottomRight = 6,
			FarBottomLeft = 7
		}
	
		public enum VPlane
		{
			Left = 0,
			Right = 1,
			Bottom = 2,
			Top = 3,
			Near = 4,
			Far = 5
		}
	
		// Constructors
		public CameraViewVolume();
		public CameraViewVolume(Camera camera);
	
		// Methods
		public void FromCamera(Camera camera);
		public List<Vector3> GetNearPlanePoints();
		public static Plane[] GetCameraWorldPlanes(Camera camera);
		public bool CheckAABB(AABB aabb);
		public static bool CheckAABB(Camera camera, AABB aabb);
		public static bool CheckAABB(Camera camera, AABB aabb, Plane[] cameraWorldPlanes);
		private void CalculateWorldPoints(Camera camera);
	}
}
