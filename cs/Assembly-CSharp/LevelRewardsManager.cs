/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class LevelRewardsManager
{
	// Fields
	private Dictionary<int, int> unseenLevelRewards;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private KeyValuePair<int, int> _NextReward_k__BackingField;
	public Action OnRewardsReturned;

	// Properties
	public Dictionary<int, int> RewardsToShow { get; }
	public KeyValuePair<int, int> NextReward { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Constructors
	public LevelRewardsManager();

	// Methods
	public void ClearRewards();
	public void SetNextLevelReward(int level, int gold);
	public void AddClaimedLevelRewards(Dictionary<int, int> levelRewards);
}

