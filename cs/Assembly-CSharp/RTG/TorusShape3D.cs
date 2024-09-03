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
	public class TorusShape3D : Shape3D
	{
		// Fields
		private float _coreRadius;
		private float _tubeRadius;
		private Vector3 _center;
		private Quaternion _rotation;
		private TorusEpsilon _epsilon;
		private WireRenderDescriptor _wireRenderDesc;
	
		// Properties
		public float CoreRadius { get; set; }
		public float TubeRadius { get; set; }
		public Vector3 Center { get; set; }
		public Quaternion Rotation { get; set; }
		public Vector3 Right { get; }
		public Vector3 Up { get; }
		public Vector3 Look { get; }
		public TorusEpsilon Epsilon { get; set; }
		public float TubeRadiusEps { get; set; }
		public WireRenderDescriptor WireRenderDesc { get; }
		public static Vector3 ModelRight { get; }
		public static Vector3 ModelUp { get; }
		public static Vector3 ModelLook { get; }
		public static Vector3 ModelCenter { get; }
	
		// Nested types
		public enum WireRenderFlags
		{
			None = 0,
			TubeSlices = 1,
			AxialSlices = 2,
			All = 3
		}
	
		public class WireRenderDescriptor
		{
			// Fields
			private WireRenderFlags _wireFlags;
			private int _numTubeSlices;
			private int _numAxialSlices;
	
			// Properties
			public int NumTubeSlices { get; set; }
			public int NumAxialSlices { get; set; }
			public WireRenderFlags WireFlags { get; set; }
	
			// Constructors
			public WireRenderDescriptor();
		}
	
		// Constructors
		public TorusShape3D();
	
		// Methods
		public override bool Raycast(Ray ray, out float t);
		public override void RenderSolid();
		public override void RenderWire();
		public List<Vector3> GetHrzExtents();
		public override AABB GetAABB();
	}
}
