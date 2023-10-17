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

public class ActivateParticlesOnAnimation : ActivateOnAnimationBase
{
	// Fields
	[SerializeField]
	private ParticleSystem particles;
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
	private sealed class _PlayParticles_d__4 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public float activationDelay;
		public ActivateParticlesOnAnimation __4__this;
		private float _startTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _PlayParticles_d__4(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public ActivateParticlesOnAnimation();

	// Methods
	public override void OnAvatarAnimationChange(string newAnimation);
	[IteratorStateMachine(typeof(_PlayParticles_d__4))]
	private IEnumerator PlayParticles(float activationDelay);
}

