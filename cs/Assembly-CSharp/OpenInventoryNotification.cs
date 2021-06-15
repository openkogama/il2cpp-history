/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class OpenInventoryNotification : Notification
{
	// Fields
	[SerializeField]
	private NotificationFade fader;
	private NotificationLifetime lifeTime;
	private int category;
	private int slot;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public OpenInventoryNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	public void NotificationClicked();
	[CompilerGenerated]
	private void _NotificationClicked_m__0(IPlayerInventory x, BaseEventData y);
}

