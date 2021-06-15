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
	private sealed class _CanInstantiateNotificationType_c__AnonStorey0
	{
		// Fields
		internal NotificationType notificationType;

		// Constructors
		public _CanInstantiateNotificationType_c__AnonStorey0();

		// Methods
		internal bool __m__0(Notification x);
		internal bool __m__1(Notification x);
	}

	[CompilerGenerated]
	private sealed class _GetPanel_c__AnonStorey1
	{
		// Fields
		internal NotificationType type;

		// Constructors
		public _GetPanel_c__AnonStorey1();

		// Methods
		internal bool __m__0(Notification x);
		internal bool __m__1(Notification x);
	}

	[CompilerGenerated]
	private sealed class _CreateTempPanel_c__AnonStorey2
	{
		// Fields
		internal NotificationType type;

		// Constructors
		public _CreateTempPanel_c__AnonStorey2();

		// Methods
		internal bool __m__0(NotificationObjectPoolElement x);
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

