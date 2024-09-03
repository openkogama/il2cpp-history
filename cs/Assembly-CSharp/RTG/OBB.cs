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
	public struct OBB
	{
		// Fields
		private Vector3 _size;
		private Vector3 _center;
		private Quaternion _rotation;
		private bool _isValid;
	
		// Properties
		public bool IsValid { get; }
		public Vector3 Center { get; set; }
		public Vector3 Size { get; set; }
		public Vector3 Extents { get; }
		public Quaternion Rotation { get; set; }
		public Matrix4x4 RotationMatrix { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
	
		// Constructors
		public OBB(Vector3 center, Vector3 size);
		public OBB(Vector3 center, Vector3 size, Quaternion rotation);
		public OBB(Vector3 center, Quaternion rotation);
		public OBB(Quaternion rotation);
		public OBB(Bounds bounds, Quaternion rotation);
		public OBB(AABB aabb);
		public OBB(AABB aabb, Quaternion rotation);
		public OBB(AABB modelSpaceAABB, Transform worldTransform);
		public OBB(OBB copy);
	
		// Methods
		public static OBB GetInvalid();
		public void Inflate(float amount);
		public Matrix4x4 GetUnitBoxTransform();
		public List<Vector3> GetCornerPoints();
		public List<Vector3> GetCenterAndCornerPoints();
		public void Encapsulate(OBB otherOBB);
		public Vector3 GetPointFaceNormal(Vector3 pointOnFace);
		public bool IntersectsOBB(OBB otherOBB);
		public Vector3 GetClosestPoint(Vector3 point);
		public bool IntersectsSphere(Sphere sphere);
	}
}
