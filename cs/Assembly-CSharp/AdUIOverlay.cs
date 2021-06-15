/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdUIOverlay : MonoBehaviour, IAdUIManager
{
	// Fields
	[SerializeField]
	private GameObject adBackground;
	private bool popupShowing;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _CreatePopup_c__AnonStorey0
	{
		// Fields
		internal bool stackReady;
		internal AdUIOverlay _this;

		// Constructors
		public _CreatePopup_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
		internal void __m__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AdUIOverlay();

	// Methods
	public bool AdShowing();
	private void Awake();
	public void ShowInterstitial(Action<InterstitialAdResult> callbackFunction);
	public void ShowRewardedVideo(Action<RewardedAdResult> callbackFunction);
	public void PopInterstitial(InterstitialAdResult adResult);
	public void PopRewardedVideo(RewardedAdResult adResult);
	private void CreatePopup();
	private void Pop();
	[CompilerGenerated]
	private static void _Pop_m__0(IUIStack x, BaseEventData y);
}

