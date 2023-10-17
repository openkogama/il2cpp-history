/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AndroidInGameMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GameObject touristRegisterButton;
	[SerializeField]
	private TimedPlayReward playReward;
	[SerializeField]
	private GameObject winningConditionDebriefing;
	[SerializeField]
	private GamePassesUI gamePassesUIPrefab;
	[SerializeField]
	private FreeGoldAndroid rewardedAd;
	[SerializeField]
	private GameObject claimGoldRewardPopupPrefab;
	[SerializeField]
	private GameObject accessoryShopButton;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private GamePassesUI gamePassesUI;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public GameObject claimGoldRewardPopup;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal void _OnEnable_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AndroidInGameMenu();

	// Methods
	public void Initialize();
	private void OnEnable();
}

