/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RareRewardNotification : Notification
{
	// Fields
	[SerializeField]
	private GameObject EpicPanel;
	[SerializeField]
	private GameObject LegendaryPanel;
	[SerializeField]
	private UnityEngine.UI.Text text;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public RareRewardNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private string TypeToText(RewardType type);
}

