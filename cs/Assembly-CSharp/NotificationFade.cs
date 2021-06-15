/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class NotificationFade : MonoBehaviour
{
	// Fields
	[SerializeField]
	private CanvasGroup group;
	[SerializeField]
	private AnimationCurve textVisibilityCurve;
	[SerializeField]
	private float duration;
	[SerializeField]
	private bool playing;
	private float currentTime;
	private float pauseAt;
	private bool shouldHideWhenDone;
	public Action OnFinished;

	// Properties
	public bool IsPaused { get; }
	public bool ShouldHideWhenDone { set; }

	// Constructors
	public NotificationFade();

	// Methods
	public void Deactivate();
	public void Activate();
	public void PauseAt(float pausePoint);
	public void Unpause();
	private void Update();
	private void OnDisable();
}

