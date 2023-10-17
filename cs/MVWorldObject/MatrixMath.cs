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

public static class MatrixMath
{
	// Methods
	public static Matrix4x4 MakeTransform(Vector3 position, Vector3 scale, Quaternion orientation);
	private static void ToRotationMatrix(out Matrix4x4 kRot, Quaternion q);
	public static Matrix4x4 MakeInverseTransform(Vector3 position, Vector3 scale, Quaternion orientation);
	public static Matrix4x4 Inverse(Matrix4x4 m);
}

