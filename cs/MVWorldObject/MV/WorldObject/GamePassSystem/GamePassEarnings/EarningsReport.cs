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

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
[assembly: AssemblyCompany("Microsoft")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCopyright("Copyright \u00A9 Microsoft 2011")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: AssemblyProduct("MVWorldObject")]
[assembly: AssemblyTitle("MVWorldObject")]
[assembly: AssemblyTrademark("")]
[assembly: CompilationRelaxations(8)]
[assembly: ComVisible(false)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.None | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: Guid("f4b63207-de1c-4bfa-acdb-fa237d94ed1b")]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]

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
