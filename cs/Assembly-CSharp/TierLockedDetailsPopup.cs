/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.GamePassSystem;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierLockedDetailsPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierText;
	[SerializeField]
	private UnityEngine.UI.Text headerText;
	[SerializeField]
	private UnityEngine.UI.Text lockedDescriptionText;
	[SerializeField]
	private UnityEngine.UI.Text lockedButtonText;
	[SerializeField]
	private ProgressBar tierProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text progressText;
	[SerializeField]
	private GamePassesShop gamePassesShopPrefab;
	[SerializeField]
	private TierUnlockDetailsPopup tierUnlockDetailsPrefab;
	private GamePassTier tierToPurchase;
	private UnityAction onPurchaseSuccessful;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowTier_c__AnonStorey0
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _ShowTier_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowLockedTier_c__AnonStorey1
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _ShowLockedTier_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowPurchasePopup_c__AnonStorey2
	{
		// Fields
		internal TierUnlockDetailsPopup tierPurchasePopup;

		// Constructors
		public _ShowPurchasePopup_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierLockedDetailsPopup();

	// Methods
	public void Initialize(GamePassTier tierToPurchase, UnityAction OnPurchaseSuccessful);
	public void ShowTier();
	public void ShowLockedTier();
	private void UpdateLockedText();
	private string GetHeaderText();
	private string GetLockedButtonText();
	private string GetLockedDescription();
	private GamePassTier GetLockedTier();
	private void UpdateTierProgressBar();
	private int ReduceGamePointsWithPreviousTierRequirements(GamePassTier gamePassTierToDisplay, int gamePoints, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
	private void OnEnable();
	private void ShowPurchasePopup();
	[CompilerGenerated]
	private static void _OnEnable_m__0(IUIStack x, BaseEventData y);
}

