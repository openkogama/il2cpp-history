/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GamePassesSpawnRoleRewardInfo : MonoBehaviour, IGamePassShopContent
{
	// Fields
	[SerializeField]
	private Image spawnRoleTeamImage;
	[SerializeField]
	private RawImage spawnRoleImage;
	[SerializeField]
	private UnityEngine.UI.Text spawnRoleCostAmount;
	[SerializeField]
	private GameObject spawnRoleEditButton;
	[SerializeField]
	private GameObject lockedUI;
	[SerializeField]
	private GameObject unlockedUI;
	[SerializeField]
	private GameObject freeTryUI;
	[SerializeField]
	private ContinueButtonHandler continueButtonHandler;
	[SerializeField]
	private GamePassesTextBubble lockedTipTextBubble;
	[SerializeField]
	private SpawnRoleEditorMenu spawnRoleEditorMenuPrefab;
	[SerializeField]
	private SpawnRolePreviewer spawnRolePreviewerPrefab;
	[SerializeField]
	private SpawnRoleSelectionSkillMenu skillMenuPrefab;
	[SerializeField]
	private SpawnRoleUnlockedPopupController spawnRoleUnlockPopupPrefab;
	[SerializeField]
	private GameObject backgroundTier1;
	[SerializeField]
	private GameObject backgroundTier2;
	[SerializeField]
	private GameObject backgroundTier3;
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	[SerializeField]
	private Image buttonAdImage;
	private SpawnRolePreviewer spawnRolePreviewer;
	private int spawnRoleIndex;
	private MVAvatarSpawnRoleCreator spawnRole;
	private int woid;
	private GamePassTier tierRequirment;
	private MVTeam team;
	private GameObject spawnRolePreviewObject;
	private bool awaitingSpawn;
	private bool enterPlayWhenPlayerCanSpawn;
	private bool isWaitingForFreeTryTier;
	private bool haveShownFreeTryUnlock;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache3;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache4;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache5;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache6;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache7;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache8;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache9;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnPressed_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleSelectionSkillMenu skillMenu;

		// Constructors
		public _OnPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnEditPressed_c__AnonStorey1
	{
		// Fields
		internal SpawnRoleEditorMenu spawnRoleMenu;

		// Constructors
		public _OnEditPressed_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnPlayerPlanetDataUpdated_c__AnonStorey2
	{
		// Fields
		internal SpawnRoleUnlockedPopupController spawnRoleUnlockPopup;

		// Constructors
		public _OnPlayerPlanetDataUpdated_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public GamePassesSpawnRoleRewardInfo();

	// Methods
	private void OnDestroy();
	public void Initialize(int spawnRoleIndex, GameObject spawnRolePreviewObject, MVAvatarSpawnRoleCreator spawnRole, GamePassTier tierRequirment);
	public void OnPressed();
	public void OnEditPressed();
	public void OnLockedPressed();
	public void OnPressFreePlay();
	public void OnPlayPressed();
	private void AwaitSpawnThenClose();
	private void Close(int spawnRoleID = 0);
	private void HandleTeamSwitching();
	private void StartPlaying();
	public void Activate();
	public void Deactivate();
	private void Update();
	private Color GetTeamRequirementColor(MVTeam team);
	private void ChangeBackground(GamePassTier tier);
	private void SetupPreviewImage(GameObject spawnRolePreviewObject);
	private void OnSpawnRoleBodyUpdate();
	private int CalculateSpawnRoleCost();
	private void HandleLockedUIVisibility(bool playerHasUnlockedTier, bool isTierUnlockable);
	private void ShowAd();
	private void RewardedAdCallback(RewardedAdResult result);
	private void PreviewTier();
	private void OnPlayerPlanetDataUpdated();
	private bool CanSpawn();
	private bool CanShowFreeTry();
	[CompilerGenerated]
	private static void _OnPlayPressed_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _Close_m__1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _Update_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _ShowAd_m__3(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__4(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _RewardedAdCallback_m__5(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__6(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _PreviewTier_m__7(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__8(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPlayerPlanetDataUpdated_m__9(IUIStack x, BaseEventData y);
}

