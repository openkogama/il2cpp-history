/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PreviewObject : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Camera previewCamera;
	[SerializeField]
	private Transform previewTransform;
	[SerializeField]
	private int width;
	[SerializeField]
	private int height;
	[SerializeField]
	private int depth;
	[SerializeField]
	private int antiAliasing;
	[SerializeField]
	private FilterMode filterMode;
	[SerializeField]
	private RenderTexture renderTexture;

	// Properties
	public RenderTexture RenderTexture { get; }

	// Constructors
	public PreviewObject();

	// Methods
	private void Awake();
	private void OnDestroy();
}

