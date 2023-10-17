/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedAssetToCallback<AssetType, PreviewType> : StreamingAsset<AssetType, PreviewType>
	where AssetType : UnityEngine.Object
	where PreviewType : UnityEngine.Object
{
	// Fields
	public Action<AssetType> onAssetSet;

	// Constructors
	public StreamedAssetToCallback();

	// Methods
	protected override void OnAssetSet();
}

