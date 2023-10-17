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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private const string PrintRegion = "/region";
	private const string pause = "/pause";
	private const string resume = "/resume";
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

	// Properties
	public Color SayChatColor { set; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IToggleFps> __9__55_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _HandleChatCommands_b__55_0(IToggleFps x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OOMTest_d__58 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public SendMessageControl __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OOMTest_d__58(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public SendMessageControl();

	// Methods
	private void Awake();
	public void InitializeToSayChat(bool sayChatVisible);
	private void OnDestroy();
	private void Send();
	public void OnInputFieldChange();
	private void EnforceCharacterLimit();
	private void SendChatMessage(string chatMsg);
	private bool HandleChatCommands(string chatMsg);
	[IteratorStateMachine(typeof(_OOMTest_d__58))]
	private IEnumerator OOMTest();
	private void OnAdShownCallback(InterstitialAdResult interstitialResult);
	private void OnAdShownCallback(RewardedAdResult result);
	private static void ShowBuildInformation();
	private static void ToggleHD();
	public static string CreateHelpTxt();
	public static string CreateChatCommandsHelpTxt();
	private static void SanitizeMessage(ref string message, string tagToSanitize);
	private bool HandleChatSwapCommand(string message);
	private void SwapChat(MVGameMsgType newChat);
	private void ActivateAllChat();
	private void ActivateTeamChat();
	private void ActivateSayChat(bool sayChatVisible);
	private void ChangeTeamChatColor();
	public void SetToNextChat();
	private MVGameMsgType GetNextChat();
	public void OnInputFocusChange(bool isFocused);
	private void SetSayChatBubbleVisibleIfActive(bool visible);
	private void SetSayChatBubbleVisible(bool visible);
}

