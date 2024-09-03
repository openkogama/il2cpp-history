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
	public static class QuadMath
	{
		// Methods
		public static void Calc2DQuadRightUp(float degreeRotation, out Vector2 right, out Vector2 up);
		public static List<Vector2> Calc2DQuadCornerPoints(Vector2 quadCenter, Vector2 quadSize, float degreeRotation);
		public static List<Vector2> Calc2DQuadCornerPoints(Vector2 quadCenter, Vector2 quadSize, Vector2 right, Vector2 up);
		public static List<Vector3> Calc3DQuadCornerPoints(Vector3 quadCenter, Vector2 quadSize, Quaternion quadRotation);
		public static Vector3 Calc3DQuadCorner(Vector3 quadCenter, Vector2 quadSize, Quaternion quadRotation, QuadCorner quadCorner);
		public static OBB Calc3DQuadOBB(Vector3 quadCenter, Vector2 quadSize, Quaternion quadRotation, QuadEpsilon epsilon = default);
		public static bool Raycast(Ray ray, out float t, Vector3 quadCenter, float quadWidth, float quadHeight, Vector3 quadRight, Vector3 quadUp, QuadEpsilon epsilon = default);
		public static bool RaycastWire(Ray ray, out float t, Vector3 quadCenter, float quadWidth, float quadHeight, Vector3 quadRight, Vector3 quadUp, QuadEpsilon epsilon = default);
		public static bool Contains3DPoint(Vector3 point, bool checkOnPlane, Vector3 quadCenter, float quadWidth, float quadHeight, Vector3 quadRight, Vector3 quadUp, QuadEpsilon epsilon = default);
		public static bool Contains2DPoint(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, float degreeRotation, QuadEpsilon epsilon = default);
		public static bool Contains2DPoint(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, Vector2 quadRight, Vector2 quadUp, QuadEpsilon epsilon = default);
		public static bool Is2DPointOnBorder(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, float degreeRotation, QuadEpsilon epsilon = default);
		public static bool Is2DPointOnBorder(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, Vector2 quadRight, Vector2 quadUp, QuadEpsilon epsilon = default);
	}
}
