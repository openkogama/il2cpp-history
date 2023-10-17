/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSkillsEditor : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform defenceSkillsContainer;
	[SerializeField]
	private Transform offenceSkillsContainer;
	[SerializeField]
	private Transform tacticalSkillsContainer;
	[SerializeField]
	private GamePassesTextBubble cantAddSkillInfoTextBubble;
	[SerializeField]
	private SpawnRolesSkillDataManager skillDataManagerPrefab;
	[SerializeField]
	private SpawnRoleSkillSelectionMenu skillSelectionMenuPrefab;
	private AttributeSettingsManager attributeSettingsManager;
	private int spawnRoleCost;
	private GamePassTier spawnRoleTier;
	private List<SkillSettingBase> skillSettingList;
	private UnityAction updateSkillCostCallback;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass17_0
	{
		// Fields
		public SpawnRoleSkillSelectionMenu skillSelectionMenu;

		// Constructors
		public __c__DisplayClass17_0();

		// Methods
		internal void _OnAddDefenceSkillPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass18_0
	{
		// Fields
		public SpawnRoleSkillSelectionMenu skillSelectionMenu;

		// Constructors
		public __c__DisplayClass18_0();

		// Methods
		internal void _OnAddOffenceSkillPressed_b__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public SpawnRoleSkillSelectionMenu skillSelectionMenu;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _OnAddTacticalSkillPressed_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public SpawnRoleSkillsEditor();

	// Methods
	private void OnDestroy();
	public void Initialize(int spawnRoleCost, GamePassTier spawnRoleTier, AttributeSettingsManager spawnRoleAttributeSettingsManager, UnityAction updateSkillCost);
	public void UpdateSpawnRoleTier(GamePassTier newSpawnRoleTier);
	public void UpdateSpawnRoleCost(int newSpawnRoleCost);
	private void CreateSkillSettings();
	private void CreateSkillSetting(string skillKey, KogamaSettingWrapperBase skillSettingData);
	public void OnAddDefenceSkillPressed();
	public void OnAddOffenceSkillPressed();
	public void OnAddTacticalSkillPressed();
	private void AddSkillCallback(KogamaSettingValueWrapperBase attributeSetting);
	private void CantAddSkillCallback();
	private void CantUpdateSkillCallback();
	private void CantRemoveSkillCallback();
	private void ShowPowerErrorTipBubble();
	private void RemoveSkillCallback(KogamaSettingValueWrapperBase attributeSetting);
	private void UpdateSkillCallback(KogamaSettingValueWrapperBase attributeSetting);
}

