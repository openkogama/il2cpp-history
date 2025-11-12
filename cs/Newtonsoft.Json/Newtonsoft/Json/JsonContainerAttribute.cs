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
using Newtonsoft.Json.Serialization;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[AttributeUsage(AttributeTargets.Class | AttributeTargets.Interface, AllowMultiple = false)]
	[Nullable(0)]
	[NullableContext(2)]
	public abstract class JsonContainerAttribute : Attribute
	{
		// Fields
		[CompilerGenerated]
		private System.Type _ItemConverterType_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private object[] _ItemConverterParameters_k__BackingField;
		[CompilerGenerated]
		private NamingStrategy _NamingStrategyInstance_k__BackingField;
		internal bool? _isReference;
		internal bool? _itemIsReference;
		internal ReferenceLoopHandling? _itemReferenceLoopHandling;
		internal TypeNameHandling? _itemTypeNameHandling;
		private System.Type _namingStrategyType;
		[Nullable(new byte[2] {2, 1 })]
		private object[] _namingStrategyParameters;
	
		// Properties
		public System.Type ItemConverterType { [CompilerGenerated] get; }
		[Nullable(new byte[2] {2, 1 })]
		public object[] ItemConverterParameters { [CompilerGenerated] get; }
		public System.Type NamingStrategyType { get; }
		[Nullable(new byte[2] {2, 1 })]
		public object[] NamingStrategyParameters { get; }
		internal NamingStrategy NamingStrategyInstance { [CompilerGenerated] get; [CompilerGenerated] set; }
	}
}
