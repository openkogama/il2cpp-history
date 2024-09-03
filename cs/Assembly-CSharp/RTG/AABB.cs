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
	public struct AABB
	{
		// Fields
		private Vector3 _size;
		private Vector3 _center;
		private bool _isValid;
	
		// Properties
		public bool IsValid { get; }
		public Vector3 Center { get; set; }
		public Vector3 Size { get; set; }
		public Vector3 Extents { get; }
		public Vector3 Min { get; set; }
		public Vector3 Max { get; set; }
	
		// Constructors
		public AABB(Vector3 center, Vector3 size);
		public AABB(Bounds bounds);
		public AABB(IEnumerable<Vector3> pointCloud);
		public AABB(IEnumerable<Vector2> pointCloud);
	
		// Methods
		public static AABB GetInvalid();
		public void Inflate(float amount);
		public void Inflate(Vector3 amount);
		public void Encapsulate(Vector3 point);
		public void Encapsulate(IEnumerable<Vector3> points);
		public void Encapsulate(AABB aabb);
		public void Transform(Matrix4x4 transformMatrix);
		public bool ContainsPoint(Vector3 point);
		public List<Vector3> GetCornerPoints();
		public List<Vector3> GetCenterAndCornerPoints();
		public List<Vector2> GetScreenCornerPoints(Camera camera);
		public List<Vector2> GetScreenCenterAndCornerPoints(Camera camera);
		public Rect GetScreenRectangle(Camera camera);
		public Matrix4x4 GetUnitBoxTransform();
		public Bounds ToBounds();
		private void RecalculateCenterAndSize(Vector3 min, Vector3 max);
	}
}
