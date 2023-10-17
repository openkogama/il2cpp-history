/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationSlideOut : MonoBehaviour
{
	// Fields
	[SerializeField]
	private Notification notification;
	[SerializeField]
	private Vector2 slideVelocity;
	[Range(0f, 1f)]
	[SerializeField]
	private float slideOutStartTime;

	// Constructors
	public NotificationSlideOut();

	// Methods
	private void OnValidate();
	protected void Update();
}

