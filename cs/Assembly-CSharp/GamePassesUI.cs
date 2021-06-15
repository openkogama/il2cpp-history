/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesUI : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GamePassesShop gamePassesShopPrefab;
	[SerializeField]
	private UnityEngine.UI.Text totalGamePointAmountText;
	[SerializeField]
	private GamePassesHighScoreList highScoreListPrefab;
	[SerializeField]
	private GamePassesHighlightArrowManager highLightArrowManager;
	[SerializeField]
	private GameTierProgressBar tierProgressBar;
	[SerializeField]
	private GameTierProgressBarGainEffectController gainEffectController;
	[SerializeField]
	private GamePassesWelcomeReward welcomeRewardPopup;
	private bool isInitialized;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowHighScore_c__AnonStorey0
	{
		// Fields
		internal GamePassesHighScoreList highScoreList;

		// Constructors
		public _ShowHighScore_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _InstantiateGamePassesShop_c__AnonStorey1
	{
		// Fields
		internal GamePassesShop gamePassesShop;

		// Constructors
		public _InstantiateGamePassesShop_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesUI();

	// Methods
	public void Initialize();
	public void TryShowWelcomeReward();
	public void OnTier1ShopPressed();
	public void OnTier2ShopPressed();
	public void OnTier3ShopPressed();
	public void ShowHighScore();
	public void ReplayGainEffect(int previousGamePointAmount, int newGamePointAmount);
	private void ShowGamePassesShop(GamePassTier tierToShow);
	private void InstantiateGamePassesShop(GamePassTier tierToShow);
	private void OnEnable();
	private void OnDisable();
	private bool ShouldShowWelcomeReward();
	private void OnPlayerPlanetDataUpdated();
}

