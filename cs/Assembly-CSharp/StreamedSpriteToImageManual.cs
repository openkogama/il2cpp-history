/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedSpriteToImageManual : StreamingAsset<Sprite, Texture2D>
{
	// Fields
	[Header("Dependencies")]
	[SerializeField]
	protected Image image;
	private UnityAction onAssetSetManual;

	// Nested types
	private class StreamedAssetSpriteHandler
	{
		// Fields
		private static Dictionary<string, Sprite> sprites;

		// Constructors
		public StreamedAssetSpriteHandler();
		static StreamedAssetSpriteHandler();

		// Methods
		public static Sprite GetSprite(string url);
		public static void CacheSpriteUrl(string url, Sprite sprite);
	}

	// Constructors
	public StreamedSpriteToImageManual();

	// Methods
	protected override void Start();
	public void Download(string url, UnityAction onAssetSet);
	protected override void OnDownloadFinished(UnityWebRequest www);
	private void OnAssetSetCallback();
	public void Reset();
	protected override void OnAssetSet();
}

