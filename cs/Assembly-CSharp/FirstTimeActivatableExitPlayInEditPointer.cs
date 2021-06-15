/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableExitPlayInEditPointer : FirstTimeActivatableButtonPointer
{
	// Fields
	[SerializeField]
	private GameObject leavePlayInEdit;
	private float timeBeforeActive;
	private float currentTime;
	private bool canShow;
	private bool isDeleting;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IFirstTimeElementActivator> __f__am_cache0;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatableExitPlayInEditPointer();

	// Methods
	public override void OnShow();
	private void Update();
	protected override void OnShown();
	[CompilerGenerated]
	private void _Update_m__0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private static void _Update_m__1(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _OnShown_m__2(TextBubbleController x, BaseEventData y);
}

