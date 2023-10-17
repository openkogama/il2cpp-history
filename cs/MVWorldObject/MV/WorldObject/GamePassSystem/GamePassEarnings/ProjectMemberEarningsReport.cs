/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.GamePassSystem.GamePassEarnings
{
	public class ProjectMemberEarningsReport
	{
		// Fields
		public EarningsReport earningsReport;
	
		// Constructors
		public ProjectMemberEarningsReport();
		public ProjectMemberEarningsReport(EarningsReport earningsReport);
	
		// Methods
		public void AddTierGoldRevenue(int goldAmount, GamePassTier gamePassTier);
		public void AddGameBoosterGoldRevenue(int goldAmount, string gameBooster);
		public override string ToString();
	}
}
