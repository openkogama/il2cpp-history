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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass32_0
	{
		// Fields
		public SpawnRoleSelectionSkillMenu skillMenu;

		// Constructors
		public __c__DisplayClass32_0();

		// Methods
		internal void _OnPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass33_0
	{
		// Fields
		public SpawnRoleEditorMenu spawnRoleMenu;

		// Constructors
		public __c__DisplayClass33_0();

		// Methods
		internal void _OnEditPressed_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__36_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__38_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__43_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__50_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__51_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__51_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__52_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__52_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__53_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__53_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnPlayPressed_b__36_0(IModalPopupCreator x, BaseEventData y);
		internal void _Close_b__38_0(IUIStack handler, BaseEventData data);
		internal void _Update_b__43_0(IUIStack x, BaseEventData y);
		internal void _ShowAd_b__50_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__51_0(IModalPopupCreator x, BaseEventData y);
		internal void _RewardedAdCallback_b__51_1(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__52_0(IModalPopupCreator x, BaseEventData y);
		internal void _PreviewTier_b__52_1(IModalPopupCreator x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__53_0(IUIStack x, BaseEventData y);
		internal void _OnPlayerPlanetDataUpdated_b__53_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass53_0
	{
		// Fields
		public SpawnRoleUnlockedPopupController spawnRoleUnlockPopup;

		// Constructors
		public __c__DisplayClass53_0();

		// Methods
		internal void _OnPlayerPlanetDataUpdated_b__2(IUIStack x, BaseEventData y);
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
}

