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
	public class JsonArrayContract : JsonContract
	{
		// Fields
		[CompilerGenerated]
		private System.Type _CollectionItemType_k__BackingField;
		[CompilerGenerated]
		private bool _IsMultidimensionalArray_k__BackingField;
		private readonly bool _isCollectionItemTypeNullableType;
		private readonly System.Type _genericCollectionDefinitionType;
		private System.Type _genericWrapperType;
		private MethodCall<object, object> _genericWrapperCreator;
	
		// Properties
		internal System.Type CollectionItemType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public bool IsMultidimensionalArray { [CompilerGenerated] get; [CompilerGenerated] private set; }
	
		// Constructors
		public JsonArrayContract(System.Type underlyingType);
	
		// Methods
		internal IWrappedCollection CreateWrapper(object list);
		private void EnsureGenericWrapperCreator();
		private bool IsTypeGenericCollectionInterface(System.Type type);
	}
}
