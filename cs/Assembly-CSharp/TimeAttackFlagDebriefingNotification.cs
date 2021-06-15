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

public class TimeAttackFlagDebriefingNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text timeText;
	[SerializeField]
	private UnityEngine.UI.Text descriptionText;
	[SerializeField]
	private NotificationFade debriefingFader;
	[SerializeField]
	private UnityEngine.UI.Text countdownText;
	[SerializeField]
	private NotificationFade countDownFader;
	private float countDownStartTime;
	private const float countDownDuration = 3f;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public TimeAttackFlagDebriefingNotification();

	// Methods
	private void Start();
	private void OnDestroy();
	public override void Initialize(Dictionary<object, object> data);
	protected override void Update();
	private void OnTimeFlagDebriefingEnd();
	private void StartCountDown();
	private void DestroyNotification();
}

