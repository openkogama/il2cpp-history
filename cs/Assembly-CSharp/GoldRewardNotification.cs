/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoldRewardNotification : Notification
{
	// Fields
	private NotificationLifetime lifeTime;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public GoldRewardNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	public void RewardClicked();
}

