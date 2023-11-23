/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationAreaSingleInstanceQueue : NotificationArea
{
	// Fields
	private readonly Queue<NotificationQueueData> enqueuedNotifications;
	private bool shouldSkipDequeueCallback;
	private const float decayTime = 10f;

	// Nested types
	private struct NotificationQueueData
	{
		// Fields
		public NotificationType notificationType;
		public Dictionary<object, object> data;
		public float startTime;
	}

	// Constructors
	public NotificationAreaSingleInstanceQueue();

	// Methods
	public override void InstantiateNotification(NotificationType notificationType, Dictionary<object, object> data);
	private void Awake();
	private void QueueNotification(NotificationType notificationType, Dictionary<object, object> data);
	private void ShowNotification(NotificationType notificationType, Dictionary<object, object> data);
	private void OnActiveInstancesChanged();
}

