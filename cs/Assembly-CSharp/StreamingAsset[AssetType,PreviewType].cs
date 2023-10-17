/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class StreamingAsset<AssetType, PreviewType> : StreamingAsset
	where AssetType : UnityEngine.Object
	where PreviewType : UnityEngine.Object
{
	// Fields
	[SerializeField]
	[Tooltip("If true, bundle will be cached in memory, and never unloaded. It will also require a unique bundle name. If false, bundle will be destroyed and resources freed on destruction.")]
	protected bool useCache;
	[SerializeField]
	[Tooltip("If true, will not download this asset for WebGL")]
	private bool excludeWebGL;
	private AssetType asset;

	// Properties
	public AssetType Asset { get; set; }

	// Constructors
	protected StreamingAsset();

	// Methods
	protected virtual void Start();
	protected void DownloadWhenPossible();
	protected override void OnDownloadFinished(UnityWebRequest www);
	public static implicit operator AssetType(StreamingAsset<AssetType, PreviewType> a);
	protected override void OnDestroy();
}

