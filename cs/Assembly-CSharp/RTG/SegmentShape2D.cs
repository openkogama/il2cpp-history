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
	public class SegmentShape2D : Shape2D
	{
		// Fields
		private Vector2 _startPoint;
		private Vector2 _endPoint;
		private Vector2 _direction;
		private float _length;
		private SegmentEpsilon _epsilon;
	
		// Properties
		public float Length { get; set; }
		public Vector2 StartPoint { get; set; }
		public Vector2 EndPoint { get; set; }
		public Vector2 Direction { get; set; }
		public SegmentEpsilon Epsilon { get; set; }
		public float RaycastEps { get; set; }
		public float PtOnSegmentEps { get; set; }
	
		// Constructors
		public SegmentShape2D();
	
		// Methods
		public void SetEndPtFromStart(Vector2 dirDromStart, float offset);
		public override void RenderBorder(Camera camera);
		public override void RenderArea(Camera camera);
		public override bool ContainsPoint(Vector2 point);
		public override Rect GetEncapsulatingRect();
	}
}
