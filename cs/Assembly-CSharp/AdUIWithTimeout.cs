/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdUIWithTimeout : MonoBehaviour, IAdUIManager
{
	// Fields
	[SerializeField]
	private ShowingAdsPopup showingAdPopup;
	private const float Timeout = 10f;
	private bool popupShowing;
	private bool wantsToPop;
	private GameObject overlayPushedToStack;
	private InterstitialAdResult interstitialResultLatePop;
	private RewardedAdResult rewardedAdResultLatePop;
	private Action<InterstitialAdResult> interstitialCallback;
	private Action<RewardedAdResult> rewardedCallback;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__16_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _TryPopOverlay_b__16_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public AdUIWithTimeout __4__this;
		public bool stackBlocked;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public bool stackBlocked;
		public AdUIWithTimeout __4__this;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _PopInterstitial_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public bool stackBlocked;
		public AdUIWithTimeout __4__this;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _PopRewardedVideo_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public bool stackReady;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _CreatePopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass17_1
	{
		// Fields
		public ShowingAdsPopup popup;

		// Constructors
		public __c__DisplayClass17_1();

		// Methods
		internal void _CreatePopup_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AdUIWithTimeout();

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
}

