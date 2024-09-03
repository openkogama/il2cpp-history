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
	public class QuadShape3D : Shape3D
	{
		// Fields
		private Shape3DRaycastMode _raycastMode;
		private Vector3 _center;
		private Vector2 _size;
		private Quaternion _rotation;
		private QuadEpsilon _epsilon;
		private WireRenderDescriptor _wireRenderDesc;
	
		// Properties
		public Vector3 Center { get; set; }
		public Vector2 Size { get; set; }
		public float Width { get; set; }
		public float Height { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public Vector3 Normal { get; }
		public QuadEpsilon Epsilon { get; set; }
		public Vector2 SizeEps { get; set; }
		public float WidthEps { get; set; }
		public float HeightEps { get; set; }
		public float ExtrudeEps { get; set; }
		public float WireEps { get; set; }
		public Shape3DRaycastMode RaycastMode { get; set; }
		public WireRenderDescriptor WireRenderDesc { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCenter { get; }
		public static Vector3 ModelNormal { get; }
	
		// Nested types
		[Flags]
		public enum WireEdgeFlags
		{
			None = 0,
			Top = 1,
			Right = 2,
			Bottom = 4,
			Left = 8,
			All = 15
		}
	
		public class WireRenderDescriptor
		{
			// Fields
			private WireEdgeFlags _wireEdgeFlags;
	
			// Properties
			public WireEdgeFlags WireEdgeFlags { get; set; }
	
			// Constructors
			public WireRenderDescriptor();
		}
	
		// Constructors
		public QuadShape3D();
	
		// Methods
		public void AlignNormal(Vector3 axis);
		public void AlignRight(Vector3 axis);
		public void AlignUp(Vector3 axis);
		public List<Vector3> GetCornerPoints();
		public Vector3 GetCornerPosition(QuadCorner quadCorner);
		public void SetCornerPointPosition(QuadCorner quadCorner, Vector3 position);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public override bool RaycastWire(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point, bool checkOnPlane);
		public List<Vector3> GetCorners();
		public override AABB GetAABB();
	}
}
