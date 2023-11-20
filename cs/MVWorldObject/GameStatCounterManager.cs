/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

public class GameStatCounterManager
{
	// Fields
	private List<GameStatCounterType> roundEndingStats;
	private List<GameStatCounterType> sessionPersistentStats;
	private List<GameStatCounterType> statsToRemoveOnActorLeave;
	private Dictionary<GameStatCounterType, TeamsCounter> persistentStats;
	private HashSet<MVTeam> activeTeams;
	protected Dictionary<GameStatCounterType, TeamsCounter> statTypeCounters;
	private EventHandler<OnCounterTypeChangedArgs> OnCounterTypeChanged;

	// Properties
	public HashSet<MVTeam> ActiveTeams { get; }

	// Events
	public event EventHandler<OnCounterTypeChangedArgs> OnCounterTypeChanged {
		add;
		remove;
	}

	// Constructors
	public GameStatCounterManager();

	// Methods
	public static bool IsNewScoreBetter(int newScore, int oldScore, GameStatCounterType statType);
	public void OnTeamAdded(object sender, TeamEventArgs e);
	public void OnTeamRemoved(object sender, TeamEventArgs e);
	public int GetTeamCount(GameStatCounterType statType, MVTeam team);
	public HighScores GetHighScores(GameStatCounterType statType, bool presentAsTeamScore, WinningConditionPresentStyle winningConditionPresentStyle, bool byAscending);
	public int GetActorCount(GameStatCounterType counterType, MVTeam team, int actorNumber);
	public void Increment(GameStatCounterType counterType, MVTeam team, int actorNumber, int value, int otherID, bool includeTeamScore);
	public void Update(GameStatCounterType counterType, int actorNumber, MVTeam team, int value, int otherID, bool includeTeamScore);
	public void RemoveStatsFromActor(int actorNumber);
	public void Clear();
	public void ClearStats();
	private void SendChangeEvent(int count, GameStatCounterType counterType, int actorNumber, MVTeam team, int otherID);
	private void Validate(int actorNumber, MVTeam team);
	private void AddIfNotPresent(GameStatCounterType statType);
	public override string ToString();
	public void SetStats(byte[] data);
	public void SetStat(byte[] data);
	private void SetStat(BytePacker bp);
	private void AddPersistentStats();
	private void RemoveActorHighScoreFromTeam(int newBestScore, MVTeam team, GameStatCounterType statType);
	public void RemoveTeamScoreOnActorLeave(int actorNr, MVTeam team);
}

