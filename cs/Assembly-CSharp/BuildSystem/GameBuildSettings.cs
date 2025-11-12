/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace BuildSystem
{
	public static class GameBuildSettings
	{
		// Properties
		public static string VersionString { get; }
		public static string VersionStringNoBuild { get; }
		public static int VersionCode { get; }
		public static string ReleaseName { get; }
		public static string BranchName { get; }
		public static string BuildTime { get; }
		public static bool ShowDebugLogin { get; }
		public static string VersionGuid { get; }
		public static int LocalDiscCacheAssetVersion { get; }
		public static string UrlCacheAssetVersionArgument { get; }
		public static int VersionMajor { get; }
		public static int VersionMinor { get; }
		public static int VersionMicro { get; }
		public static int VersionBuild { get; }
		public static System.DateTime BuildTimeDateTime { get; }
	
		// Methods
		public static string GetBuildInfoString();
		public static void SetStreamingAssetVersion(int version);
	}
}
