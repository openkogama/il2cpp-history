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
	public class ProjectEarningsReport
	{
		// Fields
		public EarningsReport earningsReport;
		public Dictionary<int, ProjectMemberEarningsReport> projectMemberEarningsReports;
	
		// Constructors
		public ProjectEarningsReport();
		public ProjectEarningsReport(EarningsReport earningsReport, Dictionary<int, ProjectMemberEarningsReport> projectMemberEarningsReports);
	
		// Methods
		public void AddTierGoldRevenue(int goldPerRegularMember, int goldPerSubscriberMember, GamePassTier gamePassTier, Dictionary<int, bool> projectMembers);
		public void AddGameBoosterGoldRevenue(int goldPerRegularMember, int goldPerSubscriberMember, string gameBooster, Dictionary<int, bool> projectMembers);
		public override string ToString();
	}
}
