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
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesPurchaseButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private UnityEngine.UI.Text disabledPriceText;
	[SerializeField]
	private GameObject testToggle;
	[SerializeField]
	private GameObject freeTryButton;
	[SerializeField]
	private GameObject freeTryActivated;
	[SerializeField]
	private ToggleButtonAnimation toggleButton;
	[SerializeField]
	private Button purchaseButton;
	[SerializeField]
	private GameObject disabledPurchaseButton;
	[SerializeField]
	private GamePassesTextBubble informationTextBubble;
	private GamePassTier tierDisplayed;

	// Constructors
	public GamePassesPurchaseButton();

	// Methods
	public void Initialize(GamePassTier tierToDisplay);
	public void OnTestButtonPressed();
	public void OnDisabledButtonPressed();
	public void SetFreeTryActivated(bool isActive);
	private void OnDestroy();
	private void HideButton();
	private void SetUpTestButton();
	private void SetUpPurchaseButton(GamePassTier tierToDisplay, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
	private void SetUpDisableButton(GamePassTier tierToDisplay, Dictionary<GamePassTier, PlayerTierState> gameTierShopStatus);
	private void SetupFreeTryButton();
	private void UpdatePriceText();
}

