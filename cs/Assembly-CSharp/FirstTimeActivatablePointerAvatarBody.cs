/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatablePointerAvatarBody : FirstTimeActivatableElementBase
{
	// Fields
	private bool showing;
	private bool hasButtonBeenAdded;
	private AvatarEditModeBodyController bodyController;
	[SerializeField]
	private List<RectTransform> bubbleContent;
	[SerializeField]
	private float bubbleLifetimeWhileShown;
	[SerializeField]
	private Vector3 bubbleWorldSpaceOffset;
	[SerializeField]
	private UnityEngine.UI.Button skipElement;
	[SerializeField]
	protected bool skipAllowed;
	[SerializeField]
	private Vector2 offset;
	private int bubbleId;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatablePointerAvatarBody();

	// Methods
	private void Update();
	public override void OnShow();
	protected override void OnDisable();
	protected override void OnDestroy();
	private void Clear();
	private void OnShown();
	[CompilerGenerated]
	private void _Update_b__12_0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _OnShow_b__13_0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_b__16_0(TextBubbleController x, BaseEventData y);
}

