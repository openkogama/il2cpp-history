/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject.KogamaSettings.KogamaSettingsCore.KogamaSettingTypes;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class WorldObjectSkillDataManager
{
	// Fields
	private KogamaSettingsCollectionBase skillData;

	// Constructors
	public WorldObjectSkillDataManager();

	// Methods
	public void Initialize(KogamaSettingWrapperBase settings);
	public bool HasSkill(string skillKey);
	public float GetSkillFloatValue(string skillKey);
	public int GetSkillIntValue(string skillKey);
}

