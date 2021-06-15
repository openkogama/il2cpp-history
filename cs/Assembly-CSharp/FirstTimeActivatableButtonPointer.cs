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

public class FirstTimeActivatableButtonPointer : FirstTimeActivatableElementBase
{
	// Fields
	protected int bubbleId;
	[SerializeField]
	protected Button button;
	[SerializeField]
	protected RectTransform pointToTransform;
	[SerializeField]
	protected Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	protected List<RectTransform> bubbleContent;
	[SerializeField]
	protected float bubbleLifetimeWhileShown;
	[SerializeField]
	protected Button skipElement;
	[SerializeField]
	protected bool skipAllowed;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatableButtonPointer();

	// Methods
	public override void OnShow();
	private void CreateBubble();
	protected void ShowBubble();
	private void Clear();
	protected virtual void OnShown();
	[CompilerGenerated]
	private void _CreateBubble_m__0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_m__1(TextBubbleController x, BaseEventData y);
}

