/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class MathFunctions
{
	// Nested types
	public enum IntersectResult
	{
		PARALLEL = 0,
		COINCIDENT = 1,
		NOT_INTERESECTING = 2,
		INTERESECTING = 3
	}

	public static class PerlinSimplexNoise
	{
		// Fields
		private static int[][] grad3;
		private static int[] p;
		private static readonly int[] perm;

		// Constructors
		static PerlinSimplexNoise();

		// Methods
		private static int fastfloor(float x);
		private static float dot(int[] g, float x, float y);
		private static float dot(int[] g, float x, float y, float z);
		private static float dot(int[] g, float x, float y, float z, float w);
		public static float noise(float xin, float yin, float zin);
		public static float noise(float xin, float yin);
	}

	// Methods
	public static float DotProduct(ref Vector3 a, ref Vector3 b);
	public static Vector3 GetMinVector(Vector3 min0, Vector3 min1);
	public static Vector3 GetMaxVector(Vector3 max0, Vector3 max1);
	public static double SignedDistanceTo(ref Plane plane, ref Vector3 planeOrigin, ref Vector3 point);
	public static double SignedDistanceTo(ref Vector3 planeNormal, ref Vector3 planeOrigin, ref Vector3 point);
	public static void ClampIntVector(ref IntVector target, IntVector min, IntVector max);
	public static Vector3 MultiplyVector(ref Vector3 vec0, ref Vector3 vec1);
	public static Vector3 DivideVector(ref Vector3 vec0, ref Vector3 vec1);
	public static Vector3 AbsVector(Vector3 vec);
	public static Vector3 RoundVector(Vector3 vector, int decimals);
	public static Vector3 FloorVector(Vector3 vector);
	public static Vector3 CeilVector(Vector3 vector);
	public static bool VectorIsNan(Vector3 vector);
	public static bool QuaternionIsNan(Quaternion quaternion);
	public static bool VectorIsFinite(Vector3 vector);
	public static bool QuaternionIsFinite(Quaternion quaternion);
	public static bool IsQuaternionFloatsValid(Quaternion quaternion);
	public static bool IsVectorFloatsValid(Vector3 vector);
	public static bool IsFloatValid(float floatToValidate);
	public static Vector3 TruncateVector(Vector3 vector, int digits);
	public static double Truncate(double number, int digits);
	public static void Vector3ToVector2(ref Vector3 from, ref Vector2 to, int ignoreAxis);
	public static void Vector2ToVector3(ref Vector2 from, ref Vector3 to, int addAxis, float addValue = 0f);
	public static bool DoLinesIntersect(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3, ref Vector2 ptIntersection);
	public static bool IsCoincidentalLineSegmentsOverlapping(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3);
	public static IntersectResult Intersect(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3, ref Vector2 ptIntersection);
	public static bool IsPointInShape(IList<Vector2> shapePoints, Vector2 point);
	public static int IsLineSegmentIntersectingShape(Vector2 p0, Vector2 p1, List<Vector2> points, bool isOpen);
	public static float SignedAngle(Vector2 v1, Vector2 v2);
	public static float SignedAngle(Vector3 v1, Vector3 v2, Vector3 normal);
	public static float Yaw(Vector3 dir);
	public static float Pitch(Vector3 dir, Vector3 planeNormal);
	public static float SignedYawFromLocalDirection(Vector3 localDirection);
	public static float PitchFromLocalDirection(Vector3 localDirection);
	public static Quaternion QuaternionFromAngleAndAxis(float angle, Vector3 AxisVector);
	public static List<Vector2> FlipPolygon(List<Vector2> points);
	public static void ClampVector(ref Vector3 v, float min, float max);
	public static void ClampVector(ref Vector3 v, Vector3 min, Vector3 max);
	public static bool DistancePointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd, out float distance);
	public static bool DistancePointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd, out float distance, out Vector3 intersection);
	public static void DistancePointLine(Vector3 point, Vector3 lineStart, Vector3 lineEnd, out float distance, out Vector3 intersection, out float pointOnLineScalar);
	public static Vector3 GetNormal(Vector3 pa, Vector3 pb, Vector3 pc);
	public static bool LineFacetCollision(Vector3 p1, Vector3 p2, Vector3 pa, Vector3 pb, Vector3 pc, Vector3 lineDir, ref Vector3 p, ref Vector3 n);
	public static bool LineFacet(Vector3 p1, Vector3 p2, Vector3 pa, Vector3 pb, Vector3 pc, ref Vector3 p);
	public static float NormalizeAngle(float degrees);
	public static Quaternion InertiaY(Vector3 eulerFrom, Vector3 eulerTo, float speed);
	public static Quaternion InertiaX(Vector3 eulerFrom, Vector3 eulerTo, float speed);
	public static float Pow2(float val);
	public static Matrix4x4 AbsMatrix(Matrix4x4 m);
	public static Bounds FastAABBTransform(Matrix4x4 m, Bounds b);

	// Extension methods
	public static Vector3 Multiply(this Vector3 a, Vector3 b);
	public static Vector2 xy(this Vector3 v);
	public static IntVector ToIntVector(this Vector3 v);
	public static float[] ToFloatArray(this Vector3 v);
}

