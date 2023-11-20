/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using UnityEngine;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject
{
	public static class CubeDataPacker
	{
		// Fields
		private static Vector3[] bytePositionLookUpTable;
		private static Dictionary<Vector3, byte> positionByteLookUpTable;
		private static readonly byte[] IdentityByteCorners;
		private static int rowMaxLength;
	
		// Constructors
		static CubeDataPacker();
	
		// Methods
		public static byte Vector3ToByte(Vector3 corner);
		public static byte[] CornersToByteArray(Vector3[] corners);
		public static Vector3 ByteToVector3(byte key);
		public static void ByteToVector3(ref byte key, ref Vector3 vector);
		public static Vector3[] ByteArrayToCorners(byte[] byteArray);
		public static void ByteArrayToCorners(ref byte[] byteArray, ref Vector3[] corners);
		public static void WriteCompressedCube(BytePacker bp, short x, short y, short z, byte[] byteCorners, byte[] materials);
		private static void GetCompressionFlags(ref byte compressionFlags, byte[] byteCorners, byte[] materials);
		public static void WriteCompressedCubeData(BytePacker bp, byte[] byteCorners, byte[] materials);
		public static void ReadCompressedCube(byte cubeFlags, BytePacker bp, ref byte[] byteCorners, ref byte[] materials);
		public static int GetCubesInRow(byte cubeFlags);
	}
}
