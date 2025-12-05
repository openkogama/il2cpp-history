/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamsCounter
{
	// Fields
	protected Dictionary<MVTeam, TeamCounter> teamCounters;

	// Constructors
	public TeamsCounter();
	public TeamsCounter(TeamsCounter teamCounterCopy);
	public TeamsCounter(BytePacker bp);

	// Methods
	public HighScores GetHighScores(GameStatCounterType gameStatCounterType, bool presentAsTeamScore, WinningConditionPresentStyle winningConditionPresentStyle, bool byAscending);
	public int GetTeamCount(MVTeam team);
	public int GetActorCount(MVTeam team, int actorNumber);
	public int Increment(MVTeam team, int actorNumber, int value, bool includeTeamScore);
	public int Update(MVTeam team, int actorNumber, int value, bool includeTeamScore);
	public int UpdateTeam(MVTeam team, int value);
	public void RemoveStatsFromActor(int actorNumber);
	public void RemoveTeam(MVTeam team);
	private void AddIfNotPresent(MVTeam team);
	public override string ToString();
	public void GetActorWithBestScore(out int score, MVTeam team, GameStatCounterType statType, int excludedActorNr = -1);
}

