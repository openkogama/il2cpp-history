/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationAreaQueue : NotificationArea
{
	// Fields
	private Queue<EnqueuedNotification> enqueuedNotifications;

	// Nested types
	private class EnqueuedNotification
	{
		// Fields
		public readonly NotificationType notificationType;
		public readonly Dictionary<object, object> data;

		// Constructors
		public EnqueuedNotification(NotificationType notificationType, Dictionary<object, object> data);
	}

	// Constructors
	public NotificationAreaQueue();

	// Methods
	private void Awake();
	private void OnActiveInstancesChanged();
	public override void InstantiateNotification(NotificationType notificationType, Dictionary<object, object> data);
	private void CreateNotification(NotificationType notificationType, Dictionary<object, object> data);
	private void OnDestroy();
}

