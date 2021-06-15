/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationRequirementPanel : MonoBehaviour, INotificationRequirementPanel
{
	// Fields
	[SerializeField]
	protected Image checkmark;
	[SerializeField]
	protected UnityEngine.UI.Text textField;

	// Constructors
	public NotificationRequirementPanel();

	// Methods
	public virtual void OnToggleEnabled(object text, Sprite checkmarkSprite, bool enabled);
}

