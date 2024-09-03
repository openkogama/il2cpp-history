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
	public class RightAngTriangle2D : Shape2D
	{
		// Fields
		private Vector2 _rightAngleCorner;
		private float _XLength;
		private float _YLength;
		private float _rotationDegrees;
		private TriangleEpsilon _epsilon;
	
		// Properties
		public Vector2 RightAngleCorner { get; set; }
		public float XLength { get; set; }
		public float YLength { get; set; }
		public float RotationDegrees { get; set; }
		public Vector2 Right { get; }
		public Vector2 Up { get; }
		public TriangleEpsilon Epsilon { get; set; }
		public float AreaEps { get; set; }
		public static Vector2 ModelRight { get; }
		public static Vector2 ModelUp { get; }
		public static Vector2 ModelRightAngleCorner { get; }
	
		// Constructors
		public RightAngTriangle2D();
	
		// Methods
		public override void RenderArea(Camera camera);
		public override void RenderBorder(Camera camera);
		public List<Vector2> GetPoints();
		public override bool ContainsPoint(Vector2 point);
		public override Rect GetEncapsulatingRect();
	}
}
