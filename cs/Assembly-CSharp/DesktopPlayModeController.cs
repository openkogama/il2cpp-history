/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class DesktopPlayModeController : ModeControllerBase, IPlayModeUI, IActivateUIElement, ILeaveEditPlayModeHandler, ICanvasController, IAccessoryPopupHandler
{
	// Fields
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
	private RectTransform adminGameMgmtButton;
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
	private ILockCursorManager lockCursorManager;
	public UnityAction OnLeaveEditPlayMode;
	private RectTransform lobbyStateRect;
	private InGameMenu inGameMenu;
	private GameObject playModeState;

	// Properties
	public ILockCursorManager LockCursorManager { get; }
	public GameObject InGameUIRoot { get; }
	public override bool IsInPauseMenu { get; set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__36_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Initialize_b__36_0(IUIStack handler, BaseEventData data);
	}

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
	private void ActivateAdminButton(bool active);
	private void HideUI();
	private void ToggleLogicVisibility();
	private void CreateGUI();
	private void OnShowTimeAttackFlagDebriefing(int captureTime);
	private void OnShowTimeAttackFlagCountDown();
	private void OnHideTimeAttackFlagCountDown();
	private void OnRoundEnd(IWinningCondition winningCondition);
	private void LeavePlayMode();
	public override void ShowEUseIcon(ShowUseOption option, int woID = 0);
	public override void HideEUseIcon();
	public override IGUICrossHair GetCrossHair();
	public void Activate(ActivateUIElement element);
	public void LeaveEditPlayMode();
	public void SetPixelPerfect(bool pixelPerfect);
	public void SetUIReady();
	public void OpenInventoryAtItem(UIPushOption pushOption, AccessoryDataClient displayShopItems);
	[CompilerGenerated]
	private void _RegisterHotkeys_b__34_0(IShortcutKeyRegister x, BaseEventData y);
}

