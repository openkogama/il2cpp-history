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
	public struct Sphere
	{
		// Fields
		private Vector3 _center;
		private float _radius;
	
		// Properties
		public Vector3 Center { get; set; }
		public float Radius { get; set; }
	
		// Constructors
		public Sphere(Vector3 center, float radius);
		public Sphere(AABB aabb);
		public Sphere(IEnumerable<Vector3> pointCloud);
	
		// Methods
		public bool ContainsPoint(Vector3 point);
		public List<Vector3> GetRightUpExtents(Vector3 right, Vector3 up);
		public void Encapsulate(Sphere sphere);
	}
}
