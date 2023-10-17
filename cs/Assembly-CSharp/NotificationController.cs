/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationController : MonoBehaviour
{
	// Fields
	private static HashSet<int> incomingPlayerFriendRequests;

	// Properties
	private static NotificationsManager NotificationsManager { get; }

	// Constructors
	public NotificationController();
	static NotificationController();

	// Methods
	protected void Awake();
	protected void OnDestroy();
	public static void OnNotificationReceived(NotificationType type, Dictionary<object, object> data);
	private static void FriendRequestAccepted(Dictionary<object, object> data);
	private static void ReceivedFriendsRequest(Dictionary<object, object> data);
	public static void PushNotification(string text, Sprite sprite = null, int lifeTime = 5);
	public static void PushNotification(NotificationType notificationType, NotificationLifetime lifeTime = NotificationLifetime.High);
	public static void PushNotification(NotificationType notificationType, Dictionary<object, object> data, NotificationLifetime lifeTime = NotificationLifetime.High);
	public static void PushNoticationInstruction(string instruction, NotificationLifetime lifeTime = NotificationLifetime.High);
}

