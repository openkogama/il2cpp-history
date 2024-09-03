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
	public static class PrismMath
	{
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Comparison<float> __9__1_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal int _RaycastTriangular_b__1_0(float t0, float t1);
		}
	
		// Methods
		public static List<Vector3> CalcTriangPrismCornerPoints(Vector3 baseCenter, float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Quaternion prismRotation);
		public static bool RaycastTriangular(Ray ray, out float t, Vector3 baseCenter, float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Quaternion prismRotation);
		public static bool ContainsPoint(Vector3 point, Vector3 baseCenter, float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Quaternion prismRotation, PrismEpsilon epsilon = default);
	}
}
