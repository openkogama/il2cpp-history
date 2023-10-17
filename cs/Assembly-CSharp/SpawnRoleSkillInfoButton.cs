/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSkillInfoButton : MonoBehaviour
{
	// Fields
	[SerializeField]
	private GamePassesTextBubble infoTextBubble;
	private string skillType;
	private SpawnRolesSkillDataManager skillDataManager;
	private object skillValue;
	private int skillCost;

	// Constructors
	public SpawnRoleSkillInfoButton();

	// Methods
	public void Initialize(string skillType, object skillValue, int skillCost, SpawnRolesSkillDataManager skillDataManager);
	public void UpdateSkillValue(object skillValue);
	public void UpdateSkillCost(int skillCost);
	public void ShowInfo();
}

