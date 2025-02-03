/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class PMOWalkMode : PMOStateBase
{
	// Nested types
	private enum EnterPlayFromObserveState
	{
		EnterObserveMode = 0,
		SelectTeamOrSpawnRole = 1,
		WaitForRoundToStart = 2
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IEditModeController> __9__0_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Enter_b__0_0(IEditModeController x, BaseEventData y);
	}

	// Constructors
	public PMOWalkMode();

	// Methods
	public override void Enter(PlayModeOnlyStateMachine psm);
	public override void Execute(PlayModeOnlyStateMachine psm);
	public override void Exit(PlayModeOnlyStateMachine psm);
	private void HandleEnterPlayInObserveMode();
	private EnterPlayFromObserveState CalculateEnterPlayFromObserveState();
	private bool ShouldSelectTeamOrSpawnRole(bool isSpawnRoleValid, bool isTeamValid);
	private void HandleEnterState(EnterPlayFromObserveState enterState);
	private void HandleEnterPlayMode();
	private void HandleSelectTeamOrSpawnRole();
	private void HanldeWaitForRoundToStart();
	private void TryLockCursor();
	private void SetToHiddenMode();
	private bool WasPlayingAsDefaultAvatar();
	private void OnNewSpawnRoleSelected(int newSpawnRoleId);
}

