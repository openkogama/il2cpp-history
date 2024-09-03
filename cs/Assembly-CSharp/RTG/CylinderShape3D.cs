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
	public class CylinderShape3D : Shape3D
	{
		// Fields
		private Vector3 _baseCenter;
		private float _radius;
		private float _height;
		private Quaternion _rotation;
		private CylinderEpsilon _epsilon;
	
		// Properties
		public Vector3 BaseCenter { get; set; }
		public Vector3 TopCenter { get; set; }
		public Vector3 Center { get; set; }
		public float Radius { get; set; }
		public float Height { get; set; }
		public Quaternion Rotation { get; set; }
		public CylinderEpsilon Epsilon { get; set; }
		public float RadiusEps { get; set; }
		public float VertEps { get; set; }
		public Vector3 CentralAxis { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelBaseCenter { get; }
	
		// Constructors
		public CylinderShape3D();
	
		// Methods
		public void AlignCentralAxis(Vector3 axis);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point);
		public List<Vector3> GetBottomCapExtentPoints();
		public List<Vector3> GetTopCapExtentPoints();
		public AABB GetModelAABB();
		public override AABB GetAABB();
	}
}
