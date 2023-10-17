/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationLevelRequirementPanel : NotificationRequirementPanel
{
	// Fields
	[SerializeField]
	private Image LevelImage;
	private Texture2D badgeTextureAsset;

	// Constructors
	public NotificationLevelRequirementPanel();

	// Methods
	public override void OnToggleEnabled(object text, Sprite checkmarkSprite, bool enabled);
	private void OnDestroy();
	private void BadgeCallback(UnityWebRequest www);
	private Sprite GetBadgeSprite(Texture2D source);
}

