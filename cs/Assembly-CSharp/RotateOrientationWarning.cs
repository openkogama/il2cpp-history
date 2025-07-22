/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(Image))]
public class RotateOrientationWarning : MonoBehaviour
{
	// Fields
	[Range(0f, 360f)]
	[SerializeField]
	private float startRotationAngle;
	[Range(0f, 360f)]
	[SerializeField]
	private float targetRotationAngle;
	[SerializeField]
	private float targetRotationTime;
	[SerializeField]
	private float targetPauseTime;
	[SerializeField]
	private float targetFadeTime;
	private Image image;

	// Nested types
	[CompilerGenerated]
	private sealed class _RotationAnimationCoroutine_d__8 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public RotateOrientationWarning __4__this;
		private float _rotationTime_5__2;
		private float _fadeTime_5__3;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _RotationAnimationCoroutine_d__8(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public RotateOrientationWarning();

	// Methods
	private void Awake();
	public void SetAnimationState(bool isAnimating);
	[IteratorStateMachine(typeof(_RotationAnimationCoroutine_d__8))]
	private IEnumerator RotationAnimationCoroutine();
	private void OnDestroy();
}

