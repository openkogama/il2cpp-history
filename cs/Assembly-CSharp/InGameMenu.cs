/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InGameMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject respawnButton;
	[SerializeField]
	private GameObject touristRegisterButton;
	[SerializeField]
	private TimedPlayReward playReward;
	[SerializeField]
	private AdOfferGold adOfferGold;
	[SerializeField]
	private Image inGameMenuBlockingOverlay;
	[SerializeField]
	private GameObject winningConditionDebriefing;
	[SerializeField]
	private GamePassesUI gamePassesUIPrefab;
	[SerializeField]
	private GameObject claimGoldRewardPopupPrefab;
	[SerializeField]
	private GameObject accessoryShopButton;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	[SerializeField]
	private GameObject adminObserveButton;
	private GamePassesUI gamePassesUI;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass14_0
	{
		// Fields
		public GameObject claimGoldRewardPopup;

		// Constructors
		public __c__DisplayClass14_0();

		// Methods
		internal void _OnEnable_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public InGameMenu();

	// Methods
	public void Initialize();
	private void Update();
	private void OnEnable();
}

