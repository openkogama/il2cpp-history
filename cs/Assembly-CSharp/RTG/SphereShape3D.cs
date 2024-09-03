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
	public class SphereShape3D : Shape3D
	{
		// Fields
		private float _radius;
		private Vector3 _center;
		private Quaternion _rotation;
		private SphereEpsilon _epsilon;
		private WireRenderDescriptor _wireRenderDesc;
	
		// Properties
		public float Radius { get; set; }
		public float WireRadius { get; }
		public Vector3 Center { get; set; }
		public Quaternion Rotation { get; set; }
		public SphereEpsilon Epsilon { get; set; }
		public float RadiusEps { get; set; }
		public WireRenderDescriptor WireRenderDesc { get; }
		public Vector3 CentralAxis { get; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCenter { get; }
	
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
			private int _numDetailSliceRings;
			private float _radiusAdd;
	
			// Properties
			public WireRenderMode WireMode { get; set; }
			public int NumDetailAxialRings { get; set; }
			public int NumDetailSliceRings { get; set; }
			public float RadiusAdd { get; set; }
	
			// Constructors
			public WireRenderDescriptor();
		}
	
		// Constructors
		public SphereShape3D();
	
		// Methods
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point);
		public override AABB GetAABB();
	}
}
