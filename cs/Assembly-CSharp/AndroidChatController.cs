/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AndroidChatController : ChatControllerBase
{
	// Fields
	[SerializeField]
	private ChatConsoleModes chatConsoleModes;
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private RectTransform expandChat;
	[SerializeField]
	private RectTransform minimizeChat;

	// Constructors
	public AndroidChatController();

	// Methods
	public void Initialize();
	public void OnChatModeTapped();
	public void OnLobbyStateChange(bool inLobbyState);
	private void SetMode(ChatConsoleMode chatConsoleMode);
}

