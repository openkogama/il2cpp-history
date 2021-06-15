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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class KillNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text Label;
	[SerializeField]
	private Image Background;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public KillNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	public static string GetKillText(Dictionary<object, object> data, bool shotSelf);
	public static string GetKillText(PlayerKilledByType type, bool shotSelf);
}

