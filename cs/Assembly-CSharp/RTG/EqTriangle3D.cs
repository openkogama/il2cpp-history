/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class EqTriangle3D : Shape3D
	{
		// Fields
		private float _sideLength;
		private Quaternion _rotation;
		private TriangleEpsilon _epsilon;
		private Vector3[] _points;
		private Vector3 _centroid;
		private bool _arePointsDirty;
	
		// Properties
		public float SideLength { get; set; }
		public Vector3 Centroid { get; set; }
		public float Altitude { get; }
		public float CentroidAltitude { get; }
		public Quaternion Rotation { get; set; }
		public TriangleEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public float ExtrudeEps { get; set; }
		public float WireEps { get; set; }
		public Vector3 Normal { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCentroid { get; }
	
		// Constructors
		public EqTriangle3D();
	
		// Methods
		public void AlignNormal(Vector3 axis);
		public void AlignRight(Vector3 axis);
		public void AlignUp(Vector3 axis);
		public Vector3 GetPoint(EqTrianglePoint point);
		public void SetPoint(EqTrianglePoint point, Vector3 pointValue);
		public Vector3 GetEdgeMidPoint(EqTriangleEdge edge);
		public Vector3 GetEdge(EqTriangleEdge edge);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public override bool RaycastWire(Ray ray, out float t);
		public override AABB GetAABB();
		private void OnPointsFoundDirty();
	}
}
