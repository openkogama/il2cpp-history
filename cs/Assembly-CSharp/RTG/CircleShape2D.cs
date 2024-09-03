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
	public class CircleShape2D : Shape2D
	{
		// Fields
		private Vector2 _center;
		private float _radius;
		private float _rotationDegrees;
		private int _numBorderPoints;
		private List<Vector2> _modelBorderPoints;
		private bool _areModelBorderPointsDirty;
		private CircleEpsilon _epsilon;
		private Shape2DPtContainMode _ptContainMode;
	
		// Properties
		public Vector2 Center { get; set; }
		public float Radius { get; set; }
		public float RotationDegrees { get; set; }
		public Vector2 Right { get; }
		public Vector2 Up { get; }
		public CircleEpsilon Epsilon { get; set; }
		public float RadiusEps { get; set; }
		public float WireEps { get; set; }
		public int NumBorderPoints { get; set; }
		public Shape2DPtContainMode PtContainMode { get; set; }
		public static Vector2 ModelRight { get; }
		public static Vector2 ModelUp { get; }
		public static Vector2 ModelCenter { get; }
	
		// Constructors
		public CircleShape2D();
	
		// Methods
		public Vector2 GetExtentPoint(Shape2DExtentPoint extentPt);
		public override void RenderBorder(Camera camera);
		public override void RenderArea(Camera camera);
		public override bool ContainsPoint(Vector2 point);
		public List<Vector2> GetExtentPoints();
		public override Rect GetEncapsulatingRect();
		private void CalcModelBorderPoints();
	}
}
