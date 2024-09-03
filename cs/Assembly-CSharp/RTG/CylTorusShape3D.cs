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
	public class CylTorusShape3D : Shape3D
	{
		// Fields
		private float _coreRadius;
		private float _hrzRadius;
		private float _vertRadius;
		private Vector3 _center;
		private Quaternion _rotation;
		private TorusEpsilon _epsilon;
	
		// Properties
		public float CoreRadius { get; set; }
		public float HrzRadius { get; set; }
		public float VertRadius { get; set; }
		public Vector3 Bottom { get; set; }
		public Vector3 Top { get; set; }
		public Vector3 Center { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public TorusEpsilon Epsilon { get; set; }
		public float CylHrzRadiusEps { get; set; }
		public float CylVertRadiusEps { get; set; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCenter { get; }
	
		// Constructors
		public CylTorusShape3D();
	
		// Methods
		public override bool Raycast(Ray ray, out float t);
		public override void RenderSolid();
		public override void RenderWire();
		public List<Vector3> GetHrzExtents();
		public override AABB GetAABB();
	}
}
