/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class StreamedTextureToMeshRenderer : StreamingAsset<Texture, Texture>
{
	// Fields
	[Header("Configuration")]
	[SerializeField]
	[Tooltip("For standard unity shaders \"_MainTex\" is the main textures name.")]
	protected string shaderTextureVariableName;
	[Header("Dependencies")]
	[SerializeField]
	private MeshRenderer meshRenderer;

	// Properties
	public Texture TextureAsset { get; }

	// Constructors
	public StreamedTextureToMeshRenderer();

	// Methods
	public void ReDownload();
	protected override void OnAssetSet();
}

