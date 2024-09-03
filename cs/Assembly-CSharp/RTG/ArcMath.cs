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
	public static class ArcMath
	{
		// Methods
		public static float ConvertToSh3DArcAngle(Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart);
		public static float ConvertToSh2DArcAngle(Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart);
		public static OBB CalcSh3DArcOBB(Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static OBB CalcLg3DArcOBB(Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool RaycastShArc(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool RaycastShArcWire(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool RaycastLgArc(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool RaycastLgArcWire(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool ShArcContains3DPoint(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool Is3DPointOnShArcWire(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool ShArcContains2DPoint(Vector2 point, Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool LgArcContains3DPoint(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool Is3DPointOnLgArcWire(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = default);
		public static bool LgArcContains2DPoint(Vector2 point, Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart, ArcEpsilon epsilon = default);
	}
}
