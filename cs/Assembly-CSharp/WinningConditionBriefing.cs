/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionBriefing : LobbyFlowMenu
{
	// Fields
	[SerializeField]
	private GameObject winningConditionImageBackground;
	[SerializeField]
	private ProgressBar scoreProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text scoreText;
	[SerializeField]
	private UnityEngine.UI.Text scoreSlash;
	[SerializeField]
	private UnityEngine.UI.Text scoreLimit;
	[SerializeField]
	private GameObject scoreGameObject;
	[SerializeField]
	private GameObject reachTheFlagPresent;
	[SerializeField]
	private UnityEngine.UI.Text flagScoreText;
	[SerializeField]
	private GameObject progressableWinningConditionPresent;
	[SerializeField]
	private ProgressBar roundTimeProgressBar;
	[SerializeField]
	private UnityEngine.UI.Text roundTimeText;
	[SerializeField]
	private Image roundTimeIconPrefab;
	[SerializeField]
	private UnityEngine.UI.Text winningConditionHeader;
	[SerializeField]
	private ScoreBoardController scoreBoardController;
	[SerializeField]
	private List<WinningConditionBriefingDef> winningConditionMapping;
	[SerializeField]
	private PlayButton DesktopPlayButtonPrefab;
	[SerializeField]
	private PlayButtonTouch AndroidPlayButtonPrefab;
	private WinningConditionType winConType;
	private bool isInitialized;
	private Action initializeCallback;
	private Image winConImage;
	private GameObject playButton;
	private PlayButton desktopPlayButton;
	private PlayButtonTouch androidPlayButton;
	private readonly Dictionary<WinningConditionType, string> headerMap;
	private Vector2 screensize;

	// Properties
	protected override LobbyFlowMenuType MenuType { get; }

	// Nested types
	[Serializable]
	private class WinningConditionBriefingDef
	{
		// Fields
		public WinningConditionType type;
		public Image scoreIconPrefab;
		public Image winConImagePrefab;

		// Constructors
		public WinningConditionBriefingDef();
	}

	[CompilerGenerated]
	private sealed class _FixAspectRatioDelay_d__34 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public WinningConditionBriefing __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FixAspectRatioDelay_d__34(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass37_0
	{
		// Fields
		public SpawnRoleMenu spawnRoleMenu;

		// Constructors
		public __c__DisplayClass37_0();

		// Methods
		internal void _OnPlayPressed_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__37_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnPlayPressed_b__37_0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public WinningConditionBriefing();

	// Methods
	public void Initialize(WinningConditionType winConType);
	public override void Start();
	private void SetupBriefing();
	private void Update();
	protected override void OnDestroy();
	[IteratorStateMachine(typeof(_FixAspectRatioDelay_d__34))]
	private IEnumerator FixAspectRatioDelay();
	private int GetHighScore(WinningConditionType winningConditionType);
	private void CreatePlayButton();
	private void OnPlayPressed();
}

