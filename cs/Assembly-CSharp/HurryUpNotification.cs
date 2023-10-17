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

public class HurryUpNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text timeText;
	[SerializeField]
	private NotificationFade fader;
	[SerializeField]
	private NotificationFade countdownFader;
	[SerializeField]
	private AudioSource countDownSound;
	private int timeStamp;
	private int timeLeftFromTimeStamp;
	private int previousSecondCount;
	private const int mininumMillieSecondDelayBeforePlayingSound = 900;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public HurryUpNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	protected override void Update();
	private void DestroyNotification();
	private void OnRoundEnd(IWinningCondition winningCondition);
	private void OnDestroy();
}

