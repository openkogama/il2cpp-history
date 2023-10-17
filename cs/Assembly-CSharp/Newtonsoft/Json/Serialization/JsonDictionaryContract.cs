/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Utilities;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class JsonDictionaryContract : JsonContract
	{
		// Fields
		[CompilerGenerated]
		private Func<string, string> _PropertyNameResolver_k__BackingField;
		[CompilerGenerated]
		private System.Type _DictionaryKeyType_k__BackingField;
		[CompilerGenerated]
		private System.Type _DictionaryValueType_k__BackingField;
		private readonly bool _isDictionaryValueTypeNullableType;
		private readonly System.Type _genericCollectionDefinitionType;
		private System.Type _genericWrapperType;
		private MethodCall<object, object> _genericWrapperCreator;
	
		// Properties
		public Func<string, string> PropertyNameResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal System.Type DictionaryKeyType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		internal System.Type DictionaryValueType { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JsonDictionaryContract(System.Type underlyingType);
	
		// Methods
		internal IWrappedDictionary CreateWrapper(object dictionary);
		private bool IsTypeGenericDictionaryInterface(System.Type type);
	}
}
