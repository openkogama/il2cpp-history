/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Dynamic;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JsonDynamicContract : JsonContainerContract
	{
		// Fields
		[CompilerGenerated]
		private readonly JsonPropertyCollection _Properties_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {2, 1, 1 })]
		private Func<string, string> _PropertyNameResolver_k__BackingField;
		private readonly ThreadSafeStore<string, CallSite<Func<CallSite, object, object>>> _callSiteGetters;
		[Nullable(new byte[8] {1, 1, 1, 1, 1, 1, 2, 1 })]
		private readonly ThreadSafeStore<string, CallSite<Func<CallSite, object, object, object>>> _callSiteSetters;
	
		// Properties
		public JsonPropertyCollection Properties { [CompilerGenerated] get; }
		[Nullable(new byte[3] {2, 1, 1 })]
		public Func<string, string> PropertyNameResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonDynamicContract(System.Type underlyingType);
	
		// Methods
		private static CallSite<Func<CallSite, object, object>> CreateCallSiteGetter(string name);
		private static CallSite<Func<CallSite, object, object, object>> CreateCallSiteSetter(string name);
		internal bool TryGetMember(IDynamicMetaObjectProvider dynamicProvider, string name, [Nullable(2)] out object value);
		internal bool TrySetMember(IDynamicMetaObjectProvider dynamicProvider, string name, [Nullable(2)] object value);
	}
}
