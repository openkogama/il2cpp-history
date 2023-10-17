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

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<ITouristAdController> __9__12_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__12_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__13_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnContinueClicked_b__12_0(ITouristAdController x, BaseEventData y);
		internal void _OnContinueClicked_b__12_1(IUIStack x, BaseEventData y);
		internal void _FadeOutAndPopPromotion_b__13_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _FadeOutAndPopPromotion_d__13 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public TouristPromotion __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FadeOutAndPopPromotion_d__13(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public TouristPromotion();

	// Methods
	public static void TPLog(string msg);
	protected virtual void Start();
	public void Initialize(bool withAd);
	public void OnRegisterClicked();
	public void OnLoginClicked();
	public virtual void OnContinueClicked();
	[IteratorStateMachine(typeof(_FadeOutAndPopPromotion_d__13))]
	private IEnumerator FadeOutAndPopPromotion();
	[CompilerGenerated]
	private void _FadeOutAndPopPromotion_b__13_0(float t);
}

