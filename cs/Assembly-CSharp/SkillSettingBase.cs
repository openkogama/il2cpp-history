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
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SkillSettingBase : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform imageContainer;
	[SerializeField]
	private UnityEngine.UI.Text nameText;
	[SerializeField]
	private UnityEngine.UI.Text skillCostText;
	[SerializeField]
	protected SpawnRoleSkillInfoButton infoButton;
	[SerializeField]
	private float iconHeight;
	[SerializeField]
	private float iconWidth;
	[SerializeField]
	private ColorStyle iconColor;
	[SerializeField]
	private ColorStyle iconBackgroundColor;
	private UnityAction<KogamaSettingValueWrapperBase> removeSkillCallback;
	protected KogamaSettingValueWrapperBase skillSetting;
	protected SpawnRolesSkillDataManager skillDataManager;
	protected SpawnRoleSkillIconController skillIcon;
	protected UnityAction<KogamaSettingValueWrapperBase> updateSkillCallback;
	protected UnityAction cantUpdateSkillCallback;
	protected UnityAction cantRemoveSkillCallback;
	protected int currentSkillCost;
	private int spawnRoleCost;
	private GamePassTier spawnRoleTier;

	// Constructors
	public SkillSettingBase();

	// Methods
	public virtual void Initialize(string skill, SpawnRolesSkillDataManager skillDataManager, int skillCost, int spawnRoleCost, GamePassTier spawnRoleTier, KogamaSettingValueWrapperBase skillSetting, UnityAction<KogamaSettingValueWrapperBase> removeSkillCallback, UnityAction<KogamaSettingValueWrapperBase> updateSkillCallback, UnityAction cantUpdateSkillCallback, UnityAction cantRemoveSkillCallback);
	public void RemoveSkill();
	public void UpdateSpawnRoleCost(int newSpawnRoleCost);
	public void UpdateSpawnRoleTier(GamePassTier newTier);
	protected virtual void UpdateSkillData(object newValue);
	protected void UpdateSkillCost();
	protected bool CanUpdateSkill(int newSkillCost);
	protected bool CanRemoveSkill();
	protected virtual void InitializeInfoButton(string skill, int skillCost, SpawnRolesSkillDataManager skillDataManager);
}

