/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using GameMeterVisuals;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class HealthbarLerp : GameMeterVisualEffect
{
	// Fields
	private float lerpForSeconds;
	private float lerpDelay;
	private float lerpStart;
	private float startProgress;
	private bool isInitialized;
	[SerializeField]
	private ProgressBar progressBar;
	[SerializeField]
	private ProgressBar targetProgressBar;

	// Nested types
	[CompilerGenerated]
	private sealed class _LerpProgress_d__10 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public HealthbarLerp __4__this;
		private float _progress_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _LerpProgress_d__10(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public HealthbarLerp();

	// Methods
	private void OnEnable();
	public override void ExecuteEffect();
	private void OnDisable();
	[IteratorStateMachine(typeof(_LerpProgress_d__10))]
	private IEnumerator LerpProgress();
}

