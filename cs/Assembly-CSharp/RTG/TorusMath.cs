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
	public static class TorusMath
	{
		// Methods
		public static float CalcSphereRadius(float torusCoreRadius, float torusTubeRadius);
		public static AABB CalcCylModelAABB(float torusCoreRadius, float torusHrzRadius, float torusVertRadius);
		public static AABB CalcCylAABB(Vector3 torusCenter, float torusCoreRadius, float torusHrzRadius, float torusVertRadius, Quaternion torusRotation);
		public static List<Vector3> Calc3DHrzExtentPoints(Vector3 torusCenter, float torusCoreRadius, float torusTubeRadius, Quaternion torusRotation);
		public static bool Raycast(Ray ray, out float t, Vector3 torusCenter, float torusCoreRadius, float torusTubeRadius, Quaternion torusRotation, TorusEpsilon epsilon = default);
		public static bool RaycastCylindrical(Ray ray, out float t, Vector3 torusCenter, float torusCoreRadius, float torusHrzRadius, float torusVertRadius, Quaternion torusRotation, TorusEpsilon epsilon = default);
	}
}
