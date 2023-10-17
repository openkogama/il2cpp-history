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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ClaimGoldRewardPopup : MonoBehaviour
{
	// Fields
	[SerializeField]
	private UnityEngine.UI.Text goldRewardText;
	[SerializeField]
	private GameObject goldRewardUnlockedPopupPrefab;

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass4_0
	{
		// Fields
		public bool isBlocked;
		public ClaimGoldRewardPopup __4__this;

		// Constructors
		public __c__DisplayClass4_0();

		// Methods
		internal void _Update_b__0(IUIStack x, BaseEventData y);
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__4_1;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__9_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Update_b__4_1(IUIStack x, BaseEventData y);
		internal void _CreateErrorMessage_b__9_0(IModalPopupCreator x, BaseEventData y);
		internal void _ClaimGold_b__10_0(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public GameObject goldRewardUnlockedPopup;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal void _ClaimGold_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public ClaimGoldRewardPopup();

	// Methods
	private void Start();
	private void OnDestroy();
	private void Update();
	public void OnClickClaimGoldAd();
	public void OnClickClaimGoldSubscriber();
	private void RewardedAdCallback(RewardedAdResult obj);
	private void OnAdFinished(bool adWasSuccessful);
	private void CreateErrorMessage();
	private void ClaimGold();
}

