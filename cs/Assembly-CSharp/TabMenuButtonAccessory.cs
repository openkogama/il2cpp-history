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
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabMenuButtonAccessory : TabMenuButtonBase, IHighlightedElement
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Button button;
	[SerializeField]
	private LayoutElement layoutElement;
	[SerializeField]
	private List<AccessoryTabDef> tabDefs;
	[SerializeField]
	private float selectedTabHeight;
	[SerializeField]
	private float lerpTime;
	[SerializeField]
	private GameObject redDot;
	[SerializeField]
	private UnityEngine.UI.Text redDotCount;
	private float startTime;
	private Graphic icon;
	private float defaultHeight;
	private AccessoryCategoryClient category;

	// Nested types
	[Serializable]
	private struct AccessoryTabDef
	{
		// Fields
		public AccessoryCategoryClient tabID;
		public Graphic streamedImagePrefab;
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public TabMenuButtonAccessory __4__this;
		public int tabId;
		public ExecuteEvents.EventFunction<ITabSelected> __9__1;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _Initialize_b__0();
		internal void _Initialize_b__1(ITabSelected x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _LerpToSize_d__15 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public TabMenuButtonAccessory __4__this;
		public float size;
		private float _height_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _LerpToSize_d__15(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public TabMenuButtonAccessory();

	// Methods
	public override void Initialize(int tabId, string categoryName);
	public void UpdateHighlightState();
	public override void SetAsSelected();
	public override void SetAsDeselected();
	[IteratorStateMachine(typeof(_LerpToSize_d__15))]
	private IEnumerator LerpToSize(float size);
	[CompilerGenerated]
	private void _SetAsSelected_b__13_0(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private void _SetAsSelected_b__13_1(IAccessoryClicked x, BaseEventData y);
}

