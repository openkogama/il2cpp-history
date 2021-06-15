/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ScoreBoardSingleBase : ScoreBoardBase
{
	// Constructors
	public ScoreBoardSingleBase();

	// Methods
	public override void OnStatsChange(int actorNumber, int scoreCount);
	public override void Initialize(GameStatCounterType statType);
	public override void ReSortScoreBoard();
	protected void OnPlayerListChanged();
	protected override void HandleParticipantListChanged();
	private void AddPlayersToScoreBoard();
	private void OnEnable();
}

