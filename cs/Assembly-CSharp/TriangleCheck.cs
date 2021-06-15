/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class TriangleCheck
{
	// Methods
	private static bool GetLowestRoot(float a, float b, float c, float maxR, ref float root);
	private static bool SameSide(ref Vector3 p1, ref Vector3 p2, ref Vector3 a, ref Vector3 b);
	private static bool PointInTriangle(ref Vector3 p, ref Vector3 a, ref Vector3 b, ref Vector3 c);
	private static bool IsFrontFacingTo(ref Plane plane, ref Vector3 direction);
	private static bool IsFrontFacingTo(ref Vector3 planeNormal, ref Vector3 direction);
	public static bool CheckTriangle(ref Vector3 p1, ref Vector3 p2, ref Vector3 p3, ref Vector3 localOrigin, ref Vector3 localDirection, float distance, ref VoxelHit voxelHit);
}

