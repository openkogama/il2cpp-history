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
	public static class Vector2Ex
	{
		// Methods
		public static Vector3 ConvertDirTo3D(Vector2 start, Vector2 end, Vector3 zPos, Camera camera);
		public static Vector3 ConvertDirTo3D(Vector2 dir, Vector3 zPos, Camera camera);
		public static Vector2 FromValue(float value);
		public static int GetPointClosestToPoint(List<Vector2> points, Vector2 pt);
	
		// Extension methods
		public static Vector2 Abs(this Vector2 v);
		public static float AbsDot(this Vector2 v1, Vector2 v2);
		public static Vector3 ToVector3(this Vector2 vec, float z = 0f);
		public static Vector2 GetNormal(this Vector2 vec);
		public static float GetDistanceToSegment(this Vector2 point, Vector2 point0, Vector2 point1);
	}
}
