/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableCubeTutorialPointer : FirstTimeActivatableButtonPointer
{
	// Fields
	private bool skipRequested;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatableCubeTutorialPointer();

	// Methods
	protected override void Start();
	public override void OnShow();
	private new void CreateBubble();
	protected override void OnDestroy();
	private new void Clear();
	private void OnSkipPressed();
	[CompilerGenerated]
	private new void _CreateBubble_m__0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private new void _Clear_m__1(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _OnSkipPressed_m__2(IFirstTimeElementActivator x, BaseEventData y);
}

