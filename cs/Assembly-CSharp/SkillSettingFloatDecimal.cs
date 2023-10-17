/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using MV.WorldObject.KogamaSettings.SpecializedSettingsTypes.AttributeSettings.AttributeSettingTypes;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SkillSettingFloatDecimal : SkillSettingBase
{
	// Fields
	[SerializeField]
	private Slider slider;
	[SerializeField]
	private InputField inputField;
	[SerializeField]
	private int decimalPlaces;
	private bool isInitialized;
	private float settingValue;
	private AttributeSettingFloat skillPercentageSetting;

	// Constructors
	public SkillSettingFloatDecimal();

	// Methods
	public override void Initialize(string skill, SpawnRolesSkillDataManager skillDataManager, int skillCost, int spawnRoleCost, GamePassTier spawnRoleTier, KogamaSettingValueWrapperBase skillSetting, UnityAction<KogamaSettingValueWrapperBase> removeSkillCallback, UnityAction<KogamaSettingValueWrapperBase> updateSkillCallback, UnityAction cantUpdateSkillCallback, UnityAction cantRemoveSkillCallback);
	protected override void InitializeInfoButton(string skill, int skillCost, SpawnRolesSkillDataManager skillDataManager);
	protected override void UpdateSkillData(object newValue);
	private void UpdateTextInputFieldWithSliderValue();
	private void UpdateSliderValueWithInputFieldText();
	public void SliderValueChanged();
	public void InputFieldChange();
}

