/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public abstract class JsonContract
	{
		// Fields
		internal bool IsNullable;
		internal bool IsConvertable;
		internal bool IsEnum;
		internal System.Type NonNullableUnderlyingType;
		internal ReadType InternalReadType;
		internal JsonContractType ContractType;
		internal bool IsReadOnlyOrFixedSize;
		internal bool IsSealed;
		internal bool IsInstantiable;
		[Nullable(new byte[2] {2, 1 })]
		private List<SerializationCallback> _onDeserializedCallbacks;
		[Nullable(new byte[2] {2, 1 })]
		private List<SerializationCallback> _onDeserializingCallbacks;
		[Nullable(new byte[2] {2, 1 })]
		private List<SerializationCallback> _onSerializedCallbacks;
		[Nullable(new byte[2] {2, 1 })]
		private List<SerializationCallback> _onSerializingCallbacks;
		[Nullable(new byte[2] {2, 1 })]
		private List<SerializationErrorCallback> _onErrorCallbacks;
		private System.Type _createdType;
		[CompilerGenerated]
		private readonly System.Type _UnderlyingType_k__BackingField;
		[CompilerGenerated]
		private bool? _IsReference_k__BackingField;
		[CompilerGenerated]
		[Nullable(2)]
		private JsonConverter _Converter_k__BackingField;
		[CompilerGenerated]
		[Nullable(2)]
		private JsonConverter _InternalConverter_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private Func<object> _DefaultCreator_k__BackingField;
		[CompilerGenerated]
		private bool _DefaultCreatorNonPublic_k__BackingField;
	
		// Properties
		public System.Type UnderlyingType { [CompilerGenerated] get; }
		public System.Type CreatedType { get; set; }
		public bool? IsReference { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Nullable(2)]
		public JsonConverter Converter { [NullableContext(2)] [CompilerGenerated] get; [NullableContext(2)] [CompilerGenerated] set; }
		[Nullable(2)]
		public JsonConverter InternalConverter { [NullableContext(2)] [CompilerGenerated] get; [NullableContext(2)] [CompilerGenerated] internal set; }
		public IList<SerializationCallback> OnDeserializedCallbacks { get; }
		public IList<SerializationCallback> OnDeserializingCallbacks { get; }
		public IList<SerializationCallback> OnSerializedCallbacks { get; }
		public IList<SerializationCallback> OnSerializingCallbacks { get; }
		public IList<SerializationErrorCallback> OnErrorCallbacks { get; }
		[Nullable(new byte[2] {2, 1 })]
		public Func<object> DefaultCreator { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool DefaultCreatorNonPublic { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass57_0
		{
			// Fields
			[Nullable(0)]
			public MethodInfo callbackMethodInfo;
	
			// Constructors
			public __c__DisplayClass57_0();
	
			// Methods
			internal void _CreateSerializationCallback_b__0(object o, StreamingContext context);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass58_0
		{
			// Fields
			[Nullable(0)]
			public MethodInfo callbackMethodInfo;
	
			// Constructors
			public __c__DisplayClass58_0();
	
			// Methods
			internal void _CreateSerializationErrorCallback_b__0(object o, StreamingContext context, ErrorContext econtext);
		}
	
		// Constructors
		internal JsonContract(System.Type underlyingType);
	
		// Methods
		internal void InvokeOnSerializing(object o, StreamingContext context);
		internal void InvokeOnSerialized(object o, StreamingContext context);
		internal void InvokeOnDeserializing(object o, StreamingContext context);
		internal void InvokeOnDeserialized(object o, StreamingContext context);
		internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext);
		internal static SerializationCallback CreateSerializationCallback(MethodInfo callbackMethodInfo);
		internal static SerializationErrorCallback CreateSerializationErrorCallback(MethodInfo callbackMethodInfo);
	}
}
