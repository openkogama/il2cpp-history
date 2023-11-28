/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

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

namespace MV.WorldObject.AntiCheat
{
	public class ApplicationDesc
	{
		// Fields
		private string programName;
		private bool strictComparison;
		public RegistryKey[] associatedRegistryKeys;
		[CompilerGenerated]
		private string _ExeCertSubjectName_k__BackingField;
	
		// Properties
		public string ProgramName { get; set; }
		public string ExeCertSubjectName { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool StrictComparison { get; }
	
		// Nested types
		public class RegistryKey
		{
			// Fields
			private string name;
			private bool strictComparison;
	
			// Properties
			public string Name { get; }
	
			// Constructors
			public RegistryKey();
		}
	
		// Constructors
		public ApplicationDesc();
		public ApplicationDesc(string displayName, string exeCertSubjectName, bool strictNameComparison, RegistryKey[] associatedRegKeys);
	}
}
