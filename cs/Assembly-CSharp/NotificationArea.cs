/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationArea : MonoBehaviour
{
	// Fields
	[SerializeField]
	protected NotificationObjectPool objectPool;
	[SerializeField]
	protected RectTransform contentHolderTransform;
	[SerializeField]
	protected List<Notification> allowedNotifications;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass3_0
	{
		// Fields
		public NotificationType notificationType;

		// Constructors
		public __c__DisplayClass3_0();

		// Methods
		internal bool _InstantiateNotification_b__0(Notification n);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass5_0
	{
		// Fields
		public NotificationType notificationType;

		// Constructors
		public __c__DisplayClass5_0();

		// Methods
		internal bool _CanInstantiateNotificationType_b__0(Notification n);
	}

	[CompilerGenerated]
	private sealed class _AddNotification_d__4 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public Notification notification;
		public Dictionary<object, object> data;
		public NotificationArea __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _AddNotification_d__4(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public NotificationArea();

	// Methods
	public virtual void InstantiateNotification(NotificationType notificationType, Dictionary<object, object> data);
	[IteratorStateMachine(typeof(_AddNotification_d__4))]
	private IEnumerator AddNotification(Notification notification, Dictionary<object, object> data);
	public bool CanInstantiateNotificationType(NotificationType notificationType);
}

