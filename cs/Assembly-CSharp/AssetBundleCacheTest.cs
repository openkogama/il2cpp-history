/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal static class AssetBundleCacheTest
{
	// Fields
	private const string assetUrl = "Test/bignoise.unity3d";

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public Action<UnityWebRequest, float, int> onDownloadFinished;
		public float startTime;
		public int currentStreamingAssetVersion;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _DownloadTestAsset_b__0(UnityWebRequest www);
	}

	// Methods
	public static void Run(int version);
	public static void OnFirstDownloadFinished(UnityWebRequest result, float startTime, int currentStreamingAssetVersion);
	public static void OnSecondDownloadFinished(UnityWebRequest result, float startTime, int currentStreamingAssetVersion);
	private static void DownloadTestAsset(Action<UnityWebRequest, float, int> onDownloadFinished, int currentStreamingAssetVersion);
}

