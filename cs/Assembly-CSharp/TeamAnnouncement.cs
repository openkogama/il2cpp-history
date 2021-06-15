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

public class TeamAnnouncement : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text teamColorText;
	[SerializeField]
	private NotificationFade fader;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public TeamAnnouncement();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
}

