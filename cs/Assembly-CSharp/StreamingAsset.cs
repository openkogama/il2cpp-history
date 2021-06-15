/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class StreamingAsset : MonoBehaviour
{
	// Fields
	[HideInInspector]
	[SerializeField]
	protected string url;
	protected UnityAction onAssetSetAction;
	private static HashSet<UnityWebRequest> cachedAssetBundles;
	private static string assetBundleUrl;

	// Properties
	public string Url { get; set; }
	public static string AssetBundleUrl { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DelayedUnload_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal UnityWebRequest www;
		internal AssetBundle _assetBundle___0;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DelayedUnload_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	protected StreamingAsset();
	static StreamingAsset();

	// Methods
	protected abstract void OnAssetSet();
	public static void ClearCache();
	private static AssetType UnpackBundle<AssetType>(UnityWebRequest www)
		where AssetType : UnityEngine.Object;
	public static AssetType UnpackBundle_Cached<AssetType>(UnityWebRequest www)
		where AssetType : UnityEngine.Object;
	protected static AssetType UnpackBundle_NonCached<AssetType>(UnityWebRequest www, MonoBehaviour coroutineHost)
		where AssetType : UnityEngine.Object;
	[DebuggerHidden]
	protected static IEnumerator DelayedUnload(UnityWebRequest www);
	public static string DBUrlToServerUrl(string url);
	protected void Download_Cached(string url, UnityAction onAssetSetAction);
	protected void Download_NonCached(string url, UnityAction onAssetSetAction);
	protected abstract void OnDownloadFinished(UnityWebRequest www);
	protected virtual void OnDestroy();
}

