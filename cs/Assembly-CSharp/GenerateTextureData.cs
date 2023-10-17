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

public class GenerateTextureData : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	private static bool _IsCreatingScreenShot_k__BackingField;

	// Properties
	public static bool IsCreatingScreenShot { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _GenerateTexture_d__5 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public Action<byte[]> textureDataCallback;
		public GenerateTextureData __4__this;
		private GameObject _screenshotCamObject_5__2;
		private Camera _screenshotCam_5__3;
		private int _height_5__4;
		private RenderTexture _screenshotRenderTexture_5__5;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateTexture_d__5(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public GenerateTextureData();

	// Methods
	public void GenerateTextureDataCameraView(Action<byte[]> callback);
	[IteratorStateMachine(typeof(_GenerateTexture_d__5))]
	private IEnumerator GenerateTexture(Action<byte[]> textureDataCallback);
	public static void AddPostProcessing(GameObject screenshotCamObject, MainCameraManager mainCameraManager, LayerFlags layers);
}

