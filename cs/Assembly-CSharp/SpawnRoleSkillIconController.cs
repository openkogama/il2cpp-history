/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class SpawnRoleSkillIconController : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Image skillIcon;
	[SerializeField]
	private Image negativeIcon;
	[SerializeField]
	private Image negativeBackgroundIcon;

	// Constructors
	public SpawnRoleSkillIconController();

	// Methods
	public void ChangeColor(Color newIconColor, Color newBackgroundColor);
	public void HandleNegativeState(int skillCost);
	public void ChangeSize(float width, float height);
}

