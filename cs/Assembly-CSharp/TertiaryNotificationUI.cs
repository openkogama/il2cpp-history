/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

[RequireComponent(typeof(CanvasGroup))]
public class TertiaryNotificationUI : MonoBehaviour
{
	// Fields
	private const float TARGET_FADEOUT_TIME = 0.15f;
	private const float TARGET_FADEIN_TIME = 0.1f;
	[SerializeField]
	private Image icon;
	private CanvasGroup canvasGroup;
	private Notification notification;
	private NotificationLifetime lifetime;

	// Nested types
	[CompilerGenerated]
	private sealed class _NotificationAnimation_d__7 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public TertiaryNotificationUI __4__this;
		private float _fadeTime_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _NotificationAnimation_d__7(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public TertiaryNotificationUI();

	// Methods
	public void Initialize(Notification n, NotificationLifetime l, bool usesIcon);
	[IteratorStateMachine(typeof(_NotificationAnimation_d__7))]
	private IEnumerator NotificationAnimation();
	private void OnDisable();
	private void OnDestroy();
}

