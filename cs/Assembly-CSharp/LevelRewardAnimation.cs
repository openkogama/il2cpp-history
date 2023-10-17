/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelRewardAnimation : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage prevLevelBadge;
	[SerializeField]
	private float prevLevelDisplayTime;
	[SerializeField]
	private AnimationCurve prevBadgeBounceEffect;
	[SerializeField]
	private RawImage nextLevelBadge;
	[SerializeField]
	private float nextLevelDisplayTime;
	[SerializeField]
	private AnimationCurve nextBadgeBounceEffect;
	[SerializeField]
	private Image goldImage;
	[SerializeField]
	private float goldImageDisplayTime;
	[SerializeField]
	private AnimationCurve goldBounceEffect;
	[SerializeField]
	private AnimationCurve goldFadeInCurve;
	[SerializeField]
	private AnimationCurve rotateUIYAxisIn;
	[SerializeField]
	private AnimationCurve rotateUIYAxisOut;
	[SerializeField]
	private float rotateUIYAxisTime;
	[SerializeField]
	private UnityEngine.UI.Text header;
	[SerializeField]
	private UnityEngine.UI.Text goldText;
	[SerializeField]
	private CanvasGroup claimButton;
	[SerializeField]
	private AnimationCurve backgroundRaySizeCurve;
	[SerializeField]
	private Image backgroundRays;
	[SerializeField]
	private int targetSize;
	private List<KeyValuePair<int, int>> rewards;
	private KeyValuePair<int, int> currentReward;
	private Texture2D previousBadgeTextureAsset;
	private Texture2D currentBadgeTextureAsset;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static Func<KeyValuePair<int, int>, int> __9__23_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__24_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal int _Initialize_b__23_0(KeyValuePair<int, int> o);
		internal void _OnShow_b__24_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _DisplayAndFadePrevBadge_d__28 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LevelRewardAnimation __4__this;
		private float _currentTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadePrevBadge_d__28(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _DisplayAndFadeNextBadge_d__29 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LevelRewardAnimation __4__this;
		private float _currentTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadeNextBadge_d__29(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _DisplayAndFadeGoldIcon_d__30 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public LevelRewardAnimation __4__this;
		private float _currentTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadeGoldIcon_d__30(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public LevelRewardAnimation();

	// Methods
	public void Initialize(Dictionary<int, int> levelRewards);
	public void OnShow();
	private void OnDestroy();
	private void OnPrevBadgeLoaded(UnityWebRequest www);
	private void OnNextBadgeLoaded(UnityWebRequest www);
	[IteratorStateMachine(typeof(_DisplayAndFadePrevBadge_d__28))]
	private IEnumerator DisplayAndFadePrevBadge();
	[IteratorStateMachine(typeof(_DisplayAndFadeNextBadge_d__29))]
	private IEnumerator DisplayAndFadeNextBadge();
	[IteratorStateMachine(typeof(_DisplayAndFadeGoldIcon_d__30))]
	private IEnumerator DisplayAndFadeGoldIcon();
}

