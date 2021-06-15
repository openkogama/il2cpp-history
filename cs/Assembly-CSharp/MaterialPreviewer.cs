/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MaterialPreviewer : MonoBehaviour
{
	// Fields
	public RenderTexture renderTexture;
	public int previewResolution;
	[SerializeField]
	private MeshRenderer meshRenderer;
	[SerializeField]
	private MeshFilter meshFilter;
	[SerializeField]
	private Camera pictureCamera;
	[SerializeField]
	private Transform cube;

	// Constructors
	public MaterialPreviewer();

	// Methods
	private void Awake();
	public void Initialize(Mesh mesh);
	private void OnDestroy();
	private void Update();
}

