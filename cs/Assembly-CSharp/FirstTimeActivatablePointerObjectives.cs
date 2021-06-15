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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private sealed class _CreateBubble_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal FirstTimeActivatablePointerObjectives _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;
		private _CreateBubble_c__AnonStorey1 _locvar0;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Nested types
		private sealed class _CreateBubble_c__AnonStorey1
		{
			// Fields
			internal RectTransform target;
			internal _CreateBubble_c__Iterator0 __f__ref_0;

			// Constructors
			public _CreateBubble_c__AnonStorey1();

			// Methods
			internal void __m__0(TextBubbleController x, BaseEventData y);
		}

		// Constructors
		[DebuggerHidden]
		public _CreateBubble_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public FirstTimeActivatablePointerObjectives();

	// Methods
	private void Update();
	public override void OnShow();
	[DebuggerHidden]
	private IEnumerator CreateBubble();
	private void Clear();
	private void OnShown();
	private void Destroy();
	[CompilerGenerated]
	private void _Clear_m__0(TextBubbleController x, BaseEventData y);
}

