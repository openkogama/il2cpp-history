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
	public class SegmentShape3D : Shape3D
	{
		// Fields
		private Vector3 _startPoint;
		private Vector3 _endPoint;
		private Vector3 _direction;
		private float _length;
		private SegmentEpsilon _epsilon;
	
		// Properties
		public float Length { get; set; }
		public Vector3 StartPoint { get; set; }
		public Vector3 EndPoint { get; set; }
		public Vector3 Direction { get; set; }
		public SegmentEpsilon Epsilon { get; set; }
		public float RaycastEps { get; set; }
		public float PtOnSegmentEps { get; set; }
	
		// Constructors
		public SegmentShape3D();
	
		// Methods
		public void SetEndPtFromStart(Vector3 dirDromStart, float offset);
		public override void RenderSolid();
		public override void RenderWire();
		public override bool Raycast(Ray ray, out float t);
		public override AABB GetAABB();
	}
}
