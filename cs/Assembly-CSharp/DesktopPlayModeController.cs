/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopPlayModeController : ModeControllerBase, IPlayModeUI, IActivateUIElement, ILeaveEditPlayModeHandler, ICanvasController, IAccessoryPopupHandler
{
	// Fields
	private ILockCursorManager lockCursorManager;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private TeamMenu teamMenu;
	[SerializeField]
	private DesktopInGameGUIController inGameController;
	[SerializeField]
	private RectTransform lobbyState;
	[SerializeField]
	private InGameMenu inGameMenuPrefab;
	[SerializeField]
	private RectTransform playerListButton;
	[SerializeField]
	private RectTransform notificationsManager;
	[SerializeField]
	private GameObject stackBottom;
	[SerializeField]
	private ChatControllerUGUI chatController;
	[SerializeField]
	private AccessoryShopController accessoryShopController;
	[SerializeField]
	private Canvas canvas;
	[SerializeField]
	private DeathPromotionController deathPromotionController;
	[SerializeField]
	private GameObject fullscreenPlayModeStateTransform;
	[SerializeField]
	private WinningConditionBriefing winningConditionBriefingMenu;
	[SerializeField]
	private LobbyStatePlayModeController lobbyStatePlayModeController;
	[SerializeField]
	private ChatBubbleController chatBubbleController;
	[SerializeField]
	private TimeAttackFlagDebriefing timeAttackFlagDebriefing;
	[SerializeField]
	private GoldPurchasedTracker goldPurchasedTracker;
	[SerializeField]
	private BoostMenuController boosterMenu;
	private RectTransform lobbyStateRect;
	private InGameMenu inGameMenu;
	public UnityAction OnLeaveEditPlayMode;
	private GameObject playModeState;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	public GameObject InGameUIRoot { get; }
	public ILockCursorManager LockCursorManager { get; }
	public bool InLobbyState { get; set; }

	// Constructors
	public DesktopPlayModeController();

	// Methods
	private void Awake();
	private void Start();
	private void Update();
	protected void OnDestroy();
	private void HandleInput();
	private void RegisterHotkeys();
	private void Respawn();
	public override void Initialize();
	private void HideUI();
	private void ToggleLogicVisibility();
	private void ToggleHD();
	private void CreateGUI();
	private void OnShowTimeAttackFlagDebriefing(int captureTime);
	private void OnShowTimeAttackFlagCountDown();
	private void OnHideTimeAttackFlagCountDown();
	private void OnRoundEnd(IWinningCondition winningCondition);
	private void LeavePlayMode();
	public void ShowEUseIcon(ShowUseOption option, int woID = 0);
	public void HideEUseIcon();
	public IGUICrossHair GetCrossHair();
	public void Activate(ActivateUIElement element);
	public void LeaveEditPlayMode();
	public void SetPixelPerfect(bool pixelPerfect);
	public void SetUIReady();
	public void OpenInventoryAtItem(UIPushOption pushOption, AccessoryDataClient displayShopItems);
	[CompilerGenerated]
	private void _RegisterHotkeys_m__0(IShortcutKeyRegister x, BaseEventData y);
	[CompilerGenerated]
	private static void _Initialize_m__1(IUIStack handler, BaseEventData data);
}

