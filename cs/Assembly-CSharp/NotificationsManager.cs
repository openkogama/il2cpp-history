/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationsManager : MonoBehaviour
{
	// Fields
	[SerializeField]
	private NotificationArea[] notificationAreas;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private static NotificationsManager _ActiveInstance_k__BackingField;

	// Properties
	public static NotificationsManager ActiveInstance { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public NotificationsManager();

	// Methods
	protected void OnEnable();
	protected void OnDestroy();
	public void InstantiateNotification(NotificationType notificationType, Dictionary<object, object> data);
}

