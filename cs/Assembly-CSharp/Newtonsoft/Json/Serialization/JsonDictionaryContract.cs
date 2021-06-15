/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class JsonDictionaryContract : JsonContract
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Func<string, string> _PropertyNameResolver_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Type _DictionaryKeyType_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Type _DictionaryValueType_k__BackingField;
		private readonly bool _isDictionaryValueTypeNullableType;
		private readonly Type _genericCollectionDefinitionType;
		private Type _genericWrapperType;
		private MethodCall<object, object> _genericWrapperCreator;
	
		// Properties
		public Func<string, string> PropertyNameResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal Type DictionaryKeyType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		internal Type DictionaryValueType { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JsonDictionaryContract(Type underlyingType);
	
		// Methods
		internal IWrappedDictionary CreateWrapper(object dictionary);
		private bool IsTypeGenericDictionaryInterface(Type type);
	}
}
