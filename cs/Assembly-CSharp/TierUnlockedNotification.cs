/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TierUnlockedNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text tierUnlockedText;
	[SerializeField]
	private NotificationSlideOut slider;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public TierUnlockedNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	protected override void Update();
}

