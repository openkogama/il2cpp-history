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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;

	// Nested types
	[CompilerGenerated]
	private sealed class _FixContentPivot_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal BoostMenuController _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _FixContentPivot_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	// Constructors
	public BoostMenuController();

	// Methods
	public void Initialize();
	public void TryShowAd(BoostType type, Action<bool> OnUnlockedCallback);
	private void RewardedAdCallback(RewardedAdResult obj);
	private void OnAdFinished(bool adWasSuccessful);
	[DebuggerHidden]
	private IEnumerator FixContentPivot();
	private List<Boost> GetSortedBoosts(Dictionary<BoostType, Boost> boosts, BoostController boostController);
	[CompilerGenerated]
	private static void _OnAdFinished_m__0(IModalPopupCreator x, BaseEventData y);
}

