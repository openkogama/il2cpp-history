/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public abstract class ScoreBoardBase : MonoBehaviour
{
	// Fields
	protected GameStatCounterType statType;
	[SerializeField]
	protected List<ScoreData> scoreBoardPlayerData;
	protected float backgroundAlpha;

	// Nested types
	[Serializable]
	protected class ScoreData
	{
		// Fields
		public UnityEngine.UI.Text ScoreText;
		public UnityEngine.UI.Text NameText;
		public UnityEngine.UI.Text PlacementText;
		public int Id;
		public int Score;
		public Image Background;
		public GameObject MemberUI;
		public UnityEngine.UI.Text MemberPlacementText;
		public bool ShouldShowMemberUI;

		// Constructors
		public ScoreData();
	}

	// Constructors
	protected ScoreBoardBase();

	// Methods
	public abstract void OnStatsChange(int id, int scoreCount);
	public virtual void Initialize(GameStatCounterType statType);
	public void ChangeStatType(GameStatCounterType statType);
	public virtual void ReSortScoreBoard();
	protected void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	protected void SortNewScore(string playerName, int id, int scoreCount, bool activateMemberUI = false);
	private bool HandleAlreadyOnScoreBoard(int id, int newScore);
	protected bool IsNewScoreBetter(int newScore, int oldScore);
	protected virtual bool IsNewScoreBetter(int newScore, int oldScore, int newId, int oldId);
	protected virtual string ScoreIntoString(int score);
	protected void OnDestroy();
	protected virtual void UnSubscribeToCallbacks();
	protected virtual Color GetBackgroundColor(int id);
	protected abstract void HandleParticipantListChanged();
	private void SetPlacementTextForIndex(int index);
	protected void ResetScoreBoard();
	private void SetActiveMemberUI(int index, bool shouldBeActive);
}

