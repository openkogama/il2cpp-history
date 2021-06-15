/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ReviveUIHandler : ReviveUIHandlerBase
{
	// Fields
	private const float minDistanceToCameraBeforeShowAvatar = 3f;
	private bool roundEndedWhileWatchingAd;
	private int currentSafePointSelected;
	private GameObject bodyClone;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;

	// Properties
	protected override AdContext AdContext { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey0
	{
		// Fields
		internal bool isBlocked;
		internal ReviveUIHandler _this;

		// Constructors
		public _Update_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnRewardedAdWatched_c__AnonStorey1
	{
		// Fields
		internal NotificationPopup popup;
		internal ReviveUIHandler _this;

		// Constructors
		public _OnRewardedAdWatched_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		internal void __m__1();
	}

	// Constructors
	public ReviveUIHandler();

	// Methods
	public override void Initialize(UnityAction onContinueClicked);
	protected override void RoundEnded(IWinningCondition condition);
	private void OnGenerateTextureComplete(byte[] generatedTexture);
	protected override void Update();
	public override void OnWatchAdClicked();
	protected override void OnAdFinishedContinue();
	protected override void OnRewardedAdWatched(RewardedAdResult result);
	private void CreateAvatarBodyForScreenshot();
	private void CleanupAvatarBodyAfterScreenshot();
	[CompilerGenerated]
	private static void _OnAdFinishedContinue_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnRewardedAdWatched_m__1(IModalPopupCreator x, BaseEventData y);
}

