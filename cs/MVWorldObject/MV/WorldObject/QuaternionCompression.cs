/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public static class QuaternionCompression
	{
		// Fields
		private static float degreesToByteFactor;
		private static float byteToDegreeFactor;
		private static float degToRad;
		private static float radToDeg;
	
		// Constructors
		static QuaternionCompression();
	
		// Methods
		public static byte[] ToBytes(Quaternion quaternion);
		public static Quaternion ToQuaternion(byte[] eulerAnglesByteRange);
		private static Vector3 ToEuler(Quaternion q1);
		private static Quaternion FromEuler(Vector3 eulerAngles);
		private static Vector3 NormalizeAngles(Vector3 angles);
		private static float NormalizeAngle(float angle);
	}
}
