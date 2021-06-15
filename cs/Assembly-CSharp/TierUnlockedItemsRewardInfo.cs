/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedItemsRewardInfo : MonoBehaviour, IGamePassShopContent
{
	// Fields
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private UnityEngine.UI.Text itemAmountText;
	[SerializeField]
	private TierUnlockedItemsPopup tierUnlockedItemsPopupPrefab;
	private GamePassTier tier;
	private Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnSeeItemsButtonPressed_c__AnonStorey0
	{
		// Fields
		internal TierUnlockedItemsPopup tierUnlockedItemsPopup;

		// Constructors
		public _OnSeeItemsButtonPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierUnlockedItemsRewardInfo();

	// Methods
	public void Initialize(GamePassTier tier, Dictionary<MVWorldObjectDocumentationType, List<MVWorldObjectClient>> tierShopData);
	public void OnSeeItemsButtonPressed();
	public void Activate();
	public void Deactivate();
	private void ChangeBackground(GamePassTier tier);
	private void UpdateItemAmountText();
}

