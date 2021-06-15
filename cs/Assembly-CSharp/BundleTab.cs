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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BundleTab : TabMenuButtonBase
{
	// Fields
	[SerializeField]
	private Button button;
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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryClicked> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryClicked> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IBundleController> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _Initialize_c__AnonStorey1
	{
		// Fields
		internal int tabId;
		internal BundleTab _this;

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
		internal Vector2 _pos___0;
		internal float _xPos___0;
		internal float size;
		internal BundleTab _this;
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
	public BundleTab();

	// Methods
	public override void Initialize(int tabId, string categoryName);
	private void SetLevelBadge();
	private void OnDestroy();
	private void OnBadgeLoaded(UnityWebRequest www);
	public override void SetAsSelected();
	public override void SetAsDeselected();
	private void OnDisable();
	[DebuggerHidden]
	private IEnumerator LerpToSize(float size);
	[CompilerGenerated]
	private static void _SetAsSelected_m__0(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private static void _SetAsSelected_m__1(IAccessoryClicked x, BaseEventData y);
	[CompilerGenerated]
	private static void _SetAsSelected_m__2(IBundleController x, BaseEventData y);
}

