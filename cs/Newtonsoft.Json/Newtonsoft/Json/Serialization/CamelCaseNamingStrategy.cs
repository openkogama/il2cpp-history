/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	public class CamelCaseNamingStrategy : NamingStrategy
	{
		// Constructors
		public CamelCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames);
		public CamelCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames);
		public CamelCaseNamingStrategy();
	
		// Methods
		[NullableContext(1)]
		protected override string ResolvePropertyName(string name);
	}
}
