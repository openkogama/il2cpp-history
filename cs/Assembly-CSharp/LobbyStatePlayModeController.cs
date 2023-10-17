/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LobbyStatePlayModeController : MonoBehaviour
{
	// Fields
	private bool isInLobbyState;
	private bool wantsToEnterPlayState;
	private bool shouldOpenLobbyMenu;
	private DesktopInGameGUIController inGameController;
	private RectTransform lobbyState;
	private InGameMenu inGameMenu;
	private ChatControllerUGUI chatController;

	// Properties
	public bool IsInLobbyState { get; set; }

	// Constructors
	public LobbyStatePlayModeController();

	// Methods
	public void Initialize(DesktopInGameGUIController inGameController, RectTransform lobbyState, InGameMenu inGameMenu, ChatControllerUGUI chatController);
	private void OnCursorLockChanged(bool cursorLocked);
	private void Update();
	private void SetObjectToLobbyState(bool isInLobbyState);
	private void ActivateLobbyState();
	private void DeactivateLobbyState();
	private void EnableLobbyState();
	private void DisableLobbyState();
}

