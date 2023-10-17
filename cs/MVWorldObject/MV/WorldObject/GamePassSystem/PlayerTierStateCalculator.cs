/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem
{
	public class PlayerTierStateCalculator
	{
		// Fields
		public bool gamePassRewardsActivated;
		public bool gamePointVelocityIsZero;
		public int welcomeReward;
		public Dictionary<GamePassTier, PlayerTierThresholds> progressionThresholds;
	
		// Constructors
		public PlayerTierStateCalculator();
		public PlayerTierStateCalculator(bool gamePassRewardsActivated, bool gamePointVelocityIsZero, int welcomeReward, Dictionary<GamePassTier, PlayerTierThresholds> progressionThresholds);
	
		// Methods
		public Dictionary<GamePassTier, PlayerTierState> GetTierPricingState(int playerGamePoints, GamePassTier playerGamePassTier);
		private Dictionary<GamePassTier, PlayerTierState> GetTierPricingStateBasedOnUserTier(GamePassTier playerGamePassTier);
		private Dictionary<GamePassTier, PlayerTierState> GetTierPricingStateBasedOnUserGamePointAmount(int playerGamePoints, GamePassTier playerGamePassTier);
		public GamePassTier GetUnlockedTier(int gamePoints, GamePassTier curGamePassTier);
		public override string ToString();
	}
}
