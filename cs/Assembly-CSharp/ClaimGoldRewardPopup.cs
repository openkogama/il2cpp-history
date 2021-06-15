/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClaimGoldRewardPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text goldRewardText;
	[SerializeField]
	private GameObject goldRewardUnlockedPopupPrefab;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;

	// Nested types
	[CompilerGenerated]
	private sealed class _Update_c__AnonStorey0
	{
		// Fields
		internal bool isBlocked;
		internal ClaimGoldRewardPopup _this;

		// Constructors
		public _Update_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _ClaimGold_c__AnonStorey1
	{
		// Fields
		internal GameObject goldRewardUnlockedPopup;

		// Constructors
		public _ClaimGold_c__AnonStorey1();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ClaimGoldRewardPopup();

	// Methods
	private void Start();
	private void OnDestroy();
	private void Update();
	public void TryClaimGold();
	private void RewardedAdCallback(RewardedAdResult obj);
	private void OnAdFinished(bool adWasSuccessful);
	private void CreateErrorMessage();
	private void ClaimGold();
	[CompilerGenerated]
	private static void _Update_m__0(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _CreateErrorMessage_m__1(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _ClaimGold_m__2(IUIStack x, BaseEventData y);
}

