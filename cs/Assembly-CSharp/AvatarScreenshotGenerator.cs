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
	private sealed class _GenerateScreenshot_d__9 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AvatarScreenshotGenerator __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _GenerateScreenshot_d__9(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AvatarScreenshotGenerator();

	// Methods
	public static void Generate(GameObject bodyCloneGO, Action<Texture2D> screenShotDataTexHandler);
	[IteratorStateMachine(typeof(_GenerateScreenshot_d__9))]
	public IEnumerator GenerateScreenshot();
	private void ScreenShotDataTexHandler(Texture2D screenshotTex);
}

