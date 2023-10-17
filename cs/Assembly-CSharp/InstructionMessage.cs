/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InstructionMessage : Notification
{
	// Fields
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private AnimationCurve fadeCurve;
	[SerializeField]
	private UnityEngine.UI.Text text;
	private float currentTime;
	private NotificationLifetime lifeTime;

	// Properties
	protected override NotificationLifetime Lifetime { get; }

	// Constructors
	public InstructionMessage();

	// Methods
	public override void Initialize(Dictionary<object, object> data);
	private void OnEnable();
	protected override void Update();
}

