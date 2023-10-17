/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableExitPlayInEditPointer : FirstTimeActivatableButtonPointer
{
	// Fields
	[SerializeField]
	private GameObject leavePlayInEdit;
	private float timeBeforeActive;
	private float currentTime;
	private bool canShow;
	private bool isDeleting;

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IFirstTimeElementActivator> __9__8_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__8_1(IFirstTimeElementActivator x, BaseEventData y);
	}

	// Constructors
	public FirstTimeActivatableExitPlayInEditPointer();

	// Methods
	public override void OnShow();
	private void Update();
	protected override void OnShown();
	[CompilerGenerated]
	private void _Update_b__8_0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _OnShown_b__9_0(TextBubbleController x, BaseEventData y);
}

