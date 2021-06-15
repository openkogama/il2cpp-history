/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 31: MVCommon.dll - Assembly: MVCommon, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.Common
{
	public static class Urls
	{
		// Fields
		public static OnStreamingAssetsUrlAvailable onStreamingAssetsUrlAvailable;
		private static string streamingAssets;
		private static string api;
	
		// Properties
		public static string XPLimit { get; }
		public static string Level { get; }
		public static string InitialData { get; }
		public static string StreamingAssets { get; }
		public static string API { get; }
	
		// Nested types
		public delegate void OnStreamingAssetsUrlAvailable();
	
		// Constructors
		static Urls();
	
		// Methods
		public static void Init(string apiUrl, string streamingAssetsUrl);
		public static bool StreamingAssetUrlReady();
		private static void ValidateGet(string value);
	}
}
