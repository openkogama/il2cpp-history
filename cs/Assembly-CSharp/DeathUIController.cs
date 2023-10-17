/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DeathUIController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text deathReason;
	[SerializeField]
	private NotificationFade fader;
	[SerializeField]
	private TierUnlockedPopupController tierUnlockedPopupControllerPrefab;
	[SerializeField]
	private DeathUIBoostMenuController boostMenuPrefab;
	[SerializeField]
	private ReviveUIHandler reviveHandler;
	[SerializeField]
	private ReviveUIHandlerBoosts reviveHandlerBoosts;
	[SerializeField]
	private TierOnDeathProgress tierOnDeathProgress;
	[SerializeField]
	private GameObject claimGoldRewardPopupPrefab;
	[SerializeField]
	private TierBoostStateHandler tierHandler;
	[SerializeField]
	private GameObject invisibleBlocker;
	[SerializeField]
	private GameObject deathMessageBar;
	private float waitTime;
	private bool isDeathBriefActive;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public ReviveUIHandlerBoosts revivePopup;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal void _ShowReviveMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_1
	{
		// Fields
		public ReviveUIHandler revivePopup;

		// Constructors
		public __c__DisplayClass20_1();

		// Methods
		internal void _ShowReviveMenu_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static UnityAction __9__20_2;
		public static ExecuteEvents.EventFunction<IUIStack> __9__21_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__22_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__31_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ShowReviveMenu_b__20_2();
		internal void _ReboostNotClicked_b__21_0(IUIStack x, BaseEventData y);
		internal void _ReviveNotClicked_b__22_0(IUIStack x, BaseEventData y);
		internal void _ShowDeadmodeUI_b__31_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass26_0
	{
		// Fields
		public DeathUIBoostMenuController boostMenu;

		// Constructors
		public __c__DisplayClass26_0();

		// Methods
		internal void _ShowBoostMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass28_0
	{
		// Fields
		public TierUnlockedPopupController tierUnlockedPopupController;
		public DeathUIController __4__this;

		// Constructors
		public __c__DisplayClass28_0();

		// Methods
		internal void _ShowTierUnlockedPopup_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass30_0
	{
		// Fields
		public DeathUIController __4__this;
		public GameObject claimGoldRewardPopup;

		// Constructors
		public __c__DisplayClass30_0();

		// Methods
		internal void _ShowingClaimGold_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public DeathUIController();

	// Methods
	private void Awake();
	private void Initialize();
	private void OnAvatarStateChanged(SpawnRoleModeType mode);
	private void EndDeathBriefing();
	private void Update();
	private void TierProgress();
	private void OnDestroy();
	private void ShowReviveMenu(bool reboostOnly);
	private void ReboostNotClicked();
	private void ReviveNotClicked();
	private void NotReviving();
	private void OnFinishPreviewTier(bool openBoostMenu);
	private void OnDisable();
	private void ShowBoostMenu();
	private void OnFadeFinished();
	private void ShowTierUnlockedPopup(bool wasPurchased, bool wasTempUnlocked);
	private void OnTierUnlockedPop();
	private bool ShowingClaimGold();
	private void ShowDeadmodeUI();
	private bool ShouldShowTierReward(GamePassTier tierToShow);
	private void OnLocalAvatarSuicide();
	private void OnLocalPlayerKilled(int localPlayerActorNr, int dmgDealerActorNr, PlayerKilledByType damageType);
	private void SendCurrentProgressNotification();
	private void StartDeathBriefing(string deathText);
	private void OnRoundEnd(IWinningCondition winningCondition);
	public void OnPressPlay();
	[CompilerGenerated]
	private void _StartDeathBriefing_b__36_0(IUIStack x, BaseEventData y);
}

