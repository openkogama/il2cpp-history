/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using Assets.Scripts.AdIntegration;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SendMessageControl : MonoBehaviour
{
	// Fields
	public UnityAction<bool> DoSend;
	public UnityAction SpamWarning;
	private const string showPerGameData = "/gp";
	private const string resetPlayerPlanetData = "/rgp";
	private const string helpString = "/h";
	private const string fps = "/f";
	private const string resolution = "/r";
	private const string mathTest = "/m";
	private const string chatCommands = "/c";
	private const string removeUI = "/ru";
	private const string switchAvatarTest = "/sat";
	private const string oomTest = "/oom";
	private const string urlTest = "/url";
	private const string testError = "/ter";
	private const string testException = "/tex";
	private const string testDateTime = "/dt";
	private const string enableHD = "/hd";
	private const string buildInformation = "/build";
	private const string exportTool = "/export";
	private const string exportSelfTool = "/exportself";
	private const string chatChangeCommandAll = "/all";
	private const string chatChangeCommandTeam = "/team";
	private const string chatChangeCommandSay = "/say";
	private const string allChat = "[ All ]";
	private const string teamChat = "[ Team ]";
	private const string sayChat = "[ Say ]";
	private const string startHeadShake = "/no";
	private const string startNod = "/yes";
	private const string startWave = "/wave";
	private const string fyberTestSuite = "/fyber";
	private const string showAd = "/ad";
	[SerializeField]
	private UnityEngine.UI.Text currentChat;
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private float intervalForMessages;
	[SerializeField]
	private int maxMessagesPerInterval;
	private Regex whiteSpaceCheck;
	private int frameCountSent;
	private const float sendMessageDelay = 0.01f;
	private float sendMessageCooldownTime;
	private List<float> spamList;
	private MVGameMsgType selectedChat;
	private bool isSayChatIconVisible;
	private Color sayChatColor;
	private List<byte> oomBytes;
	private int bytesPerFrame;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IToggleFps> __f__am_cache0;

	// Properties
	public Color SayChatColor { set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OOMTest_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal byte[] _newBytes___1;
		internal SendMessageControl _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OOMTest_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public SendMessageControl();

	// Methods
	private void Awake();
	public void InitializeToSayChat();
	private void OnDestroy();
	private void Send();
	public void OnInputFieldChange();
	private void EnforceCharacterLimit();
	private void SendChatMessage(string chatMsg);
	private bool HandleChatCommands(string chatMsg);
	[DebuggerHidden]
	private IEnumerator OOMTest();
	private void OnAdShownCallback(InterstitialAdResult interstitialResult);
	private void OnAdShownCallback(RewardedAdResult result);
	private void ShowBuildInformation();
	private void ToggleHD();
	public static string CreateHelpTxt();
	public static string CreateChatCommandsHelpTxt();
	private void SanitizeMessage(ref string message, string tagToSanitize);
	private bool HandleChatSwapCommand(string message);
	private void SwapChat(MVGameMsgType newChat);
	private void ActivateAllChat();
	private void ActivateTeamChat();
	private void ActivateSayChat();
	private void ChangeTeamChatColor();
	public void SetToNextChat();
	private MVGameMsgType GetNextChat();
	public void OnInputFocusChange(bool isFocused);
	[CompilerGenerated]
	private static void _HandleChatCommands_m__0(IToggleFps x, BaseEventData y);
}

