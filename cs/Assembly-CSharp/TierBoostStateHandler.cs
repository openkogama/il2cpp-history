/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierBoostStateHandler : MonoBehaviour
{
	// Fields
	[SerializeField]
	private TeamMenu teamMenuPrefab;
	[SerializeField]
	private SpawnRoleMenu spawnRoleSelectionMenuPrefab;
	private Action<bool> onFinished;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowSpawnRoleSelectionMenu_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleMenu spawnRoleSelectionMenu;

		// Constructors
		public _ShowSpawnRoleSelectionMenu_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ShowTeamSelectionMenu_c__AnonStorey1
	{
		// Fields
		internal TeamMenu newTeamMenu;

		// Constructors
		public _ShowTeamSelectionMenu_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _StopPreviewTier_m__0(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ExitContinuePopup_m__1(IUIStack x, BaseEventData y);
}

