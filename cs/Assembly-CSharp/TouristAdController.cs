/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using AdIntegration.InHouse;
using Assets.Scripts.AdIntegration;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristAdController : MonoBehaviour, ITouristAdController, IPromotionController
{
	// Fields
	[SerializeField]
	private GeneralPromotionAd generalPromotionPrefab;
	[SerializeField]
	private AdIntegration.InHouse.PromotionLooksData touristLooksData;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	[SerializeField]
	private TouristPromotionExternalEvaluator touristPromotionExternalEvaluator;
	[SerializeField]
	private float timeBeforeAdShown;
	private float timer;
	private bool showTouristPromotion;
	private UnityAction<bool, bool> onPromotionWasPopped;
	private bool eligibleForPromotionOrAd;
	private bool withAd;

	// Properties
	public bool IsPromotionOrAdWithoutPromotionAvailable { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__23_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnAdCallback_b__23_0(IUIStack x, BaseEventData _);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_0
	{
		// Fields
		public TouristPromotion createdPromotion;
		public TouristAdController __4__this;

		// Constructors
		public __c__DisplayClass19_0();

		// Methods
		internal void _ShowPromotion_b__0(IUIStack x, BaseEventData _);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass19_1
	{
		// Fields
		public GeneralPromotionAd createdPromotion;
		public TouristAdController __4__this;

		// Constructors
		public __c__DisplayClass19_1();

		// Methods
		internal void _ShowPromotion_b__1(IUIStack x, BaseEventData _);
	}

	// Constructors
	public TouristAdController();

	// Methods
	public void Initialize();
	private void Update();
	private bool IsPromotionAvailable();
	private bool IsAdWithoutPromotionAvailable();
	private void OnChangeMode(SpawnRoleModeType type);
	private void OnPromotionPopped();
	public void ShowPromotionOrAd(UnityAction<bool, bool> onPop);
	private void ShowPromotion(bool withAd);
	private void ShowAdWithoutPromotion(bool withAd);
	private void OnAdWithoutPromotionCallback(InterstitialAdResult obj);
	public void ShowAd();
	private void OnAdCallback(InterstitialAdResult obj);
	private void OnDestroy();
}

