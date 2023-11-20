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
	[Nullable(0)]
	[NullableContext(1)]
	public abstract class NamingStrategy
	{
		// Fields
		[CompilerGenerated]
		private bool _ProcessDictionaryKeys_k__BackingField;
		[CompilerGenerated]
		private bool _ProcessExtensionDataNames_k__BackingField;
		[CompilerGenerated]
		private bool _OverrideSpecifiedNames_k__BackingField;
	
		// Properties
		public bool ProcessDictionaryKeys { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool ProcessExtensionDataNames { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool OverrideSpecifiedNames { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		protected NamingStrategy();
	
		// Methods
		public virtual string GetPropertyName(string name, bool hasSpecifiedName);
		public virtual string GetExtensionDataName(string name);
		public virtual string GetDictionaryKey(string key);
		protected abstract string ResolvePropertyName(string name);
		public override int GetHashCode();
		[NullableContext(2)]
		public override bool Equals(object obj);
		[NullableContext(2)]
		protected bool Equals(NamingStrategy other);
	}
}
