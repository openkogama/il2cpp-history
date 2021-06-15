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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	private float timer;
	private bool embedded;
	private bool subscriber;
	private float timeBeforeShownPromotion;
	private UnityAction<bool, bool> onPromotionWasPopped;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	public bool ReadyForAd { get; }
	public bool IsPromotionAvailable { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _PushPromotionSlide_c__AnonStorey0
	{
		// Fields
		internal RegisteredPromotionPopup registeredPromotion;
		internal RegisteredPromotionController _this;

		// Constructors
		public _PushPromotionSlide_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
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
	[CompilerGenerated]
	private static void _InterstitialAdResult_m__0(IUIStack x, BaseEventData y);
}

