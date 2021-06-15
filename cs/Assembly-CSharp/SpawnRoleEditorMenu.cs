/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleEditorMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image TeamImage;
	[SerializeField]
	private UnityEngine.UI.Text spawnRoleCostText;
	[SerializeField]
	private SpawnRoleTierEditorMenu tierEditorMenu;
	[SerializeField]
	private SpawnRoleTeamEditor teamEditorPrefab;
	[SerializeField]
	private SpawnRoleLooksEditorMenu looksEditorMenuPrefab;
	[SerializeField]
	private SpawnRoleSkillsEditor skillsEditorMenuPrefab;
	private int spawnRoleWoId;
	private MVAvatarSpawnRoleCreator spawnRole;
	private AttributeSettingsManager spawnRoleAttributeSettingsManager;
	private SpawnRoleSkillsEditor skillsEditorMenu;
	private float timeUntilEnterPlayMode;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditModeController> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _OnTeamEditPressed_c__AnonStorey0
	{
		// Fields
		internal SpawnRoleTeamEditor teamEditor;

		// Constructors
		public _OnTeamEditPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _OnLooksEditPressed_c__AnonStorey1
	{
		// Fields
		internal SpawnRoleLooksEditorMenu looksEditorMenu;

		// Constructors
		public _OnLooksEditPressed_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleEditorMenu();

	// Methods
	public void OnTeamEditPressed();
	public void OnLooksEditPressed();
	public void OnSkillsEditPressed();
	public void OnEnterPlayMode();
	public void Initialize(int spawnRoleWoId);
	private void Update();
	private void OnEnable();
	private void OnDisable();
	private void FocusCameraOnSpawnRole();
	private Vector3 CalculatePreviewOffset(MVWorldObjectClient spawnRole);
	private void UpdateSpawnRoleCost();
	private int CalculateSpawnRoleCost();
	private void OnDestroy();
	private void OnChangeTeam(MVTeam newTeam);
	private void ChangeTeamImageColor(MVTeam team);
	private void OnChangeTier(GamePassTier newTier);
	[CompilerGenerated]
	private void _OnSkillsEditPressed_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _Update_m__1(IEditModeController x, BaseEventData y);
	[CompilerGenerated]
	private static void _Update_m__2(IUIStack x, BaseEventData y);
}

