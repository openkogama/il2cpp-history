/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.AntiCheat
{
	public static class ImageWatermark
	{
		// Fields
		private const uint RandomSeed = 470990;
		private const string HiddenString = "no-shit-sherlock";
		private const string ImagePrefix = "KoGaMa";
		private const int WatermarkLength = 12;
		private const bool WatermarkOn = true;
	
		// Methods
		public static byte[] AddToArray(byte[] bytes);
		private static int[] WatermarkPositions(int max, string encrypt);
		private static string EncryptedWatermark();
		public static bool HasWatermark(byte[] bytes);
		public static byte[] CleanUp(byte[] bytes);
	}
}
