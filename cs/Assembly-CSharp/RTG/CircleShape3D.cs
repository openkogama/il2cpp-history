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
	public class CircleShape3D : Shape3D
	{
		// Fields
		private Vector3 _center;
		private float _radius;
		private Quaternion _rotation;
		private CircleEpsilon _epsilon;
		private Shape3DRaycastMode _raycastMode;
	
		// Properties
		public Vector3 Center { get; set; }
		public float Radius { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public Vector3 Normal { get; }
		public CircleEpsilon Epsilon { get; set; }
		public float RadiusEps { get; set; }
		public float ExtrudeEps { get; set; }
		public float WireEps { get; set; }
		public Shape3DRaycastMode RaycastMode { get; set; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCenter { get; }
		public static Vector3 ModelNormal { get; }
	
		// Constructors
		public CircleShape3D();
	
		// Methods
		public void AlignNormal(Vector3 axis);
		public void AlignRight(Vector3 axis);
		public void AlignUp(Vector3 axis);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public override bool RaycastWire(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point, bool checkOnPlane);
		public List<Vector3> GetExtentPoints();
		public override AABB GetAABB();
	}
}
