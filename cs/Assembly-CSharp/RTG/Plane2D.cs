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
	public class Plane2D
	{
		// Fields
		private Vector2 _normal;
		private float _distance;
	
		// Properties
		public Vector2 Normal { get; set; }
		public float Distance { get; set; }
	
		// Constructors
		public Plane2D(Vector2 normal, float distance);
		public Plane2D(Vector2 normal, Vector2 pointOnPlane);
	
		// Methods
		public float GetDistanceToPoint(Vector2 point);
		public bool Raycast(Vector2 rayOrigin, Vector2 rayDir, out float t);
	}
}
