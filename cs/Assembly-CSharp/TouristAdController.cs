/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using MV.Common;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TouristAdController : MonoBehaviour, ITouristAdController, IPromotionController
{
	// Fields
	[SerializeField]
	private TouristPromotion touristPromotionPrefab;
	[SerializeField]
	private EmbeddedPlayerConfig embeddedPlayerConfig;
	[SerializeField]
	private TouristPromotionExternalEvaluator touristPromotionExternalEvaluator;
	[SerializeField]
	private float timeBeforeAdShown;
	private float timer;
	private UnityAction<bool, bool> onPromotionWasPopped;
	private bool eligableForPromotion;
	private bool withAd;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Properties
	public bool ReadyForAd { get; }
	public bool IsPromotionAvailable { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _ShowPromotion_c__AnonStorey0
	{
		// Fields
		internal TouristPromotion createdPromotion;
		internal TouristAdController _this;

		// Constructors
		public _ShowPromotion_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public TouristAdController();

	// Methods
	public void Initialize();
	private void OnChangeMode(SpawnRoleModeType type);
	private void OnPromotionPopped();
	public void ShowPromotion(UnityAction<bool, bool> onPop);
	public void ShowAdWithoutPromotion(InterstitialAdResult obj);
	private bool TouristPromotionAllowed();
	public void ShowAd();
	public void InterstitialAdResult(InterstitialAdResult obj);
	private void Update();
	[CompilerGenerated]
	private static void _InterstitialAdResult_m__0(IUIStack x, BaseEventData y);
}

