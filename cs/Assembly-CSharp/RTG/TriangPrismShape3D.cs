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
	public class TriangPrismShape3D : Shape3D
	{
		// Fields
		private Vector3 _baseCenter;
		private float _width;
		private float _height;
		private float _depth;
		private Quaternion _rotation;
		private PrismEpsilon _epsilon;
	
		// Properties
		public Vector3 BaseCenter { get; set; }
		public Vector3 TopCenter { get; set; }
		public Vector3 FrontCenter { get; set; }
		public Vector3 Center { get; set; }
		public Vector3 MidTip { get; set; }
		public float Width { get; set; }
		public float Height { get; set; }
		public float Depth { get; set; }
		public PrismEpsilon Epsilon { get; set; }
		public float PtContainEps { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 CentralAxis { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelBaseCenter { get; }
	
		// Constructors
		public TriangPrismShape3D();
	
		// Methods
		public void AlignWidth(Vector3 axis);
		public void AlignHeight(Vector3 axis);
		public void AlignDepth(Vector3 axis);
		public override void RenderSolid();
		public override void RenderWire();
		public void MakeEquilateral(float sideLength);
		public override bool Raycast(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point);
		public override AABB GetAABB();
	}
}
