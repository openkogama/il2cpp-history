/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PMOWaitForPlayModeAvatar : PMOStateBase
{
	// Fields
	private bool defaultPlayModeSpawnRoleReady;
	private MVTeam selectedTeam;

	// Nested types
	private enum EnterPlayFromObserveSpawnState
	{
		DefaultSpawnAsSpawnRole = 0,
		SpawnAsDefaultAvatar = 1,
		SpawnAsSelectedSpawnRole = 2
	}

	// Constructors
	public PMOWaitForPlayModeAvatar();

	// Methods
	public override void Enter(PlayModeOnlyStateMachine psm);
	private void SpawnRolesManagerOnOnSpawnRoleActivated(int spawnRoleId);
	public override void Execute(PlayModeOnlyStateMachine psm);
	public override void Exit(PlayModeOnlyStateMachine psm);
	private EnterPlayFromObserveSpawnState CalculateEnterPlayFromObserveState();
	private bool IsTeamWithoutSpawnRole(bool teamsPresent, bool isTeamValid);
	private bool IsSelectedSpawnRoleDeleted(bool isSpawnRoleValid, int selectedSpawnRoleCreatorId);
	private bool ShouldEnterAsDefaultSpawnRole(bool isSpawnRoleValid, bool teamsPresent, int numberOfSpawnPoints);
	private bool ShouldEnterAsSelectedSpawnRole(bool isSpawnRoleValid, bool spawnRolesPresent);
	private void HandleEnterPlayModeFromObserveSpawn(EnterPlayFromObserveSpawnState enterSpawnState);
	private void HandleDefaultSpawnAsSpawnRole();
	private void HandleSpawnAsDefaultPlayModeSpawnRole();
	private void HanldeSpawnAsSelectedSpawnRole();
	private void SpawnAsSelectedSpawnRole(int spawnRoleId);
	private void SpawnAsDefaultPlayModeSpawnRole();
	private bool CanSpawnAsSelectedSpawnRole(int spawnRoleId);
}

