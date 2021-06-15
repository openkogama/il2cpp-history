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

public class TimeAttackFlagCountDownNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text countdownText;
	[SerializeField]
	private NotificationFade countDownFader;
	private float countDownStartTime;
	private const float countDownDuration = 3f;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public TimeAttackFlagCountDownNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	protected override void Update();
	private void DestroyNotification();
}

