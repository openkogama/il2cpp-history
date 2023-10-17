/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRolesSkillDataManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<SkillData> skillDataList;
	[SerializeField]
	private List<string> defenceSkillsList;
	[SerializeField]
	private List<string> offenceSkillsList;
	[SerializeField]
	private List<string> tacticalSkillsList;

	// Nested types
	[Serializable]
	public struct SkillData
	{
		// Fields
		public string type;
		public string name;
		public string description;
		public SpawnRoleSkillIconController iconPrefab;
		public SkillSettingBase settingsPrefab;
		public float zeroValue;
	}

	// Constructors
	public SpawnRolesSkillDataManager();

	// Methods
	public SpawnRoleSkillIconController GetImageClone(string skillType, ColorStyle iconColorStyle = ColorStyle.Gray, ColorStyle iconBackgroundColorStyle = ColorStyle.OffWhite, float imageWidth = 256f, float imageHeight = 256f);
	public string GetNameText(string skillType);
	public SkillSettingBase GetSkillsSettingsClone(string skillType);
	public SkillCategory GetSkillsCategory(string skillKey);
	public string GetSkillDescription(string skillType, object settingValue, int skillCost);
	public float GetZeroValue(string skillType);
	public static Color GetCostColor(int skillCost);
	private Color GetValueColor(int skillCost);
}

