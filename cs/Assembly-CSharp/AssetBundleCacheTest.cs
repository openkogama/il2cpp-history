/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal static class AssetBundleCacheTest
{
	// Fields
	private const string assetUrl = "Test/bignoise.unity3d";
	[CompilerGenerated]
	private static Action<UnityWebRequest, float, int> __f__mg_cache0;
	[CompilerGenerated]
	private static Action<UnityWebRequest, float, int> __f__mg_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _DownloadTestAsset_c__AnonStorey0
	{
		// Fields
		internal Action<UnityWebRequest, float, int> onDownloadFinished;
		internal float startTime;
		internal int currentStreamingAssetVersion;

		// Constructors
		public _DownloadTestAsset_c__AnonStorey0();

		// Methods
		internal void __m__0(UnityWebRequest www);
	}

	// Methods
	public static void Run(int version);
	public static void OnFirstDownloadFinished(UnityWebRequest result, float startTime, int currentStreamingAssetVersion);
	public static void OnSecondDownloadFinished(UnityWebRequest result, float startTime, int currentStreamingAssetVersion);
	private static void DownloadTestAsset(Action<UnityWebRequest, float, int> onDownloadFinished, int currentStreamingAssetVersion);
}

