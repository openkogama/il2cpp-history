/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InGameMenuStatePlayModeController : MonoBehaviour
{
	// Fields
	private bool isInMenu;
	private DesktopInGameGUIController inGameController;
	private RectTransform lobbyMenu;
	private InGameMenu inGameMenu;
	private ChatControllerUGUI chatController;

	// Constructors
	public InGameMenuStatePlayModeController();

	// Methods
	public void Initialize(DesktopInGameGUIController inGameController, RectTransform lobbyMenuTransform, InGameMenu inGameMenu, ChatControllerUGUI chatController);
	private void UpdateInGameMenuState(bool isEnteringMenu);
	private void SetObjectToInGameMenuState(bool isInMenu);
	private void ActivateInGameMenuState();
	private void DeactivateInGameMenuState();
	private void EnableLobbyState();
	private void DisableLobbyState();
}

