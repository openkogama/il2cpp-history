/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoldPurchasedTracker : MonoBehaviour
{
	// Fields
	private int goldDeltaExpected;
	private int currentGold;
	private int goldGainedTotal;
	private const string goldPendingUpdate = "GoldPendingUpdate";
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache0;

	// Constructors
	public GoldPurchasedTracker();

	// Methods
	public void Initialize();
	private void OnDestroy();
	public void StartGoldPurchasePendingUpdate(int currentGold, int goldDelta);
	public void GoldPendingUpdate();
	private void GoldUpdatedCallback();
	[CompilerGenerated]
	private static void _StartGoldPurchasePendingUpdate_m__0(IModalPopupCreator x, BaseEventData y);
}

