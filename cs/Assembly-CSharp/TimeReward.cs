/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine.Networking;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class TimeReward : IUpdatecontrollerSubscriberUpdate
{
	// Fields
	private RewardStateBase rewardStateBase;
	[CompilerGenerated]
	private EventHandler<RewardStateDataEventArgs> RewardStateChanged;

	// Events
	public event EventHandler<RewardStateDataEventArgs> RewardStateChanged {
		add;
		remove;
	}

	// Nested types
	private abstract class RewardStateBase
	{
		// Fields
		protected RewardStateDataEventArgs rewardStateEventArgs;

		// Properties
		public RewardStateDataEventArgs RewardStateEventArgs { get; }

		// Constructors
		protected RewardStateBase();

		// Methods
		public abstract RewardStateBase Update();
		public abstract void Destroy();
	}

	private class RequestRewardData : RewardStateBase
	{
		// Fields
		private RequestRewardDataStatus requestedRewardDataStatus;
		private RewardCountdown rewardCountdown;
		private bool testRewardEnabled;

		// Nested types
		private enum RequestRewardDataStatus
		{
			Requested = 0,
			Accepted = 1,
			Denied = 2
		}

		private class RewardData
		{
			// Fields
			public bool rewardEnabled;
			public int timeInSeconds;
			public int gold;

			// Constructors
			public RewardData();

			// Methods
			public override string ToString();
		}

		// Constructors
		public RequestRewardData();

		// Methods
		private void TestExternalCallBack(string function, Action<Dictionary<string, object>> action);
		public override RewardStateBase Update();
		private void OnRewardData(UnityWebRequest www);
		public override void Destroy();
	}

	private class RewardCountdown : RewardStateBase
	{
		// Fields
		private WaitForTicks waitForTicks;

		// Constructors
		public RewardCountdown(int timeInSeconds, int amountGold);

		// Methods
		public override void Destroy();
		public override RewardStateBase Update();
	}

	private class RequestReward : RewardStateBase
	{
		// Constructors
		public RequestReward();

		// Methods
		public override void Destroy();
		public override RewardStateBase Update();
	}

	private class RewardDone : RewardStateBase
	{
		// Constructors
		public RewardDone();

		// Methods
		public override void Destroy();
		public override RewardStateBase Update();
	}

	// Constructors
	public TimeReward();

	// Methods
	public void Init();
	public void UpdateControllerFixedUpdate();
	public void UpdateControllerUpdate();
	public void DestroyRewardRequest();
}

