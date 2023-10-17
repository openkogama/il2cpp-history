/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

internal class ESWalkMode : ESStateBase
{
	// Nested types
	private enum EnterPlayFromEditState
	{
		EnterPlayMode = 0,
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
	public ESWalkMode();

	// Methods
	public override void Enter(EditorStateMachine esm);
	public override void Execute(EditorStateMachine e);
	public override void Exit(EditorStateMachine esm);
	private void HandleEnterPlayInEditMode();
	private EnterPlayFromEditState CalculateEnterPlayFromEditState();
	private bool ShouldSelectTeamOrSpawnRole(bool isSpawnRoleValid, bool isTeamValid);
	private void HandleEnterState(EnterPlayFromEditState enterState);
	private void HandleEnterPlayMode();
	private void HandleSelectTeamOrSpawnRole();
	private void HanldeWaitForRoundToStart();
	private void TryLockCursor();
	private void SetToHiddenMode();
	private bool WasPlayingAsDefaultAvatar();
	private void OnNewSpawnRoleSelected(int newSpawnRoleId);
}

