/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.AntiCheat
{
	public class ApplicationDesc
	{
		// Fields
		private string programName;
		[CompilerGenerated]
		private string _ExeCertSubjectName_k__BackingField;
		private bool strictComparison;
		public RegistryKey[] associatedRegistryKeys;
	
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
