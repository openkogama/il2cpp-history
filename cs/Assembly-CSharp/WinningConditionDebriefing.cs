/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionDebriefing : MonoBehaviour, IDebriefing
{
	// Fields
	[SerializeField]
	private CanvasGroup group;
	[SerializeField]
	private DebriefingWinnerGUI playerWinPrefab;
	[SerializeField]
	private DebriefingWinnerGUI teamWinPrefab;
	[SerializeField]
	private DebriefingWinnerGUI noWinnerPrefab;
	private DebriefingWinnerGUI debriefing;
	[SerializeField]
	private AvatarCapture captureCameraPrefab;
	private AvatarCapture captureCamera;
	private float fadeTime;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowDebriefingCoroutine_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal WinningConditionDebriefing _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ShowDebriefingCoroutine_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
		internal void __m__0(float t);
		internal void __m__1(float t);
	}

	[CompilerGenerated]
	private sealed class _WaitForFadeOut_c__Iterator1 : IEnumerator<object>
	{
		// Fields
		internal WinningConditionDebriefing _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _WaitForFadeOut_c__Iterator1();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public WinningConditionDebriefing();

	// Methods
	private void Start();
	private void OnWinningConditionReceived(IWinningCondition winningCondition);
	private void GenerateDebriefing(IWinningCondition winningCondition);
	public void SetupDebriefing(WinningConditionType winType, HighScores highScores, bool teamMode);
	private void SetupDebriefingPlayer(WinningConditionType winType, List<ScoreActorEntry> scoreActorEntries, GameStatCounterType counterType);
	private void SetupDebriefingTeam(WinningConditionType winType, List<ScoreTeamEntry> scoreTeamEntries, GameStatCounterType counterType);
	private void OnDisable();
	private void SetupDebriefingNoWinner();
	[DebuggerHidden]
	private IEnumerator ShowDebriefingCoroutine();
	private void Clear();
	private void Update();
	[DebuggerHidden]
	private IEnumerator WaitForFadeOut();
	private static string FormatCount(GameStatCounterType statType, int count);
	private void RenderPlayerToRenderTexture(List<int> actorNrs);
	private List<ScoreTeamEntry> GetWinningTeamsFromScoreTeamEntries(List<ScoreTeamEntry> scoreTeamEntries, GameStatCounterType counterType);
	private List<ScoreActorEntry> GetWinningActorsFromScoreActorEntries(List<ScoreActorEntry> scoreActorEntries, GameStatCounterType counterType);
	private void ResetScoreWhenDone();
}

