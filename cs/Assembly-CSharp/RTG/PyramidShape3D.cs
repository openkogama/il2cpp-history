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
	public class PyramidShape3D : Shape3D
	{
		// Fields
		private Vector3 _baseCenter;
		private float _baseWidth;
		private float _baseDepth;
		private float _height;
		private Quaternion _rotation;
		private PyramidEpsilon _epsilon;
	
		// Properties
		public Vector3 BaseCenter { get; set; }
		public Vector3 Tip { get; set; }
		public Quaternion Rotation { get; set; }
		public float BaseWidth { get; set; }
		public float BaseDepth { get; set; }
		public float Height { get; set; }
		public PyramidEpsilon Epsilon { get; set; }
		public float PtContainEps { get; set; }
		public Vector3 CentralAxis { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelBaseCenter { get; }
	
		// Constructors
		public PyramidShape3D();
	
		// Methods
		public void PointTipAlongAxis(Vector3 axis);
		public override void RenderSolid();
		public override void RenderWire();
		public List<Vector3> GetBaseCornerPoints();
		public override AABB GetAABB();
		public override bool Raycast(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point);
	}
}
