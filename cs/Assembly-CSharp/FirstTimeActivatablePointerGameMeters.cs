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

public class FirstTimeActivatablePointerGameMeters : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	private List<RectTransform> bubbleContent;
	[SerializeField]
	private RectTransform pointToTransform;
	[SerializeField]
	private float bubbleLifetimeWhenVisible;
	[SerializeField]
	private float visibleDuration;
	private bool visible;
	private float currentTime;
	private const string mouseX = "Mouse X";
	private const string mouseY = "Mouse Y";
	private bool isUpdating;
	private int bubbleId;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatablePointerGameMeters();

	// Methods
	private void Update();
	public override void OnShow();
	private void CreateBubble();
	private void Clear();
	private void OnShown();
	private void Destroy();
	[CompilerGenerated]
	private void _CreateBubble_m__0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_m__1(TextBubbleController x, BaseEventData y);
}

