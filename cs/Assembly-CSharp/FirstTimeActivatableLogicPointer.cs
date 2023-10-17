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

	// Properties
	public override bool CanShow { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IFirstTimeElementActivator> __9__17_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__17_1(IFirstTimeElementActivator x, BaseEventData y);
	}

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
	private void _OnShow_b__16_0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Update_b__17_0(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _Clear_b__19_0(TextBubbleController x, BaseEventData y);
}

