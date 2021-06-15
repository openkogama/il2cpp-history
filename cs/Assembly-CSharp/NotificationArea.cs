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

public class NotificationArea : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected NotificationObjectPool objectPool;
	[SerializeField]
	protected RectTransform contentHolderTransform;

	// Constructors
	public NotificationArea();

	// Methods
	public virtual void InstantiateNotification(NotificationType notificationType, Dictionary<object, object> data);
	public bool CanInstantiateNotificationType(NotificationType notificationType);
}

