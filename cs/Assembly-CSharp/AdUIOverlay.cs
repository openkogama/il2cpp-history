/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AdUIOverlay : MonoBehaviour, IAdUIManager
{
	// Fields
	[SerializeField]
	private GameObject adBackground;
	private bool popupShowing;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass8_0
	{
		// Fields
		public bool stackReady;
		public AdUIOverlay __4__this;

		// Constructors
		public __c__DisplayClass8_0();

		// Methods
		internal void _CreatePopup_b__0(IUIStack x, BaseEventData y);
		internal void _CreatePopup_b__1(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__9_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Pop_b__9_0(IUIStack x, BaseEventData y);
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
}

