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

public class ActivateSoundOnAnimation : ActivateOnAnimationBase
{
	// Fields
	[SerializeField]
	private AudioSource sound;
	[SerializeField]
	private List<ActivationData> activationDataList;

	// Nested types
	[Serializable]
	private struct ActivationData
	{
		// Fields
		public string activatingAnimation;
		public float activationDelay;
	}

	[CompilerGenerated]
	private sealed class _PlaySound_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _startTime___0;
		internal float activationDelay;
		internal ActivateSoundOnAnimation _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _PlaySound_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public ActivateSoundOnAnimation();

	// Methods
	public override void OnAvatarAnimationChange(string newAnimation);
	[DebuggerHidden]
	private IEnumerator PlaySound(float activationDelay);
}

