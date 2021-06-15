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

public class TouristPromotion : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RectTransform promotionImageParent;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private UnityEngine.UI.Text promotionHeader;
	[SerializeField]
	private TouristPromotionLooksData looksData;
	[SerializeField]
	private GameObject adIcon;
	protected bool promotionShowsAd;
	protected bool embedded;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<ITouristAdController> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _FadeOutAndPopPromotion_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal TouristPromotion _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;
		private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FadeOutAndPopPromotion_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
		internal void __m__0(float t);
		private static void __m__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TouristPromotion();

	// Methods
	protected virtual void Start();
	public void Initialize(bool withAd);
	public void OnRegisterClicked();
	public void OnLoginClicked();
	public virtual void OnContinueClicked();
	[DebuggerHidden]
	private IEnumerator FadeOutAndPopPromotion();
	[CompilerGenerated]
	private static void _OnContinueClicked_m__0(ITouristAdController x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnContinueClicked_m__1(IUIStack x, BaseEventData y);
}

