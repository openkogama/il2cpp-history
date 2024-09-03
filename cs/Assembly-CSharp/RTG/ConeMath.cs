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
	public static class ConeMath
	{
		// Methods
		public static List<Vector3> CalcConeBaseExtentPoints(Vector3 coneBaseCenter, float coneBaseRadius, Quaternion coneRotation);
		public static bool Raycast(Ray ray, out float t, Vector3 coneBaseCenter, float coneBaseRadius, float coneHeight, Quaternion coneRotation, ConeEpsilon epsilon = default);
		public static bool ContainsPoint(Vector3 point, Vector3 coneBaseCenter, float coneBaseRadius, float coneHeight, Quaternion coneRotation, ConeEpsilon epsilon = default);
	}
}
