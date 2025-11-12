/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json.Utilities;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(2)]
	public class JsonDictionaryContract : JsonContainerContract
	{
		// Fields
		[CompilerGenerated]
		[Nullable(new byte[3] {2, 1, 1 })]
		private Func<string, string> _DictionaryKeyResolver_k__BackingField;
		[CompilerGenerated]
		private readonly System.Type _DictionaryKeyType_k__BackingField;
		[CompilerGenerated]
		private readonly System.Type _DictionaryValueType_k__BackingField;
		[CompilerGenerated]
		private JsonContract _KeyContract_k__BackingField;
		private readonly System.Type _genericCollectionDefinitionType;
		private System.Type _genericWrapperType;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _genericWrapperCreator;
		[Nullable(new byte[2] {2, 1 })]
		private Func<object> _genericTemporaryDictionaryCreator;
		[CompilerGenerated]
		private readonly bool _ShouldCreateWrapper_k__BackingField;
		private readonly ConstructorInfo _parameterizedConstructor;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _overrideCreator;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _parameterizedCreator;
		[CompilerGenerated]
		private bool _HasParameterizedCreator_k__BackingField;
	
		// Properties
		[Nullable(new byte[3] {2, 1, 1 })]
		public Func<string, string> DictionaryKeyResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
		public System.Type DictionaryKeyType { [CompilerGenerated] get; }
		public System.Type DictionaryValueType { [CompilerGenerated] get; }
		internal JsonContract KeyContract { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal bool ShouldCreateWrapper { [CompilerGenerated] get; }
		[Nullable(new byte[2] {2, 1 })]
		internal ObjectConstructor<object> ParameterizedCreator { get; }
		[Nullable(new byte[2] {2, 1 })]
		public ObjectConstructor<object> OverrideCreator { get; set; }
		public bool HasParameterizedCreator { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal bool HasParameterizedCreatorInternal { get; }
	
		// Constructors
		[NullableContext(1)]
		public JsonDictionaryContract(System.Type underlyingType);
	
		// Methods
		[NullableContext(1)]
		internal IWrappedDictionary CreateWrapper(object dictionary);
		[NullableContext(1)]
		internal IDictionary CreateTemporaryDictionary();
	}
}
