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
	private sealed class _PlayParticles_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _startTime___0;
		internal float activationDelay;
		internal ActivateParticlesOnAnimation _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _PlayParticles_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public ActivateParticlesOnAnimation();

	// Methods
	public override void OnAvatarAnimationChange(string newAnimation);
	[DebuggerHidden]
	private IEnumerator PlayParticles(float activationDelay);
}

