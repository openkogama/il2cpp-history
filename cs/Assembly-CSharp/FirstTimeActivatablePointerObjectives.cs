/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class FirstTimeActivatablePointerObjectives : FirstTimeActivatableElementBase
{
	// Fields
	[SerializeField]
	private List<RectTransform> winningConditionTransforms;
	[SerializeField]
	private Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	private List<RectTransform> bubbleContent;
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

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass15_0
	{
		// Fields
		public FirstTimeActivatablePointerObjectives __4__this;
		public RectTransform target;

		// Constructors
		public __c__DisplayClass15_0();

		// Methods
		internal void _CreateBubble_b__0(TextBubbleController x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _CreateBubble_d__15 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public FirstTimeActivatablePointerObjectives __4__this;
		private __c__DisplayClass15_0 __8__1;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _CreateBubble_d__15(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public FirstTimeActivatablePointerObjectives();

	// Methods
	private void Update();
	public override void OnShow();
	[IteratorStateMachine(typeof(_CreateBubble_d__15))]
	private IEnumerator CreateBubble();
	private void Clear();
	private void OnShown();
	private void Destroy();
	[CompilerGenerated]
	private void _Clear_b__16_0(TextBubbleController x, BaseEventData y);
}

