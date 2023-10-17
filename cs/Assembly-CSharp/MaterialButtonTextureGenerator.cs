/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialButtonTextureGenerator : MonoBehaviour
{
	// Fields
	public int previewResolution;
	[SerializeField]
	private MeshRenderer meshRenderer;
	[SerializeField]
	private MeshFilter meshFilter;
	[SerializeField]
	private Camera pictureCamera;
	[SerializeField]
	private Texture2D testTexture2D;

	// Constructors
	public MaterialButtonTextureGenerator();

	// Methods
	private void Awake();
	public Texture2D TakePicture(Mesh mesh);
	private void OnDestroy();
}

