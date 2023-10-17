/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedTextureToThemeSkybox : StreamingAsset<Texture, Texture>
{
	// Fields
	[SerializeField]
	private string shaderPropertyName;
	[SerializeField]
	private ThemeSkybox skybox;

	// Constructors
	public StreamedTextureToThemeSkybox();

	// Methods
	protected override void OnAssetSet();
	protected void Reset();
}

