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
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSkillSelectionElement : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform imageContainer;
	[SerializeField]
	private UnityEngine.UI.Text nameText;
	[SerializeField]
	private UnityEngine.UI.Text spawnRoleCostText;
	[SerializeField]
	private SpawnRoleSkillInfoButton infoButton;
	[SerializeField]
	private GameObject cogWheelIcon;
	[SerializeField]
	private float iconHeight;
	[SerializeField]
	private float iconWidth;
	[SerializeField]
	private ColorStyle iconColor;
	[SerializeField]
	private ColorStyle iconBackgroundColor;
	private int skillCost;
	private int spawnRoleCost;
	private GamePassTier spawnRoleTier;
	private KogamaSettingValueWrapperBase skillSetting;
	private UnityAction<KogamaSettingValueWrapperBase> addSkillCallback;
	private UnityAction cantAddSkillCallback;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public SpawnRoleSkillSelectionElement();

	// Methods
	public void Initialize(string skill, SpawnRolesSkillDataManager skillDataManager, int skillCost, int spawnRoleCost, GamePassTier spawnRoleTier, KogamaSettingValueWrapperBase skillSetting, UnityAction<KogamaSettingValueWrapperBase> addSkillCallback, UnityAction cantAddSkillCallback);
	public void AddSkill();
	private void InitializeInfoButton(string skill, SpawnRolesSkillDataManager skillDataManager);
	private bool CanAddSkill();
	[CompilerGenerated]
	private static void _AddSkill_m__0(IUIStack x, BaseEventData y);
}

