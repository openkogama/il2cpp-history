/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LobbyStateButton : MonoBehaviour, IPointerDownHandler, IPointerEnterHandler, IPointerExitHandler
{
	// Fields
	[SerializeField]
	private TeamMenu teamMenuPrefab;
	[SerializeField]
	private WinningConditionBriefing winningConditionBriefingMenu;
	[SerializeField]
	private SpawnRoleMenu spawnRoleMenuPrefab;
	[SerializeField]
	private Image countdownFill;
	[SerializeField]
	private Button lobbyStateButton;
	[SerializeField]
	private LevelRewardsLobbyState levelRewards;
	[SerializeField]
	private ContinueButtonLockCursor continueScreenPrefab;
	[SerializeField]
	private Image playButtonImage;
	[SerializeField]
	private Sprite watchAdPlayButtonImageSprite;
	[SerializeField]
	private Sprite playButtonImageSprite;
	[SerializeField]
	private GamePassesTextBubble signupToRemoveAds;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private bool shouldUpdateFillImage;
	private bool isMoveOverButton;
	private bool showingAdSprite;
	private bool shouldPop;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache3;

	// Properties
	public bool ShouldPop { set; }
	private bool IsRoundEnded { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnPressPlay_c__AnonStorey0
	{
		// Fields
		internal bool hasGameWinningCondition;
		internal WinningConditionType winCon;
		internal LobbyStateButton _this;

		// Constructors
		public _OnPressPlay_c__AnonStorey0();

		// Methods
		internal void __m__0(InterstitialAdResult result);
		internal void __m__1(InterstitialAdResult result);
	}

	[CompilerGenerated]
	private sealed class _CreateTeamMenu_c__AnonStorey1
	{
		// Fields
		internal TeamMenu newTeamMenu;

		// Constructors
		public _CreateTeamMenu_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreateSpawnRoleSelectionMenu_c__AnonStorey2
	{
		// Fields
		internal SpawnRoleMenu spawnRoleMenu;

		// Constructors
		public _CreateSpawnRoleSelectionMenu_c__AnonStorey2();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreateBriefing_c__AnonStorey3
	{
		// Fields
		internal WinningConditionBriefing winConMenu;

		// Constructors
		public _CreateBriefing_c__AnonStorey3();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public LobbyStateButton();

	// Methods
	private void Start();
	private void Update();
	public void OnPointerDown(PointerEventData eventData);
	public void OnPointerEnter(PointerEventData eventData);
	public void OnPointerExit(PointerEventData eventData);
	public void OnPressPlay();
	private void RequestAdWithCallback(Action<InterstitialAdResult> callback);
	private void OnShowAdFinishedSpawnRolesPresent(InterstitialAdResult result);
	private void OnShowAdFinishedEnterPlaymode(InterstitialAdResult result);
	private void PopThenLockCursor();
	private void DoLockCursor();
	public void CancelEnterPlay();
	private void OnCountDownEnd();
	private void StartPlaying();
	private void LockCursor();
	private void OnEnable();
	private void CreateTeamMenu();
	private void CreateSpawnRoleSelectionMenu();
	private void CreateBriefing(WinningConditionType winCon);
	[CompilerGenerated]
	private static void _PopThenLockCursor_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _CreateTeamMenu_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _CreateSpawnRoleSelectionMenu_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _CreateBriefing_m__3(IUIStack x, BaseEventData y);
}

