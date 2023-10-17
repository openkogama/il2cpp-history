/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.Common;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class GoldRewardManager
{
	// Fields
	private bool isGoldRewardGame;
	private bool isCountingDownGoldReward;
	private bool isGoldRewardDone;
	private float startTime;

	// Properties
	public bool IsGoldRewardGame { get; }
	public bool IsCountingDownGoldReward { get; }
	public bool IsGoldRewardDone { get; }

	// Constructors
	public GoldRewardManager();

	// Methods
	public void Initialize(bool isGoldRewardGame);
	public void StartGoldRewardCountdownWhenReady();
	public float GetGoldRewardTimeLeft();
	public float GetGoldRewardCountdownProgressPercentage();
	public void OnClaimGoldReward();
	public bool CanGetGoldReward();
	private void OnAvatarChangeState(SpawnRoleModeType avatarMode);
	private void StartGoldRewardCountdown();
}

