/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChatControllerUGUI : ChatControllerBase
{
	// Fields
	[SerializeField]
	private RectTransform inputAreaDeactivated;
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private Color killMessageColor;
	[SerializeField]
	private VerticalLayoutGroup textGroup;
	private bool waitForLocalPlayerReady;
	private bool shouldUpdateFade;
	private float startTime;
	private const float TimeBeforeFade = 10f;
	private const float FadeTime = 1f;
	private float currFade;
	private bool currentlyInLobbyState;

	// Constructors
	public ChatControllerUGUI();

	// Methods
	protected override void DoAwake();
	protected override void DoStart();
	public void SubscribeToMessages();
	private void WarnForSpam();
	public void Initialize();
	private void InitializeReady();
	protected override void UpdateLockedState();
	private void Update();
	private void ChatHotkeyPressed();
	public void ChatFocusChanged(bool enterChatMode);
	public void UpdateFadeTime();
	private void ScrollbarChanged(Vector2 value);
	public void OnInGameMenuStateChange(bool cursorLocked);
	protected override void AddLine(string text);
	private void OnEnable();
	[CompilerGenerated]
	private void _DoStart_b__13_0(IShortcutKeyRegister x, BaseEventData _);
}

