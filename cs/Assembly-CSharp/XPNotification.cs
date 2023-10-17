/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class XPNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text AmountLabel;
	[SerializeField]
	private NotificationSlideOut slider;
	[SerializeField]
	private GameObject boostedNotification;
	[SerializeField]
	private GameObject defaultNotification;
	[SerializeField]
	private XPNotificationBoostedBehaviour boostedBehaviour;
	private const float boostedXpNotificationLifeTime = 5f;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public XPNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	protected override void Update();
}

