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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static Func<KeyValuePair<int, int>, int> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _DisplayAndFadePrevBadge_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _currentTime___0;
		internal float _scale___0;
		internal float _rotation___1;
		internal LevelRewardAnimation _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadePrevBadge_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _DisplayAndFadeNextBadge_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal float _scale___0;
		internal float _currentTime___0;
		internal float _rotation___1;
		internal float _backgroundRayScale___2;
		internal float _rotation___3;
		internal LevelRewardAnimation _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadeNextBadge_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _DisplayAndFadeGoldIcon_c__Iterator2 : IEnumerator<object>
	{
		// Fields
		internal float _scale___0;
		internal float _currentTime___0;
		internal float _rotation___1;
		internal LevelRewardAnimation _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DisplayAndFadeGoldIcon_c__Iterator2();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public LevelRewardAnimation();

	// Methods
	public void Initialize(Dictionary<int, int> levelRewards);
	public void OnShow();
	private void OnDestroy();
	private void OnPrevBadgeLoaded(UnityWebRequest www);
	private void OnNextBadgeLoaded(UnityWebRequest www);
	[DebuggerHidden]
	private IEnumerator DisplayAndFadePrevBadge();
	[DebuggerHidden]
	private IEnumerator DisplayAndFadeNextBadge();
	[DebuggerHidden]
	private IEnumerator DisplayAndFadeGoldIcon();
	[CompilerGenerated]
	private static int _Initialize_m__0(KeyValuePair<int, int> o);
	[CompilerGenerated]
	private static void _OnShow_m__1(IUIStack x, BaseEventData y);
}

