/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostMenuItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject boostUnlockedGlow;
	[SerializeField]
	private GameObject boostActiveUI;
	[SerializeField]
	private RectTransform boostActiveIcon;
	[SerializeField]
	private NotificationFade boostActiveIconFader;
	[SerializeField]
	private CanvasGroup boostActiveIconCanvasGroup;
	[SerializeField]
	private RectTransform boostTypeImageParent;
	[SerializeField]
	private UnityEngine.UI.Button getWithAdOrSubscriptionButton;
	[SerializeField]
	private GameObject buttonIcon;
	[SerializeField]
	private UnityEngine.UI.Button getWithAdDisabled;
	[SerializeField]
	private UnityEngine.UI.Button getWithGold;
	[SerializeField]
	private UnityEngine.UI.Text boostDescription;
	[SerializeField]
	private UnityEngine.UI.Text timeLeftText;
	[SerializeField]
	private UnityEngine.UI.Text priceText;
	[SerializeField]
	private BoostPurchasePopup purchasePopupPrefab;
	[SerializeField]
	private GameObject boostTouristInformation;
	[SerializeField]
	private List<BoosterDef> boosterList;
	[SerializeField]
	private BoostImageController boostImageController;
	[SerializeField]
	private AnimationCurve activeIconScaleEffect;
	[SerializeField]
	private float activeIconScaleEffectDuration;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private float activeIconScaleEffectStartTime;
	private Boost boost;
	private int price;

	// Nested types
	[Serializable]
	private struct BoosterDef
	{
		// Fields
		public BoostType type;
		public GameObject iconPrefab;
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass29_0
	{
		// Fields
		public GameObject informationPopup;

		// Constructors
		public __c__DisplayClass29_0();

		// Methods
		internal void _OnPurchaseBoostPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass29_1
	{
		// Fields
		public BoostPurchasePopup boostPurchasePopup;

		// Constructors
		public __c__DisplayClass29_1();

		// Methods
		internal void _OnPurchaseBoostPressed_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public BoostMenuItem();

	// Methods
	public void Initialize(Boost boost, bool boostUnlocked);
	private void Update();
	private void SetBoostUIUnlocked(bool boostUnlocked);
	private void ActivateActiveBoostIconEffect();
	public void OnUnlockBoostWithSubscriptionClicked();
	public void OnUnlockBoostWithAdClicked();
	public void OnPurchaseBoostPressed();
	private int GetBoostPrice();
	private void SetBoostActive(bool isBoostActive);
	private void BoostChanged();
	private void BoostUnlockedResponse(bool boostUnlocked);
	private void OnPurchaseSuccessful();
	private void OnDestroy();
	[CompilerGenerated]
	private void _OnUnlockBoostWithAdClicked_b__28_0(IBoostAdController x, BaseEventData y);
}

