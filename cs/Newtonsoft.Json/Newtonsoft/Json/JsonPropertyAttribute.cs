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

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter, AllowMultiple = false)]
	[Nullable(0)]
	[NullableContext(2)]
	public sealed class JsonPropertyAttribute : Attribute
	{
		// Fields
		internal NullValueHandling? _nullValueHandling;
		internal DefaultValueHandling? _defaultValueHandling;
		internal ReferenceLoopHandling? _referenceLoopHandling;
		internal ObjectCreationHandling? _objectCreationHandling;
		internal TypeNameHandling? _typeNameHandling;
		internal bool? _isReference;
		internal int? _order;
		internal Required? _required;
		internal bool? _itemIsReference;
		internal ReferenceLoopHandling? _itemReferenceLoopHandling;
		internal TypeNameHandling? _itemTypeNameHandling;
		[CompilerGenerated]
		private System.Type _ItemConverterType_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private object[] _ItemConverterParameters_k__BackingField;
		[CompilerGenerated]
		private System.Type _NamingStrategyType_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private object[] _NamingStrategyParameters_k__BackingField;
		[CompilerGenerated]
		private string _PropertyName_k__BackingField;
	
		// Properties
		public System.Type ItemConverterType { [CompilerGenerated] get; }
		[Nullable(new byte[2] {2, 1 })]
		public object[] ItemConverterParameters { [CompilerGenerated] get; }
		public System.Type NamingStrategyType { [CompilerGenerated] get; }
		[Nullable(new byte[2] {2, 1 })]
		public object[] NamingStrategyParameters { [CompilerGenerated] get; }
		public string PropertyName { [CompilerGenerated] get; }
	}
}
