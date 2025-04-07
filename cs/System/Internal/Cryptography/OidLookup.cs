/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography;

// Image 4: System.dll - Assembly: System, Version=4.0.0.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e

namespace Internal.Cryptography
{
	internal static class OidLookup
	{
		// Fields
		private static readonly ConcurrentDictionary<string, string> s_lateBoundOidToFriendlyName;
		private static readonly ConcurrentDictionary<string, string> s_lateBoundFriendlyNameToOid;
		private static readonly Dictionary<string, string> s_friendlyNameToOid;
		private static readonly Dictionary<string, string> s_oidToFriendlyName;
		private static readonly Dictionary<string, string> s_compatOids;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal string _.cctor_b__10_0(KeyValuePair<string, string> kvp);
			internal string _.cctor_b__10_1(KeyValuePair<string, string> kvp);
		}
	
		// Constructors
		static OidLookup();
	
		// Methods
		public static string ToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups);
		public static string ToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups);
		private static bool ShouldUseCache(OidGroup oidGroup);
		private static string NativeOidToFriendlyName(string oid, OidGroup oidGroup, bool fallBackToAllGroups);
		private static string NativeFriendlyNameToOid(string friendlyName, OidGroup oidGroup, bool fallBackToAllGroups);
	}
}
