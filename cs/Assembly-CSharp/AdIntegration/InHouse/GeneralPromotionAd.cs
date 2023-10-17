/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AdIntegration.InHouse
{
	public class GeneralPromotionAd : MonoBehaviour
	{
		// Fields
		[SerializeField]
		private RectTransform promotionImageParent;
		[SerializeField]
		private CanvasGroup canvasGroup;
		[SerializeField]
		private UnityEngine.UI.Text promotionHeader;
		[SerializeField]
		private GameObject redirectButton;
		[SerializeField]
		private UnityEngine.UI.Text redirectButtonURLText;
		[SerializeField]
		private GameObject goToKogamaPopupPrefab;
		[SerializeField]
		private GameObject actionButton;
		[SerializeField]
		private UnityEngine.UI.Text actionText;
		[SerializeField]
		private Button continueButton;
		[SerializeField]
		private UnityEngine.UI.Text continueText;
		[SerializeField]
		private Image continueAdIcon;
		[SerializeField]
		private EmbeddedPlayerConfig embeddedPlayerConfig;
		[SerializeField]
		private UnityEngine.UI.Text whySeeingThisText;
		private GeneralPromotionType generalPromotionType;
		private float startTime;
		private float secondsToWait;
		private bool finishedWaiting;
		private bool promotionShowsAd;
		private string startContinueText;
		private bool popped;
		private PromotionActionType promotionActionType;
		private EmbeddedSiteConfigData embeddedSiteConfigData;
		private bool redirectAllowed;
	
		// Properties
		private string StartContinueText { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass32_0
		{
			// Fields
			public GameObject popUp;
	
			// Constructors
			public __c__DisplayClass32_0();
	
			// Methods
			internal void _ShowGoToKogamaPopup_b__0(IUIStack x, BaseEventData _);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static ExecuteEvents.EventFunction<ITouristAdController> __9__35_0;
			public static ExecuteEvents.EventFunction<IUIStack> __9__37_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _OnContinueClicked_b__35_0(ITouristAdController x, BaseEventData _);
			internal void _FadeOutAndPop_b__37_1(IUIStack x, BaseEventData _);
		}
	
		[CompilerGenerated]
		private sealed class _FadeOutAndPop_d__37 : IEnumerator<object>
		{
			// Fields
			private int __1__state;
			private object __2__current;
			public GeneralPromotionAd __4__this;
	
			// Properties
			object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
			object IEnumerator.Current { [DebuggerHidden] get; }
	
			// Constructors
			[DebuggerHidden]
			public _FadeOutAndPop_d__37(int __1__state);
	
			// Methods
			[DebuggerHidden]
			void IDisposable.Dispose();
			private bool MoveNext();
			[DebuggerHidden]
			void IEnumerator.Reset();
		}
	
		// Constructors
		public GeneralPromotionAd();
	
		// Methods
		private void Start();
		private void Initialize(PromotionLooksData promotionLooksData, GeneralPromotionType type, bool showWhyText);
		public void InitializeWithTimer(GeneralPromotionInitTimer initTimer);
		public void InitializeWithAd(GeneralPromotionInitWithAd initWithAd);
		private static void OnWinningConditionFulfilled(IWinningCondition winningCondition);
		private void OnDestroy();
		public void KogamaRedirect();
		private void ShowGoToKogamaPopup();
		public void ActionButtonCallback();
		private void PerformAction(string statKey, UnityAction<bool, bool> action);
		public void OnContinueClicked();
		public void Pop();
		[IteratorStateMachine(typeof(_FadeOutAndPop_d__37))]
		private IEnumerator FadeOutAndPop();
		private void Update();
		private void ActivateContinueButton();
		[CompilerGenerated]
		private void _FadeOutAndPop_b__37_0(float t);
	}
}
