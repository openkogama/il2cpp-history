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

public class NotificationObjectPool : MonoBehaviour
{
	// Fields
	[SerializeField]
	private List<NotificationObjectPoolElement> Elements;
	private List<Notification> Instances;
	private List<Notification> ActiveInstances;
	public Action OnActiveInstancesChanged;

	// Properties
	public int ActivateInstancesCount { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public NotificationType type;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal bool _CreateTempPanel_b__0(NotificationObjectPoolElement x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass6_0
	{
		// Fields
		public NotificationType notificationType;

		// Constructors
		public __c__DisplayClass6_0();

		// Methods
		internal bool _CanInstantiateNotificationType_b__0(Notification x);
		internal bool _CanInstantiateNotificationType_b__1(Notification x);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass9_0
	{
		// Fields
		public NotificationType type;

		// Constructors
		public __c__DisplayClass9_0();

		// Methods
		internal bool _GetPanel_b__0(Notification x);
		internal bool _GetPanel_b__1(Notification x);
	}

	// Constructors
	public NotificationObjectPool();

	// Methods
	public bool CanInstantiateNotificationType(NotificationType notificationType);
	private void Awake();
	public void ReturnAllExistingNotifications();
	public Notification GetPanel(NotificationType type);
	public void Return(Notification notification);
	private Notification CreateTempPanel(NotificationType type);
	private void AddToActiveInstances(Notification notification);
	private void RemoveFromActiveInstances(Notification notification);
}

