/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScoreBoardTeamBase : ScoreBoardBase
{
	// Constructors
	public ScoreBoardTeamBase();

	// Methods
	public override void Initialize(GameStatCounterType statType);
	public override void OnStatsChange(int actorNumber, int scoreCount);
	public override void ReSortScoreBoard();
	protected override void UnSubscribeToCallbacks();
	private void AddTeamsToScoreBoard();
	protected override Color GetBackgroundColor(int teamId);
	protected override void HandleParticipantListChanged();
	protected override bool IsNewScoreBetter(int newScore, int oldScore, int newId, int oldId);
}

