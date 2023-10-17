/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVTeamManager
{
	// Fields
	private readonly Dictionary<MVTeam, string> teamNamesDefault;
	private Dictionary<MVTeam, string> teamNames;
	public OnTeamsUpdatedDelegate OnTeamsUpdated;
	[CompilerGenerated]
	private EventHandler<TeamEventArgs> OnTeamAdded;
	[CompilerGenerated]
	private EventHandler<TeamEventArgs> OnTeamRemoved;
	private Dictionary<MVTeam, HashSet<int>> teams;

	// Properties
	public int NumSpawnPoint { get; }

	// Events
	public event EventHandler<TeamEventArgs> OnTeamAdded {
		add;
		remove;
	}
	public event EventHandler<TeamEventArgs> OnTeamRemoved {
		add;
		remove;
	}

	// Nested types
	public delegate void OnTeamsUpdatedDelegate();

	[CompilerGenerated]
	private sealed class __c__DisplayClass29_0
	{
		// Fields
		public MVTeam team;

		// Constructors
		public __c__DisplayClass29_0();

		// Methods
		internal bool _GetPlayersInTeam_b__0(MVPlayer player);
	}

	// Constructors
	public MVTeamManager();

	// Methods
	public List<TeamData> GetTeamDatas(GameStatCounterType gameStatCounterType);
	public Dictionary<MVTeam, string> GetTeamNames();
	public void UpdateTeamName(MVTeam team, string name);
	public void SetTeamNameToDefault(MVTeam team);
	public void OnAddSpawnPoint(int woId, MVTeam team);
	public void OnRemoveSpawnPoint(int id, MVTeam team);
	public List<MVWorldObjectClient> GetSpawnPointsForTeam(MVTeam team);
	public List<MVWorldObjectClient> GetOnlySpawnPointsForTeam(MVTeam team);
	public MVTeam GetDefaultTeam();
	public bool IsTeamActive(MVTeam team);
	public int GetScore(MVTeam team, GameStatCounterType gameStatCounterType);
	public int TeamCount();
	public List<MVTeam> GetTeamList();
	public bool HasTeam(MVTeam team);
	public bool TeamHasSpawnPoints(MVTeam team);
	public bool TeamHasSpawnRoles(MVTeam team);
	public List<MVPlayer> GetPlayersInTeam(MVTeam team);
	public MVTeam GetTeamFromActorNr(int actorNumber);
	public int GetNoOfPlayersInTeam(MVTeam team);
	public override string ToString();
}

