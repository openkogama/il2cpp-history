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
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright \u00A9 Microsoft 2011")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: AssemblyProduct("MVWorldObject")]
[assembly: AssemblyTitle("MVWorldObject")]
[assembly: AssemblyTrademark("")]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: Guid("f4b63207-de1c-4bfa-acdb-fa237d94ed1b")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: TargetFramework(".NETFramework,Version=v4.8", FrameworkDisplayName = ".NET Framework 4.8")]

public class GameStatCounterManager
{
	// Fields
	private List<GameStatCounterType> roundEndingStats;
	private List<GameStatCounterType> sessionPersistentStats;
	private List<GameStatCounterType> statsToRemoveOnActorLeave;
	private Dictionary<GameStatCounterType, TeamsCounter> persistentStats;
	private HashSet<MVTeam> activeTeams;
	protected Dictionary<GameStatCounterType, TeamsCounter> statTypeCounters;
	[CompilerGenerated]
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

