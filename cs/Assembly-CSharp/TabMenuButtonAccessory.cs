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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TabMenuButtonAccessory : TabMenuButtonBase, IHighlightedElement
{
	// Fields
	[SerializeField]
	private Button button;
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
	private sealed class _Initialize_c__AnonStorey1
	{
		// Fields
		internal int tabId;
		internal TabMenuButtonAccessory _this;

		// Constructors
		public _Initialize_c__AnonStorey1();

		// Methods
		internal void __m__0();
		internal void __m__1(ITabSelected x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _LerpToSize_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal float _height___0;
		internal float size;
		internal TabMenuButtonAccessory _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _LerpToSize_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public TabMenuButtonAccessory();

	// Methods
	public override void Initialize(int tabId, string categoryName);
	public void UpdateHighlightState();
	public override void SetAsSelected();
	public override void SetAsDeselected();
	[DebuggerHidden]
	private IEnumerator LerpToSize(float size);
	[CompilerGenerated]
	private void _SetAsSelected_m__0(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private void _SetAsSelected_m__1(IAccessoryClicked x, BaseEventData y);
}

