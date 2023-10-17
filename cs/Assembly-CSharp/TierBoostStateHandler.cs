/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierBoostStateHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TeamMenu teamMenuPrefab;
	[SerializeField]
	private SpawnRoleMenu spawnRoleSelectionMenuPrefab;
	private Action<bool> onFinished;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__3_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__5_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _StopPreviewTier_b__3_0(IModalPopupCreator x, BaseEventData y);
		internal void _ExitContinuePopup_b__5_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public SpawnRoleMenu spawnRoleSelectionMenu;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal void _ShowSpawnRoleSelectionMenu_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass7_0
	{
		// Fields
		public TeamMenu newTeamMenu;

		// Constructors
		public __c__DisplayClass7_0();

		// Methods
		internal void _ShowTeamSelectionMenu_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TierBoostStateHandler();

	// Methods
	public void StopPreviewTier(Action<bool> onFinishPreviewTier);
	private void OnPlayerPlanetDataUpdated();
	private void ExitContinuePopup();
	private void ShowSpawnRoleSelectionMenu();
	private void ShowTeamSelectionMenu();
	private bool IsInTempClass();
	public bool IsInTempTier();
	private bool CanSpawnInTeam(MVTeam team);
}

