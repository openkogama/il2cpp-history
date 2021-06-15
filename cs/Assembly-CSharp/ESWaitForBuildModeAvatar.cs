/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ESWaitForBuildModeAvatar : ESStateBase
{
	// Fields
	private bool defaultBuildModeSpawnRoleReady;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditModeController> __f__am_cache0;

	// Constructors
	public ESWaitForBuildModeAvatar();

	// Methods
	public override void Enter(EditorStateMachine esm);
	private void SpawnRolesManagerOnOnSpawnRoleActivated(int spawnRoleId);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine esm);
	[CompilerGenerated]
	private static void _Exit_m__0(IEditModeController x, BaseEventData y);
}

