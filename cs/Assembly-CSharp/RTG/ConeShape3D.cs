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
	public class ConeShape3D : Shape3D
	{
		// Fields
		private WireRenderDescriptor _wireRenderDesc;
		private Vector3 _baseCenter;
		private Quaternion _rotation;
		private float _baseRadius;
		private float _height;
		private ConeEpsilon _epsilon;
	
		// Properties
		public Vector3 BaseCenter { get; set; }
		public Vector3 Tip { get; set; }
		public float BaseRadius { get; set; }
		public float Height { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 CentralAxis { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public ConeEpsilon Epsilon { get; set; }
		public float HrzEps { get; set; }
		public float VertEps { get; set; }
		public WireRenderDescriptor WireRenderDesc { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelBaseCenter { get; }
	
		// Nested types
		public enum WireRenderMode
		{
			Basic = 0,
			Detailed = 1
		}
	
		public class WireRenderDescriptor
		{
			// Fields
			private WireRenderMode _wireMode;
			private int _numDetailAxialRings;
			private int _numDetailAxialSegments;
	
			// Properties
			public WireRenderMode WireMode { get; set; }
			public int NumDetailAxialRings { get; set; }
			public int NumDetailAxialSegments { get; set; }
	
			// Constructors
			public WireRenderDescriptor();
		}
	
		// Constructors
		public ConeShape3D();
	
		// Methods
		public void AlignTip(Vector3 axis);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point);
		public List<Vector3> GetBaseExtents();
		public override AABB GetAABB();
	}
}
