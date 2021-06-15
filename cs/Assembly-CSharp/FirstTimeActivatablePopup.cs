/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatablePopup : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private FirstTimeEventPopup popupPrefab;
	[SerializeField]
	private List<UIPushOption> pushOptions;
	[SerializeField]
	protected bool skipAllowed;
	protected FirstTimeEventPopup popup;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatablePopup();

	// Methods
	public override void OnShow();
	protected virtual new void DoShow();
	protected void CreatePopup();
	private void PushToStack();
	private void OnPop();
	[CompilerGenerated]
	private void _PushToStack_m__0(IUIStack x, BaseEventData y);
}

