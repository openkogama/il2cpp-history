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

public class GenerateTextureData : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static bool _IsCreatingScreenShot_k__BackingField;

	// Properties
	public static bool IsCreatingScreenShot { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _GenerateTexture_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal GameObject _screenshotCamObject___0;
		internal SkyboxManager _skyboxManager___0;
		internal Color _color___0;
		internal Camera _screenshotCam___0;
		internal Skybox _skybox___0;
		internal int _height___0;
		internal LayerFlags _layers___0;
		internal RenderTexture _screenshotRenderTexture___0;
		internal Texture2D _screenshotTexture___0;
		internal byte[] _bytes___0;
		internal Action<byte[]> textureDataCallback;
		internal GenerateTextureData _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateTexture_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public GenerateTextureData();

	// Methods
	public void GenerateTextureDataCameraView(Action<byte[]> callback);
	[DebuggerHidden]
	private IEnumerator GenerateTexture(Action<byte[]> textureDataCallback);
}

