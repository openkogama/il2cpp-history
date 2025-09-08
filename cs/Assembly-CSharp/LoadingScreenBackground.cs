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

[RequireComponent(typeof(StreamPngToSprite))]
public class LoadingScreenBackground : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Material horizontalBlur;
	[SerializeField]
	private Material VerticalBlur;
	private StreamPngToSprite imageStream;
	private RenderTexture finalBluredTex;

	// Nested types
	[CompilerGenerated]
	private sealed class _WaitForSessionDataCoroutine_d__5 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LoadingScreenBackground __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _WaitForSessionDataCoroutine_d__5(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LoadingScreenBackground();

	// Methods
	private void Start();
	[IteratorStateMachine(typeof(_WaitForSessionDataCoroutine_d__5))]
	private IEnumerator WaitForSessionDataCoroutine();
	private void OnBackgroundImageRecieved();
	private void OnDestroy();
}

