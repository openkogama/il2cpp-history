/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ChatControllerUGUI : MonoBehaviour
{
	// Fields
	private bool waitForLocalPlayerReady;
	private const string AdminMessageFormat = "<color=#{0}>{1}</color>";
	private const string ChatMessageFromFriend = "<color=#{0}>[{1}]: </color><color=#{2}>{3}</color>";
	private const string ChatMessageFormat = "<color=#{0}>[{1}]: </color><color=#{2}>{3}</color>";
	private const string TeamMessageFormat = "<color=#{0}>[{1}] </color><color=#{2}>{3}: </color><color=#{4}>{5}</color>";
	private const string SayMessageFormat = "<color=#{0}>[{1}] </color><color=#{2}>{3}: </color><color=#{4}>{5}</color>";
	private const string WarningMessageFormat = "<color=#{0}>{1}</color>";
	private bool shouldUpdateFade;
	private float startTime;
	private const float timeBeforeFade = 10f;
	private const float fadeTime = 1f;
	private float currFade;
	private bool currentlyInLobbyState;
	private const float sayHearingDistance = 15f;
	private const int maxLineCount = 50;
	private readonly Queue<UnityEngine.UI.Text> lines;
	[SerializeField]
	private ScrollRect scrollRect;
	[SerializeField]
	private RectTransform inputAreaRoot;
	[SerializeField]
	private RectTransform inputAreaDeactivated;
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private ConsoleDragAndTapHandler enterChatButton;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private SendMessageControl messageController;
	[SerializeField]
	private UnityEngine.UI.Text consoleLinePrefab;
	[SerializeField]
	private RectTransform contentPanel;
	[SerializeField]
	private Color systemMessageColor;
	[SerializeField]
	private Color warningColor;
	[SerializeField]
	private Color killMessageColor;
	[SerializeField]
	private Color chatMessageColor;
	[SerializeField]
	private Color chatMessageDefaultNameColor;
	[SerializeField]
	private Color friendNameColor;
	[SerializeField]
	private Color sayColor;
	[SerializeField]
	private VerticalLayoutGroup textGroup;
	private bool promptRegisterForChat;

	// Constructors
	public ChatControllerUGUI();

	// Methods
	private void Awake();
	private void Start();
	public void SubscribeToMessages();
	private void WarnForSpam();
	public void Initialize();
	private void InitializeReady();
	private void Update();
	private void ChatHotkeyPressed();
	public void ChatFocusChanged(bool enterChatMode);
	public void UpdateFadeTime();
	private void ScrollbarChanged(Vector2 value);
	public void OnLobbyStateChange(bool cursorLocked);
	private void ReceiveMessage(MVGameMsgType msgType, Dictionary<object, object> message);
	private void AddAdminMessage(Dictionary<object, object> data);
	private void AddWarningMessage(Dictionary<object, object> data);
	private void HandleTeamChatMessage(Dictionary<object, object> data);
	private string FormatTeamChatMessage(Dictionary<object, object> data);
	private void HandleSayChatMessage(Dictionary<object, object> data);
	private void OnSayChatMessageHeard(Dictionary<object, object> data);
	private string FormatSayChatMessage(Dictionary<object, object> data);
	private void AddChatLine(Dictionary<object, object> data);
	private void AddLine(string text);
	private UnityEngine.UI.Text InstantiateNewLine();
	private UnityEngine.UI.Text ReuseLine();
	private void OnEnable();
	private void OnDestroy();
	[CompilerGenerated]
	private void _Start_b__35_0(IShortcutKeyRegister x, BaseEventData _);
}

