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

public class AvatarScreenshotGenerator : MonoBehaviour
{
	// Fields
	public Vector3 cameraOffset;
	public Vector3 lookAtOffset;
	public string animationToShoot;
	public float animationTime;
	private ParticleSystem[] particleSystems;
	private BoneAnimation boneAnimation;
	private GameObject bodyCloneGO;
	private Action<Texture2D> screenShotDataTexHandler;

	// Nested types
	[CompilerGenerated]
	private sealed class _GenerateScreenshot_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal AvatarScreenshotGenerator _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateScreenshot_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public AvatarScreenshotGenerator();

	// Methods
	public static void Generate(GameObject bodyCloneGO, Action<Texture2D> screenShotDataTexHandler);
	[DebuggerHidden]
	public IEnumerator GenerateScreenshot();
	private void ScreenShotDataTexHandler(Texture2D screenshotTex);
}

