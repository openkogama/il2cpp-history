/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesProgressBarFreeTryHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameTierProgressBar tierProgressBar;
	[SerializeField]
	private TierUnlockedPopupController TierUnlockedPopupControllerPrefab;
	[SerializeField]
	private GamePassesShop gamePassesShopPrefab;
	[SerializeField]
	private List<Image> buttonAdImages;
	private GamePassTier tierToTry;
	private bool isWaitingForFreeTryTier;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache5;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnFreeTryTier_c__AnonStorey0
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _OnFreeTryTier_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTierUnlock_c__AnonStorey1
	{
		// Fields
		internal TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public _ShowTierUnlock_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesProgressBarFreeTryHandler();

	// Methods
	private void OnEnable();
	public void OnFreeTryTier(int tierToTry);
	private void ShowTierUnlock(bool wasPurchased, bool wasTempUnlocked);
	private void ShowAd();
	private void RewardedAdCallback(RewardedAdResult result);
	private void PreviewTier();
	private void OnPlayerPlanetDataUpdated();
	[CompilerGenerated]
	private static void _ShowAd_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__2(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__3(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__5(IUIStack x, BaseEventData y);
}

