/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimedPlayReward : RewardButtonBase, IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private WaitForTicks waitForTicks;
	[SerializeField]
	private int timeInSeconds;
	[CompilerGenerated]
	private bool _RewardAvailable_k__BackingField;
	[CompilerGenerated]
	private int _RewardXP_k__BackingField;
	[CompilerGenerated]
	private bool _IsClaimable_k__BackingField;

	// Properties
	public bool RewardAvailable { [CompilerGenerated] get; [CompilerGenerated] private set; }
	private int RewardXP { [CompilerGenerated] get; [CompilerGenerated] set; }
	public bool IsClaimable { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	public static class RewardTracker
	{
		// Fields
		public static bool IsCollected;
		public static Action CollectedChanged;

		// Methods
		public static void Reset();
		public static void PostResetCleanup();
	}

	private class RewardData
	{
		// Fields
		public bool rewardEnabled;
		public int timeInSeconds;
		public int xp;

		// Constructors
		public RewardData();

		// Methods
		public override string ToString();
	}

	// Constructors
	public TimedPlayReward();

	// Methods
	public void Initialize();
	private void RequestRewardPermission();
	private void OnCollectedChanged();
	public void ClaimReward();
	private void OnFinishedViewingAd();
	private void OnFinishedRewardCollecting(UnityWebRequest www);
	private void OnRewardData(UnityWebRequest www);
	public void UpdateControllerUpdate();
	public void UpdateControllerFixedUpdate();
	private void OnDestroy();
}

