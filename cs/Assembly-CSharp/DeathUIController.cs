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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowReviveMenu_c__AnonStorey0
	{
		// Fields
		internal ReviveUIHandlerBoosts revivePopup;

		// Constructors
		public _ShowReviveMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowReviveMenu_c__AnonStorey1
	{
		// Fields
		internal ReviveUIHandler revivePopup;
		private static UnityAction __f__am_cache0;

		// Constructors
		public _ShowReviveMenu_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		private static void __m__1();
	}

	[CompilerGenerated]
	private sealed class _ShowBoostMenu_c__AnonStorey2
	{
		// Fields
		internal DeathUIBoostMenuController boostMenu;

		// Constructors
		public _ShowBoostMenu_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTierUnlockedPopup_c__AnonStorey3
	{
		// Fields
		internal TierUnlockedPopupController tierUnlockedPopupController;
		internal DeathUIController _this;

		// Constructors
		public _ShowTierUnlockedPopup_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowingClaimGold_c__AnonStorey4
	{
		// Fields
		internal GameObject claimGoldRewardPopup;
		internal DeathUIController _this;

		// Constructors
		public _ShowingClaimGold_c__AnonStorey4();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	private static void _ReboostNotClicked_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ReviveNotClicked_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ShowDeadmodeUI_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _StartDeathBriefing_m__3(IUIStack x, BaseEventData y);
}

