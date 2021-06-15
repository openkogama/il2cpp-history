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
	private sealed class _TransitionToNewAnimation_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _startTime___0;
		internal float resetDelay;
		internal string transitionToAnimationName;
		internal AccessoryAnimationHandler _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _TransitionToNewAnimation_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _StopAnimationNextFrame_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal bool _hasFramePassed___0;
		internal AccessoryAnimationHandler _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _StopAnimationNextFrame_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
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
	[DebuggerHidden]
	private IEnumerator TransitionToNewAnimation(float resetDelay, string transitionToAnimationName);
	private void StartTransitioning(string transitionToAnimationName);
	private void StartCrossfading(string animationName);
	private void HandleNoIdleAnimation();
	[DebuggerHidden]
	private IEnumerator StopAnimationNextFrame();
}

