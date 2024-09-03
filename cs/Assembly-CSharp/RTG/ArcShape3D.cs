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
	public class ArcShape3D : Shape3D
	{
		// Fields
		private WireRenderDescriptor _wireRenderDesc;
		private Vector3 _startPoint;
		private Vector3 _endPoint;
		private Vector3 _origin;
		private Plane _plane;
		private float _radius;
		private AABB _aabb;
		private float _degreeAngleFromStart;
		private bool _forceShortestArc;
		private List<Vector3> _borderPoints;
		private int _numBorderPoints;
		private bool _areBorderPointsDirty;
		private ArcEpsilon _epsilon;
		private Shape3DRaycastMode _raycastMode;
	
		// Properties
		public float Radius { get; set; }
		public bool ForceShortestArc { get; set; }
		public float DegreeAngleFromStart { get; set; }
		public float AbsDegreeAngleFromStart { get; }
		public int NumBorderPoints { get; set; }
		public Vector3 Origin { get; set; }
		public Vector3 StartPoint { get; }
		public Vector3 EndPoint { get; }
		public Plane Plane { get; }
		public Vector3 Normal { get; }
		public ArcEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public float ExtrudeEps { get; set; }
		public float WireEps { get; set; }
		public WireRenderDescriptor WireRenderDesc { get; }
		public Shape3DRaycastMode RaycastMode { get; set; }
	
		// Nested types
		public enum WireRenderFlags
		{
			None = 0,
			ExtremitiesBorder = 1,
			ArcBorder = 2,
			All = 3
		}
	
		public class WireRenderDescriptor
		{
			// Fields
			private WireRenderFlags _wireFlags;
	
			// Properties
			public WireRenderFlags WireFlags { get; set; }
	
			// Constructors
			public WireRenderDescriptor();
		}
	
		// Constructors
		public ArcShape3D();
	
		// Methods
		public override void RenderSolid();
		public override void RenderWire();
		public void SetArcData(Plane plane, Vector3 origin, Vector3 startPoint, float radius);
		public override bool Raycast(Ray ray, out float t);
		public override bool RaycastWire(Ray ray, out float t);
		public bool ContainsPoint(Vector3 point, bool checkOnPlane);
		public override AABB GetAABB();
		private void OnBorderPointsFoundDirty();
		private void CalculateEndPoint();
	}
}
