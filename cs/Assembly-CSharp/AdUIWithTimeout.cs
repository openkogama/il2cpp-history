/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdUIWithTimeout : MonoBehaviour, IAdUIManager
{
	// Fields
	[SerializeField]
	private ShowingAdsPopup showingAdPopup;
	private static readonly float timeout;
	private bool popupShowing;
	private bool wantsToPop;
	private GameObject overlayPushedToStack;
	private InterstitialAdResult interstitialResultLatePop;
	private RewardedAdResult rewardedAdResultLatePop;
	private Action<InterstitialAdResult> interstitialCallback;
	private Action<RewardedAdResult> rewardedCallback;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey0
	{
		// Fields
		internal bool stackBlocked;
		internal AdUIWithTimeout _this;

		// Constructors
		public _Update_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _PopInterstitial_c__AnonStorey1
	{
		// Fields
		internal bool stackBlocked;
		internal AdUIWithTimeout _this;

		// Constructors
		public _PopInterstitial_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _PopRewardedVideo_c__AnonStorey2
	{
		// Fields
		internal bool stackBlocked;
		internal AdUIWithTimeout _this;

		// Constructors
		public _PopRewardedVideo_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreatePopup_c__AnonStorey3
	{
		// Fields
		internal bool stackReady;

		// Constructors
		public _CreatePopup_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreatePopup_c__AnonStorey4
	{
		// Fields
		internal ShowingAdsPopup popup;

		// Constructors
		public _CreatePopup_c__AnonStorey4();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AdUIWithTimeout();
	static AdUIWithTimeout();

	// Methods
	public bool AdShowing();
	private void Awake();
	private void Update();
	public void ShowInterstitial(Action<InterstitialAdResult> callbackFunction);
	public void ShowRewardedVideo(Action<RewardedAdResult> callbackFunction);
	public void PopInterstitial(InterstitialAdResult adResult);
	public void PopRewardedVideo(RewardedAdResult adResult);
	private void TryPopOverlay();
	private void CreatePopup();
	private void OnSkipClicked();
	[CompilerGenerated]
	private static void _TryPopOverlay_m__0(IUIStack x, BaseEventData y);
}

