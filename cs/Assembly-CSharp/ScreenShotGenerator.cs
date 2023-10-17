/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _GenerateCoroutine_d__19 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public GameObject obj;
		public ScreenShotGenerator __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateCoroutine_d__19(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
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
	[IteratorStateMachine(typeof(_GenerateCoroutine_d__19))]
	private IEnumerator GenerateCoroutine(GameObject obj);
	private void GenerateTexture();
	private void InitCamera(int width, int height);
	private Vector3 Translate(Vector3 pos, Transform relativeTo, Vector3 translation);
	private void OnPreRender();
}

