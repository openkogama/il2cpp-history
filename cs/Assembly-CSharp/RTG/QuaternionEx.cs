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
	public static class QuaternionEx
	{
		// Methods
		public static Quaternion GetRelativeRotation(Quaternion from, Quaternion to);
		public static Quaternion Normalize(Quaternion quat);
		public static Quaternion FromToRotation3D(Vector3 from, Vector3 to, Vector3 perp180);
		public static Quaternion FromToRotation2D(Vector2 from, Vector2 to);
	
		// Extension methods
		public static void RotatePoints(this Quaternion quat, List<Vector3> points, Vector3 pivot);
		public static float Length(this Quaternion quat);
		public static float ConvertTo2DRotation(this Quaternion quat);
	}
}
