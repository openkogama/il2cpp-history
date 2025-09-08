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

[RequireComponent(typeof(RectTransform))]
public class GameMeterShake : MonoBehaviour
{
	// Fields
	private RectTransform rectTransform;
	private Vector2 startPos;
	private IEnumerator shakeCoroutine;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShakeAnimation_d__5 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public GameMeterShake __4__this;
		private float _shakeTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ShakeAnimation_d__5(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public GameMeterShake();

	// Methods
	private void Awake();
	public void StartShake();
	[IteratorStateMachine(typeof(_ShakeAnimation_d__5))]
	private IEnumerator ShakeAnimation();
	private void OnDisable();
}

