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
	public static class SegmentMath
	{
		// Methods
		public static bool Raycast(Ray ray, out float t, Vector3 startPoint, Vector3 endPoint, SegmentEpsilon epsilon = default);
		public static bool Is3DPointOnSegment(Vector3 point, Vector3 startPoint, Vector3 endPoint, SegmentEpsilon epsilon = default);
		public static bool Is2DPointOnSegment(Vector2 point, Vector2 startPoint, Vector2 endPoint, SegmentEpsilon epsilon = default);
		public static Vector3 ProjectPtOnSegment(Vector3 point, Vector3 startPoint, Vector3 endPoint);
	}
}
