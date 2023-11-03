/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null
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

namespace MV.WorldObject
{
	public static class HashtableFunctions
	{
		// Methods
		public static Dictionary<object, object> DeepCopyHashTable(Dictionary<object, object> from, Dictionary<object, object> to);
		public static Dictionary<object, object> DeepCopyHashTable(Dictionary<object, object> from);
		public static bool TryGetSubDictionary(out Dictionary<object, object> subDictionary, Dictionary<object, object> data, List<string> subDictionaryPath);
		public static bool ContainsSubDictionary(Dictionary<object, object> data, List<string> subDictionaryPath);
		public static Dictionary<object, object> CreateDictionaryUpdate(string key, object value, List<string> dictionaryBasePath);
		public static Dictionary<object, object> GetSettingsSubDictionary(Dictionary<object, object> data, List<string> subDictionaryPath);
		public static string PrettyString(Dictionary<object, object> dictionary);
		private static string PrettyString(Dictionary<object, object> dictionary, int padLeft);
	}
}
