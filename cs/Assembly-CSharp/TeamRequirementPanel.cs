/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TeamRequirementPanel : NotificationRequirementPanel
{
	// Fields
	[SerializeField]
	private Image redNotificationIcon;
	[SerializeField]
	private Image greenNotificationIcon;
	[SerializeField]
	private Image blueNotificationIcon;
	[SerializeField]
	private Image yellowNotificationIcon;
	private Image activeNotificationIcon;

	// Constructors
	public TeamRequirementPanel();

	// Methods
	public override void OnToggleEnabled(object team, Sprite checkmarkSprite, bool enabled);
}

