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
	public class BoxShape3D : Shape3D
	{
		// Fields
		private WireRenderDescriptor _wireRenderDesc;
		private Vector3 _size;
		private Vector3 _center;
		private Quaternion _rotation;
		private BoxEpsilon _epsilon;
	
		// Properties
		public Vector3 Size { get; set; }
		public float Width { get; set; }
		public float Height { get; set; }
		public float Depth { get; set; }
		public Vector3 Extents { get; }
		public Vector3 Center { get; set; }
		public BoxEpsilon Epsilon { get; set; }
		public Vector3 SizeEps { get; set; }
		public float WidthEps { get; set; }
		public float HeightEps { get; set; }
		public float DepthEps { get; set; }
		public Vector3 Min { get; set; }
		public Vector3 Max { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public WireRenderDescriptor WireRenderDesc { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCenter { get; }
	
		// Nested types
		public enum WireRenderMode
		{
			Wire = 0,
			WireCorners = 1
		}
	
		public class WireRenderDescriptor
		{
			// Fields
			private float _cornerLinePercentage;
			private WireRenderMode _wireMode;
	
			// Properties
			public WireRenderMode WireMode { get; set; }
			public float CornerLinePercentage { get; set; }
	
			// Constructors
			public WireRenderDescriptor();
		}
	
		// Constructors
		public BoxShape3D();
	
		// Methods
		public void FromOBB(OBB obb);
		public float GetSizeAlongDirection(Vector3 direction);
		public void AlignWidth(Vector3 axis);
		public void AlignHeight(Vector3 axis);
		public void AlignDepth(Vector3 axis);
		public Vector3 GetFaceCenter(BoxFace boxFace);
		public void SetFaceCenter(BoxFace boxFace, Vector3 newCenter);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public override AABB GetAABB();
		public OBB GetOBB();
		public bool ContainsPoint(Vector3 point);
	}
}
