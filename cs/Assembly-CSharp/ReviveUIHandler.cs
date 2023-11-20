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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ReviveUIHandler : ReviveUIHandlerBase
{
	// Fields
	private const float minDistanceToCameraBeforeShowAvatar = 3f;
	private bool roundEndedWhileWatchingAd;
	private int currentSafePointSelected;
	private GameObject bodyClone;

	// Properties
	protected override AdContext AdContext { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__13_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnAdFinishedContinue_b__12_0(IUIStack x, BaseEventData y);
		internal void _OnRewardedAdWatched_b__13_0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public NotificationPopup popup;
		public ReviveUIHandler __4__this;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _OnRewardedAdWatched_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public bool isBlocked;
		public ReviveUIHandler __4__this;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ReviveUIHandler();

	// Methods
	public override void Initialize(UnityAction onContinueClicked);
	protected override void RoundEnded(IWinningCondition condition);
	private void OnGenerateTextureComplete(byte[] generatedTexture);
	protected override void Update();
	public override void OnWatchAdClicked();
	public override void OnSubscriberClicked();
	protected override void OnAdFinishedContinue();
	protected override void OnRewardedAdWatched(RewardedAdResult result);
	private void CreateAvatarBodyForScreenshot();
	private void CleanupAvatarBodyAfterScreenshot();
	[CompilerGenerated]
	private void _OnRewardedAdWatched_b__13_2();
}

