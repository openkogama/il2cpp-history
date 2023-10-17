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

public class FriendRequestNotification : Notification
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text label;
	private int friendId;
	private const int latestFriendId = -1;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public FriendRequestNotification();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void AcceptFriendship();
	public override void OnReturn();
	private bool ValidateFriendRequest();
	protected override void Update();
}

