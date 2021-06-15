/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScreenShotGenerator : MonoBehaviour
{
	// Fields
	public Texture2D genTexture;
	private RenderTexture genRenderTexture;
	private Camera shotCamera;
	private Action<byte[]> generatedScreenShotPNGCallback;
	private Action<Texture2D> generatedScreenShotTexCallback;
	private Vector3 cameraOffset;
	private Vector3 lookAtOffset;
	private bool clonedObject;
	private bool generating;
	private GameObject targetObject;
	private Bounds targetBounds;
	private const int width = 512;
	private const int height = 512;
	private static readonly int renderLayers;

	// Nested types
	[CompilerGenerated]
	private sealed class _GenerateCoroutine_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal GameObject obj;
		internal Bounds? _bounds___0;
		internal ScreenShotGenerator _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateCoroutine_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public ScreenShotGenerator();
	static ScreenShotGenerator();

	// Methods
	private static ScreenShotGenerator CreateInstance();
	public static void Generate(GameObject obj, Vector3 cameraOffset, Vector3 lookAtOffset, Action<byte[]> generatedScreenShotPNGCallback, bool cloneObject = false);
	public static void Generate(GameObject obj, Vector3 cameraOffset, Vector3 lookAtOffset, Action<Texture2D> generatedScreenShotTexCallback, bool cloneObject = false);
	private void StartGenerate(GameObject obj, Vector3 cameraOffset, Vector3 lookAtOffset, Action<byte[]> generatedScreenShotPNGCallback, bool clonedObject);
	private void StartGenerate(GameObject obj, Vector3 cameraOffset, Vector3 lookAtOffset, Action<Texture2D> generatedScreenShotTexCallback, bool clonedObject);
	[DebuggerHidden]
	private IEnumerator GenerateCoroutine(GameObject obj);
	private void GenerateTexture();
	private void InitCamera(int width, int height);
	private Vector3 Translate(Vector3 pos, Transform relativeTo, Vector3 translation);
	private void OnPreRender();
}

