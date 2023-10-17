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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public GamePassesShop gamePassesShop;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _OnFreeTryTier_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public TierUnlockedPopupController tierUnlockedPopupController;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _ShowTierUnlock_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__9_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__10_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__10_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__11_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__11_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ShowAd_b__9_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__10_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__10_1(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__11_0(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__11_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__12_0(IUIStack x, BaseEventData y);
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
}

