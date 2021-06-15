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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _LerpProgress_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _progress___1;
		internal HealthbarLerp _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _LerpProgress_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public HealthbarLerp();

	// Methods
	private void OnEnable();
	public override void ExecuteEffect();
	private void OnDisable();
	[DebuggerHidden]
	private IEnumerator LerpProgress();
}

