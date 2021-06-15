/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ReviveUIHandlerBoosts : ReviveUIHandlerBase
{
	// Fields
	[SerializeField]
	private GameObject defaultUI;
	[SerializeField]
	private GameObject tempClassUI;
	[SerializeField]
	private CurrentSpawnRolePreviewer spawnRolePreviewer;
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private BoostImageController boostImageSelector;
	[SerializeField]
	private GameObject boostContent;
	private GamePassTier tier;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	protected override AdContext AdContext { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey0
	{
		// Fields
		internal bool isBlocked;
		internal ReviveUIHandlerBoosts _this;

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
		internal ReviveUIHandlerBoosts _this;

		// Constructors
		public _OnRewardedAdWatched_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		internal void __m__1();
	}

	// Constructors
	public ReviveUIHandlerBoosts();

	// Methods
	public override void Initialize(UnityAction onContinueClicked);
	private void ChangeBackground();
	protected override void OnAdFinishedContinue();
	private bool IsInTempClass();
	private bool IsInTempTier();
	protected override void Update();
	protected override void OnRewardedAdWatched(RewardedAdResult result);
	[CompilerGenerated]
	private static void _OnAdFinishedContinue_m__0(IUIStack x, BaseEventData y);
}

