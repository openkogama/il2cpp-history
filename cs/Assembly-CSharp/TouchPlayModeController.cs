/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouchPlayModeController : ModeControllerBase, IPlayModeUI, IActivateUIElement, ILeaveEditPlayModeHandler, ICanvasController, IAccessoryPopupHandler
{
	// Fields
	private Action<bool> OnLobbyStateChange;
	private PlayModeControlsBase playModeControlsBase;
	private bool inLobbyState;
	private bool rewardReady;
	[SerializeField]
	private UIStack uiStack;
	[SerializeField]
	private GameObject eventSystem;
	[SerializeField]
	private TeamMenu teamMenu;
	[SerializeField]
	private PlayMode3DController playMode3DControllerPrefab;
	[SerializeField]
	private RectTransform lobbyState;
	[SerializeField]
	private AndroidInGameMenu inGameMenu;
	[SerializeField]
	private RectTransform playerListButton;
	[SerializeField]
	private GameObject stackBottom;
	[SerializeField]
	private AndroidChatController chatController;
	[SerializeField]
	private AccessoryShopController accessoryShopController;
	[SerializeField]
	private GameObject notificationManager;
	[SerializeField]
	protected Canvas canvas;
	[SerializeField]
	protected Sprite spinIcon;
	[SerializeField]
	protected DeathPromotionController deathPromotionController;
	[SerializeField]
	private WinningConditionBriefing winningConditionBriefingMenu;
	[SerializeField]
	private ChatBubbleController chatBubbleController;
	[SerializeField]
	private TimeAttackFlagDebriefing timeAttackFlagDebriefing;
	[SerializeField]
	private CanvasScaler canvasScaler;
	[SerializeField]
	private BoostMenuController boosterMenu;
	public UnityAction OnLeaveEditPlayMode;

	// Properties
	public override bool InLobbyState { get; set; }

	// Constructors
	public TouchPlayModeController();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public override void Initialize();
	private void HideUI();
	private void CreateCanvasGUITemp();
	private void LobbyStateChange(bool inLobbyState);
	private void ActivateLobbyState();
	private void DeActivateLobbyState();
	private void OnShowTimeAttackFlagDebriefing(int captureTime);
	private void OnShowTimeAttackFlagCountDown();
	private void OnHideTimeAttackFlagCountDown();
	public override void ShowEUseIcon(ShowUseOption option, int woId = 0);
	public override void HideEUseIcon();
	public override IGUICrossHair GetCrossHair();
	public void Activate(ActivateUIElement element);
	private void LeavePlayMode();
	public void LeaveEditPlayMode();
	public void SetPixelPerfect(bool pixelPerfect);
	public void SetUIReady();
	public void OpenInventoryAtItem(UIPushOption pushOption, AccessoryDataClient displayShopItems);
}

