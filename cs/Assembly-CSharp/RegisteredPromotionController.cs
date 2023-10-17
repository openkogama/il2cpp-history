/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class RegisteredPromotionController : MonoBehaviour, IRegisterPromotionAdController, IPromotionController
{
	// Fields
	[SerializeField]
	private RegisteredPromotionPopup registeredPromotionPopupPrefab;
	[SerializeField]
	private RegisteredPromotionPopup registeredElitePromotionPopupPrefab;
	[SerializeField]
	private float playFromKogamaPromoInterval;
	[SerializeField]
	private float joinTheElitePromoInterval;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	private float timer;
	private bool embedded;
	private bool subscriber;
	private bool showTouristPromotion;
	private float timeBeforeShownPromotion;
	private UnityAction<bool, bool> onPromotionWasPopped;

	// Properties
	public bool ReadyForAd { get; }
	public bool IsPromotionAvailable { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__17_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _InterstitialAdResult_b__17_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass20_0
	{
		// Fields
		public RegisteredPromotionPopup registeredPromotion;
		public RegisteredPromotionController __4__this;

		// Constructors
		public __c__DisplayClass20_0();

		// Methods
		internal void _PushPromotionSlide_b__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public RegisteredPromotionController();

	// Methods
	public void Initialize();
	public void ShowRegisteredPromotionAd();
	public void InterstitialAdResult(InterstitialAdResult obj);
	private void ShowRegisteredPromotionPopup();
	private void OnPromotionPop();
	private void PushPromotionSlide(RegisteredPromotionPopup popupPrefab, bool isEmbeddedPromotion);
	private void Update();
	public void ShowPromotion(UnityAction<bool, bool> onPop);
}

