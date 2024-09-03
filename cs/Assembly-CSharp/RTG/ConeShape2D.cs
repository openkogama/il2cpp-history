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
	public class ConeShape2D : Shape2D
	{
		// Fields
		private Vector2 _baseCenter;
		private float _rotationDegrees;
		private float _baseRadius;
		private float _height;
	
		// Properties
		public Vector2 BaseCenter { get; set; }
		public Vector2 BaseLeft { get; set; }
		public Vector2 BaseRight { get; set; }
		public Vector2 Tip { get; set; }
		public float BaseRadius { get; set; }
		public float Height { get; set; }
		public float RotationDegrees { get; set; }
		public Quaternion Rotation { get; }
		public Vector2 CentralAxis { get; }
		public Vector2 Right { get; }
		public Vector2 Up { get; }
		public static Vector2 ModelRight { get; }
		public static Vector2 ModelUp { get; }
		public static Vector2 ModelBaseCenter { get; }
	
		// Constructors
		public ConeShape2D();
	
		// Methods
		public override void RenderArea(Camera camera);
		public override void RenderBorder(Camera camera);
		public override bool ContainsPoint(Vector2 point);
		public override Rect GetEncapsulatingRect();
	}
}
