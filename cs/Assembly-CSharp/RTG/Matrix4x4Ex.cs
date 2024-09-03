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
	public static class Matrix4x4Ex
	{
		// Methods
		public static Matrix4x4 Translation(Vector3 translation);
		public static Matrix4x4 RotationMatrixFromRightUp(Vector3 right, Vector3 up);
	
		// Extension methods
		public static Matrix4x4 GetInverse(this Matrix4x4 mtx);
		public static Matrix4x4 GetRelativeTransform(this Matrix4x4 matrix, Matrix4x4 referenceTransform);
		public static Vector3 GetTranslation(this Matrix4x4 matrix);
		public static Vector3 GetScale(this Matrix4x4 matrix);
		public static Vector3 GetNormalizedAxis(this Matrix4x4 matrix, int axisIndex);
		public static Vector3[] GetNormalizedAxes(this Matrix4x4 matrix);
		public static List<Vector3> TransformPoints(this Matrix4x4 matrix, List<Vector3> points);
	}
}
