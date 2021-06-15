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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatableButtonPointerEnterEditMode : FirstTimeActivatableElementBase
{
	// Fields
	private int bubbleId;
	[SerializeField]
	private EnterPlayModeButton button;
	[SerializeField]
	private RectTransform pointToTransform;
	[SerializeField]
	private Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	private List<RectTransform> bubbleContent;
	[SerializeField]
	private float bubbleLifetimeWhileShown;
	[SerializeField]
	private Button skipElement;
	[SerializeField]
	protected bool skipAllowed;
	private bool shouldBeDelayedDestroyed;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatableButtonPointerEnterEditMode();

	// Methods
	public override void OnActivate();
	public override void OnShow();
	private void CreateBubble();
	protected override void OnDestroy();
	private void Clear();
	protected void OnShown();
	protected override void OnEnable();
	[CompilerGenerated]
	private void _CreateBubble_m__0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_m__1(TextBubbleController x, BaseEventData y);
}

