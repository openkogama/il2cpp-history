/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoldPurchasedTracker : MonoBehaviour
{
	// Fields
	private int goldDeltaExpected;
	private int currentGold;
	private int goldGainedTotal;
	private const string goldPendingUpdate = "GoldPendingUpdate";

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _StartGoldPurchasePendingUpdate_b__6_0(IModalPopupCreator x, BaseEventData y);
	}

	// Constructors
	public GoldPurchasedTracker();

	// Methods
	public void Initialize();
	private void OnDestroy();
	public void StartGoldPurchasePendingUpdate(int currentGold, int goldDelta);
	public void GoldPendingUpdate();
	private void GoldUpdatedCallback();
}

