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
	public static class SphereMath
	{
		// Methods
		public static List<Vector3> CalcRightUpExtents(Vector3 sphereCenter, float sphereRadius, Vector3 right, Vector3 up);
		public static bool Raycast(Ray ray, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = default);
		public static bool Raycast(Ray ray, out float t, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = default);
		public static bool Raycast(Ray ray, out float t0, out float t1, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = default);
		public static bool ContainsPoint(Vector3 point, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = default);
	}
}
