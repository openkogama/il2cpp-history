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
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BundleTab : TabMenuButtonBase
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Button button;
	[SerializeField]
	private RectTransform rectTransform;
	[SerializeField]
	private float offsetX;
	[SerializeField]
	private float lerpTime;
	[SerializeField]
	private Image icon;
	[SerializeField]
	private RawImage levelBadge;
	[SerializeField]
	private UnityEngine.UI.Text timeLimitText;
	[SerializeField]
	private GameObject redDot;
	[SerializeField]
	private UnityEngine.UI.Text redDotCount;
	private Texture2D badgeTextureAsset;
	private float startPos;
	private float startTime;
	private int highlightId;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IAccessoryClicked> __9__17_0;
		public static ExecuteEvents.EventFunction<IAccessoryClicked> __9__17_1;
		public static ExecuteEvents.EventFunction<IBundleController> __9__17_2;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _SetAsSelected_b__17_0(IAccessoryClicked x, BaseEventData y);
		internal void _SetAsSelected_b__17_1(IAccessoryClicked x, BaseEventData y);
		internal void _SetAsSelected_b__17_2(IBundleController x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass13_0
	{
		// Fields
		public BundleTab __4__this;
		public int tabId;
		public ExecuteEvents.EventFunction<ITabSelected> __9__1;

		// Constructors
		public __c__DisplayClass13_0();

		// Methods
		internal void _Initialize_b__0();
		internal void _Initialize_b__1(ITabSelected x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _LerpToSize_d__20 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public BundleTab __4__this;
		public float size;
		private Vector2 _pos_5__2;
		private float _xPos_5__3;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _LerpToSize_d__20(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public BundleTab();

	// Methods
	public override void Initialize(int tabId, string categoryName);
	private void SetLevelBadge();
	private void OnDestroy();
	private void OnBadgeLoaded(UnityWebRequest www);
	public override void SetAsSelected();
	public override void SetAsDeselected();
	private void OnDisable();
	[IteratorStateMachine(typeof(_LerpToSize_d__20))]
	private IEnumerator LerpToSize(float size);
}

