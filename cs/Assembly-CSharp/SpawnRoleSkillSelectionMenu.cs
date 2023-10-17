/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using UnityEngine;
using UnityEngine.Events;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSkillSelectionMenu : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform skillSelectionElementContainer;
	[SerializeField]
	private GameObject noSkillsText;
	[SerializeField]
	private SpawnRoleSkillSelectionElement skillSelectionElementPrefab;
	private UnityAction<KogamaSettingValueWrapperBase> addSkillCallback;
	private UnityAction cantAddSkillCallback;
	private SpawnRolesSkillDataManager skillDataManager;
	private int spawnRoleCost;
	private GamePassTier spawnRoleTier;

	// Constructors
	public SpawnRoleSkillSelectionMenu();

	// Methods
	public void Initialize(SpawnRolesSkillDataManager skillDataManager, KogamaSettingWrapperBase notAppliedSettings, SkillCategory skillCategory, int spawnRoleCost, GamePassTier spawnRoleTier, UnityAction<KogamaSettingValueWrapperBase> addSkillCallback, UnityAction cantAddSkillCallback);
	private void CreateSkillSelectionElement(string skillKey, KogamaSettingWrapperBase skillSetting);
}

