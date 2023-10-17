/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public static class SphereOverlapTest
	{
		// Fields
		private const float SQRT_3 = 1.7320508f;
		private const float SQRT_3_DIV_2 = 0.8660254f;
		private static Matrix4x4 worldToLocal;
	
		// Constructors
		static SphereOverlapTest();
	
		// Methods
		public static CommonOverlapResult[] OverlapTest(float radius, Vector3 worldPos, CommonOverlapArg[] overlapArgs);
		public static bool OverlapWo(CommonOverlapArg overlapArg, float worldRadius, Vector3 worldPos, out CommonOverlapResult overlapResult);
		private static OverlapState HandleCubeOnRadiusLimit(int x, IntVector pos, IntVector iterationBounds, bool cubeIsWithinRadius, bool prevCubeIsWithinRadius, ICubeModel cubeModel, Vector3 localPosition, float localRadiusSquared);
	}
}
