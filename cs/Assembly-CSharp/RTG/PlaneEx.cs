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
	public static class PlaneEx
	{
		// Methods
		public static Plane GetCameraFacingAxisSlicePlane(Vector3 axisOrigin, Vector3 axis, Camera camera);
	
		// Extension methods
		public static Plane InvertNormal(this Plane plane);
		public static float GetAbsDistanceToPoint(this Plane plane, Vector3 point);
		public static Vector3 ProjectPoint(this Plane plane, Vector3 pt);
		public static List<Vector3> ProjectAllPoints(this Plane plane, List<Vector3> points);
		public static int GetFurthestPtInFront(this Plane plane, List<Vector3> points);
		public static int GetClosestPtInFront(this Plane plane, List<Vector3> points);
		public static int GetClosestPtInFrontOrOnPlane(this Plane plane, List<Vector3> points);
		public static int GetFurthestPtBehind(this Plane plane, List<Vector3> points);
	}
}
