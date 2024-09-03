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
	public static class PolygonMath
	{
		// Methods
		public static bool Raycast(Ray ray, out float t, List<Vector3> cwPolyPoints, bool isClosed, Vector3 polyNormal, PolygonEpsilon epsilon = default);
		public static bool Contains3DPoint(Vector3 point, bool checkOnPlane, List<Vector3> cwPolyPoints, bool isClosed, Vector3 polyNormal, PolygonEpsilon epsilon = default);
		public static bool Contains2DPoint(Vector2 point, List<Vector2> polyPoints, bool isClosed, PolygonEpsilon epsilon = default);
		public static bool Is3DPointOnBorder(Vector3 point, bool checkOnPlane, List<Vector3> cwPolyPoints, bool isClosed, Vector3 polyNormal, PolygonEpsilon epsilon = default);
		public static bool Is2DPointOnBorder(Vector2 point, List<Vector2> polyPoints, bool isClosed, PolygonEpsilon epsilon = default);
		public static bool Is2DPointOnThickBorder(Vector2 point, List<Vector2> polyPoints, List<Vector2> thickBorderPoints, bool isClosed, PolygonEpsilon epsilon = default);
	}
}
