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
	public class EqTriangle2D : Shape2D
	{
		// Fields
		private float _sideLength;
		private float _rotationDegrees;
		private TriangleEpsilon _epsilon;
		private Vector2[] _points;
		private Vector2 _centroid;
		private bool _arePointsDirty;
	
		// Properties
		public float SideLength { get; set; }
		public Vector2 Centroid { get; set; }
		public float Altitude { get; }
		public float CentroidAltitude { get; }
		public float RotationDegrees { get; set; }
		public Quaternion Rotation { get; }
		public TriangleEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public Vector2 Right { get; }
		public Vector2 Up { get; }
		public static Vector2 ModelRight { get; }
		public static Vector2 ModelUp { get; }
		public static Vector2 ModelCentroid { get; }
	
		// Constructors
		public EqTriangle2D();
	
		// Methods
		public Vector2 GetPoint(EqTrianglePoint point);
		public void SetPoint(EqTrianglePoint point, Vector2 pointValue);
		public Vector2 GetEdgeMidPoint(EqTriangleEdge edge);
		public Vector2 GetEdge(EqTriangleEdge edge);
		public override void RenderArea(Camera camera);
		public override void RenderBorder(Camera camera);
		public override bool ContainsPoint(Vector2 point);
		public override Rect GetEncapsulatingRect();
		private void OnPointsFoundDirty();
	}
}
