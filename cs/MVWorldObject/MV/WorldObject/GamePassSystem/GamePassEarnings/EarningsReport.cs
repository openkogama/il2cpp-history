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

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem.GamePassEarnings
{
	public class EarningsReport
	{
		// Fields
		public Dictionary<GamePassTier, int> gamePassTierEarningsGold;
		public Dictionary<string, int> gameBoosterEarningsGold;
	
		// Properties
		public int TotalEarningsGold { get; }
	
		// Constructors
		public EarningsReport();
		public EarningsReport(Dictionary<GamePassTier, int> gamePassTierEarningsGold, Dictionary<string, int> gameBoosterEarningsGold);
	
		// Methods
		public void AddTierGoldRevenue(int goldAmount, GamePassTier gamePassTier);
		public void AddGameBoosterGoldRevenue(int goldAmount, string gameBooster);
		private int GetTotalEarningsGold();
		public override string ToString();
	}
}
