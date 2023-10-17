/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace AdIntegration.InHouse
{
	public class InHouseAdController : MonoBehaviour, IInHousePromotion
	{
		// Fields
		[SerializeField]
		private GeneralPromotionAd generalPromotionAdPrefab;
		[SerializeField]
		private PromotionLooksData touristLooksData;
		[SerializeField]
		private PromotionLooksData registeredLooksData;
		[CompilerGenerated]
		private bool _Showing_k__BackingField;
		private GeneralPromotionAd generalPromotionAd;
		private Action<bool> callback;
		private bool timeoutAsEnabled;
		private int timeoutSuccessDelay;
		private const int TimeoutInterstitial = 5;
	
		// Properties
		public bool Showing { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public InHouseAdController();
	
		// Methods
		private void Awake();
		public void Initialize(bool timeoutEnabled, int timeoutDelay);
		public void ShowPromotionRewarded(Action<bool> onPromotionFinished);
		private void OnPromotionPopped();
		public void ShowPromotionInterstitial(Action<bool> onPromotionFinished);
		private void ShowInHouseAd(Action<bool> onPromotionFinished, int timeout);
		public void Pop();
		[CompilerGenerated]
		private void _ShowInHouseAd_b__17_0(IUIStack x, BaseEventData _);
	}
}
