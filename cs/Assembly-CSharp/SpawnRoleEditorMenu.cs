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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public SpawnRoleTeamEditor teamEditor;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _OnTeamEditPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public SpawnRoleLooksEditorMenu looksEditorMenu;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _OnLooksEditPressed_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IEditModeController> __9__16_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__16_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__16_0(IEditModeController x, BaseEventData y);
		internal void _Update_b__16_1(IUIStack x, BaseEventData y);
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
	private void _OnSkillsEditPressed_b__13_0(IUIStack x, BaseEventData y);
}

