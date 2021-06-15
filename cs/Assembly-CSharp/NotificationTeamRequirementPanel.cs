/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationTeamRequirementPanel : NotificationRequirementPanel
{
	// Fields
	[SerializeField]
	private Image requirementImage;
	[SerializeField]
	private Sprite redNotificationIcon;
	[SerializeField]
	private Sprite greenNotificationIcon;
	[SerializeField]
	private Sprite blueNotificationIcon;
	[SerializeField]
	private Sprite yellowNotificationIcon;

	// Constructors
	public NotificationTeamRequirementPanel();

	// Methods
	public override void OnToggleEnabled(object team, Sprite checkmarkSprite, bool enabled);
}

