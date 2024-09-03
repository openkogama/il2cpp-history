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
	public static class Vector3Ex
	{
		// Methods
		public static void OffsetPoints(List<Vector3> points, Vector3 offset);
		public static Vector2 ConvertDirTo2D(Vector3 start, Vector3 end, Camera camera);
		public static Vector3 FromValue(float value);
		public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis);
		public static int GetPointClosestToPoint(List<Vector3> points, Vector3 pt);
		public static Vector3 GetPointCloudCenter(IEnumerable<Vector3> ptCloud);
		public static int GetMostAligned(Vector3[] vectors, Vector3 dir, bool checkSameDirection);
	
		// Extension methods
		public static Vector3 Abs(this Vector3 v);
		public static Vector3 GetSignVector(this Vector3 v);
		public static float GetMaxAbsComp(this Vector3 v);
		public static float Dot(this Vector3 v1, Vector3 v2);
		public static float AbsDot(this Vector3 v1, Vector3 v2);
		public static float GetDistanceToSegment(this Vector3 point, Vector3 point0, Vector3 point1);
		public static Vector3 ProjectOnSegment(this Vector3 point, Vector3 point0, Vector3 point1);
		public static Vector3 GetInverse(this Vector3 vector);
		public static bool IsAligned(this Vector3 vector, Vector3 other, bool checkSameDirection);
		public static bool PointsSameDir(this Vector3 vector, Vector3 other);
	}
}
