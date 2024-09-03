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
	public class QuadShape2D : Shape2D
	{
		// Fields
		private Vector2 _center;
		private Vector2 _size;
		private float _rotationDegrees;
		private QuadEpsilon _epsilon;
		private Shape2DPtContainMode _ptContainMode;
	
		// Properties
		public float RotationDegrees { get; set; }
		public Quaternion Rotation { get; }
		public Vector2 Center { get; set; }
		public Vector2 Size { get; set; }
		public Vector2 Extents { get; }
		public float Width { get; set; }
		public float Height { get; set; }
		public QuadEpsilon Epsilon { get; set; }
		public Shape2DPtContainMode PtContainMode { get; set; }
		public Vector2 SizeEps { get; set; }
		public float WidthEps { get; set; }
		public float HeightEps { get; set; }
		public float WireEps { get; set; }
		public Vector2 Right { get; }
		public Vector2 Up { get; }
		public static Vector2 ModelRight { get; }
		public static Vector2 ModelUp { get; }
		public static Vector2 ModelCenter { get; }
	
		// Constructors
		public QuadShape2D();
	
		// Methods
		public Vector2 GetExtentPoint(Shape2DExtentPoint extentPt);
		public void AlignWidth(Vector2 axis);
		public float GetSizeAlongDirection(Vector2 direction);
		public override void RenderArea(Camera camera);
		public override void RenderBorder(Camera camera);
		public override bool ContainsPoint(Vector2 point);
		public override Rect GetEncapsulatingRect();
	}
}
