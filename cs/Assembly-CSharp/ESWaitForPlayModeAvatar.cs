/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ESWaitForPlayModeAvatar : ESStateBase
{
	// Fields
	private bool defaultPlayModeSpawnRoleReady;
	private MVTeam selectedTeam;

	// Nested types
	private enum EnterPlayFromEditSpawnState
	{
		DefaultSpawnAsSpawnRole = 0,
		SpawnAsDefaultAvatar = 1,
		SpawnAsSelectedSpawnRole = 2
	}

	// Constructors
	public ESWaitForPlayModeAvatar();

	// Methods
	public override void Enter(EditorStateMachine esm);
	private void SpawnRolesManagerOnOnSpawnRoleActivated(int spawnRoleId);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine esm);
	private EnterPlayFromEditSpawnState CalculateEnterPlayFromEditState();
	private bool IsTeamWithoutSpawnRole(bool teamsPresent, bool isTeamValid);
	private bool IsSelectedSpawnRoleDeleted(bool isSpawnRoleValid, int selectedSpawnRoleCreatorId);
	private bool ShouldEnterAsDefaultSpawnRole(bool isSpawnRoleValid, bool teamsPresent, int numberOfSpawnPoints);
	private bool ShouldEnterAsSelectedSpawnRole(bool isSpawnRoleValid, bool spawnRolesPresent);
	private void HandleEnterPlayModeFromEditSpawn(EnterPlayFromEditSpawnState enterSpawnState);
	private void HandleDefaultSpawnAsSpawnRole();
	private void HandleSpawnAsDefaultPlayModeSpawnRole();
	private void HanldeSpawnAsSelectedSpawnRole();
	private void SpawnAsSelectedSpawnRole(int spawnRoleId);
	private void SpawnAsDefaultPlayModeSpawnRole();
	private bool CanSpawnAsSelectedSpawnRole(int spawnRoleId);
}

