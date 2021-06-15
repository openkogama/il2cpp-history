/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSelectionSkillElement : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Transform skillIconContainer;
	[SerializeField]
	private Image powerFillImage;
	[SerializeField]
	private Image negativePowerFillImage;
	[SerializeField]
	private UnityEngine.UI.Text nameText;
	[SerializeField]
	private UnityEngine.UI.Text descriptionText;
	[SerializeField]
	private float iconHeight;
	[SerializeField]
	private float iconWidth;
	[SerializeField]
	private ColorStyle iconColor;
	[SerializeField]
	private ColorStyle iconBackgroundColor;

	// Constructors
	public SpawnRoleSelectionSkillElement();

	// Methods
	public void Initialize(string skill, SpawnRolesSkillDataManager skillDataManager, KogamaSettingValueWrapperBase skillSetting);
	private float CalculateSkillPowerPercentage(float value, float max, float min, float zeroValue);
}

