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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class StreamingAsset : MonoBehaviour
{
	// Fields
	private static readonly HashSet<UnityWebRequest> cachedAssetBundles;
	private static string assetBundleUrl;
	[HideInInspector]
	[SerializeField]
	protected string url;
	protected UnityAction onAssetSetAction;

	// Properties
	public string Url { get; set; }
	public static string AssetBundleUrl { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _DelayedUnload_d__13 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public UnityWebRequest www;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DelayedUnload_d__13(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	protected StreamingAsset();
	static StreamingAsset();

	// Methods
	protected abstract void OnAssetSet();
	protected abstract void OnDownloadFinished(UnityWebRequest www);
	public static void ClearCache();
	private static AssetType UnpackBundle<AssetType>(UnityWebRequest www)
		where AssetType : UnityEngine.Object;
	public static AssetType UnpackBundle_Cached<AssetType>(UnityWebRequest www)
		where AssetType : UnityEngine.Object;
	protected static AssetType UnpackBundle_NonCached<AssetType>(UnityWebRequest www, MonoBehaviour coroutineHost)
		where AssetType : UnityEngine.Object;
	[IteratorStateMachine(typeof(_DelayedUnload_d__13))]
	protected static IEnumerator DelayedUnload(UnityWebRequest www);
	public static string DBUrlToServerUrl(string url);
	protected void Download_Cached(string url, UnityAction onAssetSetAction, WWWRequestPriority requestPriority);
	protected void Download_NonCached(string url, UnityAction onAssetSetAction, WWWRequestPriority requestPriority);
	protected virtual void OnDestroy();
}

