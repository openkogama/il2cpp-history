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
	public class JsonArrayContract : JsonContainerContract
	{
		// Fields
		[CompilerGenerated]
		private readonly System.Type _CollectionItemType_k__BackingField;
		[CompilerGenerated]
		private readonly bool _IsMultidimensionalArray_k__BackingField;
		private readonly System.Type _genericCollectionDefinitionType;
		private System.Type _genericWrapperType;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _genericWrapperCreator;
		[Nullable(new byte[2] {2, 1 })]
		private Func<object> _genericTemporaryCollectionCreator;
		[CompilerGenerated]
		private readonly bool _IsArray_k__BackingField;
		[CompilerGenerated]
		private readonly bool _ShouldCreateWrapper_k__BackingField;
		[CompilerGenerated]
		private bool _CanDeserialize_k__BackingField;
		private readonly ConstructorInfo _parameterizedConstructor;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _parameterizedCreator;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _overrideCreator;
		[CompilerGenerated]
		private bool _HasParameterizedCreator_k__BackingField;
	
		// Properties
		public System.Type CollectionItemType { [CompilerGenerated] get; }
		public bool IsMultidimensionalArray { [CompilerGenerated] get; }
		internal bool IsArray { [CompilerGenerated] get; }
		internal bool ShouldCreateWrapper { [CompilerGenerated] get; }
		internal bool CanDeserialize { [CompilerGenerated] get; [CompilerGenerated] private set; }
		[Nullable(new byte[2] {2, 1 })]
		internal ObjectConstructor<object> ParameterizedCreator { get; }
		[Nullable(new byte[2] {2, 1 })]
		public ObjectConstructor<object> OverrideCreator { get; set; }
		public bool HasParameterizedCreator { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal bool HasParameterizedCreatorInternal { get; }
	
		// Constructors
		[NullableContext(1)]
		public JsonArrayContract(System.Type underlyingType);
	
		// Methods
		[NullableContext(1)]
		internal IWrappedCollection CreateWrapper(object list);
		[NullableContext(1)]
		internal IList CreateTemporaryCollection();
		[NullableContext(1)]
		private void StoreFSharpListCreatorIfNecessary(System.Type underlyingType);
	}
}
