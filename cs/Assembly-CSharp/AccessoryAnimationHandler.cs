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

public class AccessoryAnimationHandler : ActivateOnAnimationBase
{
	// Fields
	[SerializeField]
	private Animation animations;
	[SerializeField]
	private List<AnimationData> animationData;
	private string currentCrossFadedAnimation;
	private bool shouldTransitionToNewAnimation;
	private const float crossfadeDuration = 0.2f;

	// Nested types
	[Serializable]
	private struct AnimationData
	{
		// Fields
		public string animationName;
		public float animationSpeed;
		public string TransitionToAnimationName;
	}

	[CompilerGenerated]
	private sealed class _TransitionToNewAnimation_d__15 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AccessoryAnimationHandler __4__this;
		public float resetDelay;
		public string transitionToAnimationName;
		private float _startTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _TransitionToNewAnimation_d__15(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _StopAnimationNextFrame_d__19 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AccessoryAnimationHandler __4__this;
		private bool _hasFramePassed_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _StopAnimationNextFrame_d__19(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public AccessoryAnimationHandler();

	// Methods
	protected override void Start();
	public override void OnAvatarAnimationChange(string newAnimation);
	private new Avatar GetAvatar();
	private bool HaveAnimationData(string animationName);
	public void PlayAnimation(string animationName);
	private void ApplyAnimationSpeed(string animationName);
	public float GetAnimationSpeed(string animationName);
	public void Initialize();
	public void SetAllAnimationToLooping();
	[IteratorStateMachine(typeof(_TransitionToNewAnimation_d__15))]
	private IEnumerator TransitionToNewAnimation(float resetDelay, string transitionToAnimationName);
	private void StartTransitioning(string transitionToAnimationName);
	private void StartCrossfading(string animationName);
	private void HandleNoIdleAnimation();
	[IteratorStateMachine(typeof(_StopAnimationNextFrame_d__19))]
	private IEnumerator StopAnimationNextFrame();
}

