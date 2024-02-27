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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WinningConditionDebriefing : MonoBehaviour, IDebriefing
{
	// Fields
	private const float FadeTime = 0.3f;
	[SerializeField]
	private CanvasGroup group;
	[SerializeField]
	private DebriefingWinnerGUI playerWinPrefab;
	[SerializeField]
	private DebriefingWinnerGUI teamWinPrefab;
	[SerializeField]
	private DebriefingWinnerGUI noWinnerPrefab;
	[SerializeField]
	private AvatarCapture captureCameraPrefab;
	private DebriefingWinnerGUI debriefing;
	private AvatarCapture captureCamera;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnWinningConditionReceived_b__9_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowDebriefingCoroutine_d__16 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public WinningConditionDebriefing __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _ShowDebriefingCoroutine_d__16(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _WaitForFadeOut_d__19 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public WinningConditionDebriefing __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _WaitForFadeOut_d__19(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
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
	[IteratorStateMachine(typeof(_ShowDebriefingCoroutine_d__16))]
	private IEnumerator ShowDebriefingCoroutine();
	private void Clear();
	private void Update();
	[IteratorStateMachine(typeof(_WaitForFadeOut_d__19))]
	private IEnumerator WaitForFadeOut();
	private static string FormatCount(GameStatCounterType statType, int count);
	private void RenderPlayerToRenderTexture(List<int> actorNrs);
	private List<ScoreTeamEntry> GetWinningTeamsFromScoreTeamEntries(List<ScoreTeamEntry> scoreTeamEntries, GameStatCounterType counterType);
	private List<ScoreActorEntry> GetWinningActorsFromScoreActorEntries(List<ScoreActorEntry> scoreActorEntries, GameStatCounterType counterType);
	private void ResetScoreWhenDone();
	[CompilerGenerated]
	private void _ShowDebriefingCoroutine_b__16_0(float t);
	[CompilerGenerated]
	private void _ShowDebriefingCoroutine_b__16_1(float t);
}

