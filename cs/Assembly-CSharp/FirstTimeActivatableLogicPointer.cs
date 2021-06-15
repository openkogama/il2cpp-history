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

public class FirstTimeActivatableLogicPointer : FirstTimeActivatableElementBase
{
	// Fields
	private bool hasPlacedObject;
	private bool showing;
	private WorldObjectClientRef placedWo;
	private int bubbleId;
	private EditorStateMachine editorStateMachine;
	private bool hasButtonBeenAdded;
	private bool finishedESInsert;
	[SerializeField]
	private List<RectTransform> bubbleContent;
	[SerializeField]
	private float bubbleLifetimeWhileShown;
	[SerializeField]
	private Vector3 bubbleWorldSpaceOffset;
	[SerializeField]
	private Button skipElement;
	[SerializeField]
	protected bool skipAllowed;
	[SerializeField]
	private Vector2 offset;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IFirstTimeElementActivator> __f__am_cache0;

	// Properties
	public override bool CanShow { get; }

	// Constructors
	public FirstTimeActivatableLogicPointer();

	// Methods
	protected override void Start();
	public override void OnShow();
	private void Update();
	protected override void OnDestroy();
	private void Clear();
	private void OnShown();
	[CompilerGenerated]
	private void _OnShow_m__0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Update_m__1(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private static void _Update_m__2(IFirstTimeElementActivator x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_m__3(TextBubbleController x, BaseEventData y);
}

