/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelUpNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text label;
	[SerializeField]
	private Image Icon;
	private Texture2D textureAsset;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public LevelUpNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void OnDestroy();
	private void BadgeCallback(UnityWebRequest www);
}

