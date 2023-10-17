/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Assets.Scripts.AdIntegration;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class BoostMenuController : MonoBehaviour, IBoostAdController
{
	// Fields
	[SerializeField]
	private BoostMenuItem boostPrefab;
	[SerializeField]
	private RectTransform boostItemsScrollRect;
	[SerializeField]
	private RectTransform boostItemsContent;
	private BoostType adRewardType;
	private Action<bool> boostUnlockedCallback;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__8_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnAdFinished_b__8_0(IModalPopupCreator x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _FixContentPivot_d__9 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public BoostMenuController __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FixContentPivot_d__9(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public BoostMenuController();

	// Methods
	public void Initialize();
	public void TryShowAd(BoostType type, Action<bool> OnUnlockedCallback);
	private void RewardedAdCallback(RewardedAdResult obj);
	private void OnAdFinished(bool adWasSuccessful);
	[IteratorStateMachine(typeof(_FixContentPivot_d__9))]
	private IEnumerator FixContentPivot();
	private List<Boost> GetSortedBoosts(Dictionary<BoostType, Boost> boosts, BoostController boostController);
}

