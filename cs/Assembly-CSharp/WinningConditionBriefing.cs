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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private PlayButtonMobile AndroidPlayButtonPrefab;
	private WinningConditionType winConType;
	private bool isInitialized;
	private Action initializeCallback;
	private Image winConImage;
	private GameObject playButton;
	private PlayButton desktopPlayButton;
	private PlayButtonMobile androidPlayButton;
	private readonly Dictionary<WinningConditionType, string> headerMap;
	private Vector2 screensize;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

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
	private sealed class _FixAspectRatioDelay_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal WinningConditionBriefing _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FixAspectRatioDelay_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _OnPlayPressed_c__AnonStorey1
	{
		// Fields
		internal SpawnRoleMenu spawnRoleMenu;

		// Constructors
		public _OnPlayPressed_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public WinningConditionBriefing();

	// Methods
	public void Initialize(WinningConditionType winConType);
	public override void Start();
	private void SetupBriefing();
	private void Update();
	protected override void OnDestroy();
	[DebuggerHidden]
	private IEnumerator FixAspectRatioDelay();
	private int GetHighScore(WinningConditionType winningConditionType);
	private void CreatePlayButton();
	private void OnPlayPressed();
	[CompilerGenerated]
	private static void _OnPlayPressed_m__0(IUIStack x, BaseEventData y);
}

