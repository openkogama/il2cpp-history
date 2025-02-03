/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PMOWaitForBuildModeAvatar : PMOStateBase
{
	// Fields
	private bool defaultBuildModeSpawnRoleReady;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IEditModeController> __9__4_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Exit_b__4_0(IEditModeController x, BaseEventData y);
	}

	// Constructors
	public PMOWaitForBuildModeAvatar();

	// Methods
	public override void Enter(PlayModeOnlyStateMachine psm);
	private void SpawnRolesManagerOnOnSpawnRoleActivated(int spawnRoleId);
	public override void Execute(PlayModeOnlyStateMachine psm);
	public override void Exit(PlayModeOnlyStateMachine psm);
}

