/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject.HighlightSystem.HighlightPayloads;

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

namespace MV.WorldObject.MetaData
{
	public class ProfileMetaData
	{
		// Fields
		protected readonly bool IsInitialized;
		public FirstTimeState FirstTimeState;
		public ProfileHighlightState ProfileHighlightState;
		public ProfileSettingsState ProfileSettingsState;
		protected SerializeFlag serializeFlags;
	
		// Nested types
		[Flags]
		public enum SerializeFlag : byte
		{
			Nothing = 0,
			FirstTimeState = 1,
			TestData = 4,
			ProfileHighlightState = 8,
			ProfileSettingsState = 16,
			GoldRewardLevel = 32,
			PlayNewGamesForGoldData = 64,
			All = 127
		}
	
		// Constructors
		public ProfileMetaData();
		protected ProfileMetaData(bool isInitialized);
	
		// Methods
		public bool ShouldSerializeFirstTimeState();
		public bool ShouldSerializeTestData();
		public bool ShouldSerializeProfileHighlightState();
		public bool ShouldSerializeProfileSettingsState();
	}
}
