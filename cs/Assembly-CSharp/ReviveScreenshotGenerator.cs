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

public class ReviveScreenshotGenerator : MonoBehaviour
{
	// Nested types
	[CompilerGenerated]
	private sealed class _GenerateTexture_d__1 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public int width;
		public int height;
		public Vector3 cameraPos;
		public Quaternion cameraRot;
		public Action<byte[]> textureDataCallback;
		public ReviveScreenshotGenerator __4__this;
		private GameObject _screenshotCamObject_5__2;
		private Camera _screenshotCam_5__3;
		private RenderTexture _screenshotRenderTexture_5__4;
		private Camera _cullingCam_5__5;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateTexture_d__1(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public ReviveScreenshotGenerator();

	// Methods
	public void GenerateTextureDataCameraViewAtTransform(Action<byte[]> callback, Vector3 cameraPos, Quaternion cameraRot, int width, int height);
	[IteratorStateMachine(typeof(_GenerateTexture_d__1))]
	private IEnumerator GenerateTexture(Action<byte[]> textureDataCallback, Vector3 cameraPos, Quaternion cameraRot, int width, int height);
}

