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
	public class JsonArrayContract : JsonContract
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Type _CollectionItemType_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _IsMultidimensionalArray_k__BackingField;
		private readonly bool _isCollectionItemTypeNullableType;
		private readonly Type _genericCollectionDefinitionType;
		private Type _genericWrapperType;
		private MethodCall<object, object> _genericWrapperCreator;
	
		// Properties
		internal Type CollectionItemType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool IsMultidimensionalArray { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JsonArrayContract(Type underlyingType);
	
		// Methods
		internal IWrappedCollection CreateWrapper(object list);
		private void EnsureGenericWrapperCreator();
		private bool IsTypeGenericCollectionInterface(Type type);
	}
}
