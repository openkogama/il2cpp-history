/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ChatControllerBase : MonoBehaviour
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private RectTransform _ContentPanel_k__BackingField;
	[CompilerGenerated]
	[SerializeField]
	private ScrollRect _ScrollRect_k__BackingField;
	[CompilerGenerated]
	[SerializeField]
	private RectTransform _InputAreaRoot_k__BackingField;
	[CompilerGenerated]
	[SerializeField]
	private ConsoleDragAndTapHandler _EnterChatButton_k__BackingField;
	[CompilerGenerated]
	[SerializeField]
	private SendMessageControl _MessageController_k__BackingField;
	[SerializeField]
	private UnityEngine.UI.Text consoleLinePrefab;
	[SerializeField]
	private Color systemMessageColor;
	[SerializeField]
	private Color warningColor;
	[SerializeField]
	private Color chatMessageColor;
	[SerializeField]
	private Color chatMessageDefaultNameColor;
	[SerializeField]
	protected Color sayColor;
	[SerializeField]
	private Color friendNameColor;
	private readonly Queue<UnityEngine.UI.Text> lines;
	private const int MaxLineCount = 50;
	private bool promptRegisterForChat;
	protected bool chatLocked;
	private const bool HideChat = true;

	// Properties
	public RectTransform ContentPanel { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public ScrollRect ScrollRect { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public RectTransform InputAreaRoot { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public ConsoleDragAndTapHandler EnterChatButton { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public SendMessageControl MessageController { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	protected ChatControllerBase();

	// Methods
	private void Awake();
	protected virtual void DoAwake();
	private void Start();
	protected virtual void DoStart();
	protected virtual void UpdateLockedState();
	protected virtual void AddLine(string text);
	private UnityEngine.UI.Text ReuseLine();
	private UnityEngine.UI.Text InstantiateNewLine();
	protected void ReceiveMessage(MVGameMsgType msgType, Dictionary<object, object> message);
	private void AddAdminMessage(Dictionary<object, object> data);
	private void AddWarningMessage(Dictionary<object, object> data);
	private void HandleTeamChatMessage(Dictionary<object, object> data);
	private string FormatSayChatMessage(Dictionary<object, object> data);
	private void AddChatLine(Dictionary<object, object> data);
	private string FormatTeamChatMessage(Dictionary<object, object> data);
	private void HandleSayChatMessage(Dictionary<object, object> data);
	protected void OnSayChatMessageHeard(Dictionary<object, object> data);
	private void OnDestroy();
	protected void PromptRegisterForChatIfApplicable();
}

