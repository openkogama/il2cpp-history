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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerNotification : Notification
{
	// Fields
	[SerializeField]
	protected UnityEngine.UI.Text NameLabel;
	[SerializeField]
	private Image BadgeImage;
	[SerializeField]
	private RectTransform PrestigiousPlayerFrame;
	[SerializeField]
	private RectTransform FriendPlayerFrame;
	private MVPlayer player;
	private Texture2D badgeTextureAsset;
	private const int PrestigiousLevelRequirement = 25;
	protected NotificationLifetime lifeTime;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public PlayerNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void OnDestroy();
	private void BadgeCallback(UnityWebRequest www);
}

