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

public abstract class Notification : MonoBehaviour
{
	// Fields
	public NotificationType Type;
	[HideInInspector]
	public NotificationObjectPool pool;
	protected float timeSinceStart;

	// Properties
	protected abstract NotificationLifetime Lifetime { get; }
	public float Progress { get; }

	// Constructors
	protected Notification();

	// Methods
	public virtual void Initialize(Dictionary<object, object> data);
	protected virtual void Update();
	public virtual void OnReturn();
	protected void Close();
}

