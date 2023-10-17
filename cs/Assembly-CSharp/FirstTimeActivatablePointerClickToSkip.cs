/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatablePointerClickToSkip : FirstTimeActivatableElementBase
{
	// Fields
	private int bubbleId;
	[SerializeField]
	private RectTransform pointToTransform;
	[SerializeField]
	private Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	private List<RectTransform> bubbleContent;
	[SerializeField]
	private float bubbleLifetimeWhileShown;
	private bool visible;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatablePointerClickToSkip();

	// Methods
	private void Update();
	public override void OnShow();
	protected override void OnDisable();
	private void Clear();
	private void OnShown();
	[CompilerGenerated]
	private void _OnShow_b__9_0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_b__11_0(TextBubbleController x, BaseEventData y);
}

