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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public GamePassesShop gamePassesShop;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _ShowTier_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public GamePassesShop gamePassesShop;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _ShowLockedTier_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__20_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnEnable_b__20_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass21_0
	{
		// Fields
		public TierUnlockDetailsPopup tierPurchasePopup;

		// Constructors
		public __c__DisplayClass21_0();

		// Methods
		internal void _ShowPurchasePopup_b__0(IUIStack x, BaseEventData y);
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
}

