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

public class RegisteredPromotionPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text promotionHeader;
	[SerializeField]
	private RectTransform promotionImageParent;
	[SerializeField]
	private UnityEngine.UI.Text redirectButtonURLText;
	[SerializeField]
	private TouristPromotionLooksData looksData;
	[SerializeField]
	private GameObject goToKogamaPopupPrefab;
	[SerializeField]
	private CanvasGroup canvasGroup;
	[SerializeField]
	private Button continueButton;
	[SerializeField]
	private Image adIcon;
	private bool waitingForAd;
	private float startTime;
	private float timeoutDelay;
	private bool withAd;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IRegisterPromotionAdController> __9__16_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__17_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnViewAdClicked_b__16_0(IRegisterPromotionAdController x, BaseEventData y);
		internal void _FadeOutAndPopPromotion_b__17_1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _FadeOutAndPopPromotion_d__17 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public RegisteredPromotionPopup __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FadeOutAndPopPromotion_d__17(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public GameObject popUp;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _ShowGoToKogamaPopup_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public RegisteredPromotionPopup();

	// Methods
	public void Initialize(bool isEmbeddedPromotion, bool withAd);
	protected void OnDestroy();
	public void KogamaRedirect();
	public void OnContinueClicked();
	public void OnViewAdClicked();
	[IteratorStateMachine(typeof(_FadeOutAndPopPromotion_d__17))]
	private IEnumerator FadeOutAndPopPromotion();
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	private void ShowGoToKogamaPopup();
	private void Update();
	[CompilerGenerated]
	private void _FadeOutAndPopPromotion_b__17_0(float t);
}

