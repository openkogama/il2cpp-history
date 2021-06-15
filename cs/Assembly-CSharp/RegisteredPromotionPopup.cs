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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IRegisterPromotionAdController> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _FadeOutAndPopPromotion_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal RegisteredPromotionPopup _this;
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

	[CompilerGenerated]
	private sealed class _ShowGoToKogamaPopup_c__AnonStorey1
	{
		// Fields
		internal GameObject popUp;

		// Constructors
		public _ShowGoToKogamaPopup_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public RegisteredPromotionPopup();

	// Methods
	public void Initialize(bool isEmbeddedPromotion, bool withAd);
	protected void OnDestroy();
	public void KogamaRedirect();
	public void OnContinueClicked();
	public void OnViewAdClicked();
	[DebuggerHidden]
	private IEnumerator FadeOutAndPopPromotion();
	private void OnWinningConditionFulfilled(IWinningCondition winningCondition);
	private void ShowGoToKogamaPopup();
	private void Update();
	[CompilerGenerated]
	private static void _OnViewAdClicked_m__0(IRegisterPromotionAdController x, BaseEventData y);
}

