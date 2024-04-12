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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private bool isInAd;

	// Properties
	public bool ShouldPop { set; }
	private bool IsRoundEnded { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__30_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__37_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__38_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__39_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _PopThenLockCursor_b__30_0(IUIStack x, BaseEventData y);
		internal void _CreateTeamMenu_b__37_0(IUIStack x, BaseEventData y);
		internal void _CreateSpawnRoleSelectionMenu_b__38_0(IUIStack x, BaseEventData y);
		internal void _CreateBriefing_b__39_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass26_0
	{
		// Fields
		public LobbyStateButton __4__this;
		public bool hasGameWinningCondition;
		public WinningConditionType winCon;

		// Constructors
		public __c__DisplayClass26_0();

		// Methods
		internal void _OnPressPlay_b__0(InterstitialAdResult result);
		internal void _OnPressPlay_b__1(InterstitialAdResult result);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass27_0
	{
		// Fields
		public LobbyStateButton __4__this;
		public Action<InterstitialAdResult> callback;

		// Constructors
		public __c__DisplayClass27_0();

		// Methods
		internal void _RequestAdWithCallback_b__0(InterstitialAdResult result);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass37_0
	{
		// Fields
		public TeamMenu newTeamMenu;

		// Constructors
		public __c__DisplayClass37_0();

		// Methods
		internal void _CreateTeamMenu_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass38_0
	{
		// Fields
		public SpawnRoleMenu spawnRoleMenu;

		// Constructors
		public __c__DisplayClass38_0();

		// Methods
		internal void _CreateSpawnRoleSelectionMenu_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass39_0
	{
		// Fields
		public WinningConditionBriefing winConMenu;

		// Constructors
		public __c__DisplayClass39_0();

		// Methods
		internal void _CreateBriefing_b__1(IUIStack x, BaseEventData y);
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
}

