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
	public class RightAngTriangle3D : Shape3D
	{
		// Fields
		private Vector3 _rightAngleCorner;
		private float _XLength;
		private float _YLength;
		private AxisSign _XLengthSign;
		private AxisSign _YLengthSign;
		private Quaternion _rotation;
		private TriangleEpsilon _epsilon;
		private Shape3DRaycastMode _raycastMode;
	
		// Properties
		public Vector3 RightAngleCorner { get; set; }
		public float XLength { get; set; }
		public float YLength { get; set; }
		public float RealXLength { get; }
		public float RealYLength { get; }
		public AxisSign XLengthSign { get; set; }
		public AxisSign YLengthSign { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public Vector3 Normal { get; }
		public Plane Plane { get; }
		public TriangleEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public float ExtrudeEps { get; set; }
		public float WireEps { get; set; }
		public Shape3DRaycastMode RaycastMode { get; set; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelRightAngleCorner { get; }
		public static Vector3 ModelNormal { get; }
	
		// Constructors
		public RightAngTriangle3D();
	
		// Methods
		public void AlignNormal(Vector3 axis);
		public void AlignRight(Vector3 axis);
		public void AlignUp(Vector3 axis);
		public override bool Raycast(Ray ray, out float t);
		public override bool RaycastWire(Ray ray, out float t);
		public override void RenderSolid();
		public override void RenderWire();
		public List<Vector3> GetPoints();
		public override AABB GetAABB();
		public bool ContainsPoint(Vector3 point, bool checkOnPlane);
	}
}
