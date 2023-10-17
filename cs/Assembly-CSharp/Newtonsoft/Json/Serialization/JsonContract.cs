/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public abstract class JsonContract
	{
		// Fields
		[CompilerGenerated]
		private System.Type _UnderlyingType_k__BackingField;
		[CompilerGenerated]
		private System.Type _CreatedType_k__BackingField;
		[CompilerGenerated]
		private bool? _IsReference_k__BackingField;
		[CompilerGenerated]
		private JsonConverter _Converter_k__BackingField;
		[CompilerGenerated]
		private JsonConverter _InternalConverter_k__BackingField;
		[CompilerGenerated]
		private MethodInfo _OnDeserialized_k__BackingField;
		[CompilerGenerated]
		private MethodInfo _OnDeserializing_k__BackingField;
		[CompilerGenerated]
		private MethodInfo _OnSerialized_k__BackingField;
		[CompilerGenerated]
		private MethodInfo _OnSerializing_k__BackingField;
		[CompilerGenerated]
		private Func<object> _DefaultCreator_k__BackingField;
		[CompilerGenerated]
		private bool _DefaultCreatorNonPublic_k__BackingField;
		[CompilerGenerated]
		private MethodInfo _OnError_k__BackingField;
	
		// Properties
		public System.Type UnderlyingType { [CompilerGenerated] get; [CompilerGenerated] private set; }
		public System.Type CreatedType { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? IsReference { [CompilerGenerated] get; [CompilerGenerated] set; }
		public JsonConverter Converter { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal JsonConverter InternalConverter { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MethodInfo OnDeserialized { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MethodInfo OnDeserializing { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MethodInfo OnSerialized { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MethodInfo OnSerializing { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Func<object> DefaultCreator { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool DefaultCreatorNonPublic { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MethodInfo OnError { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		internal JsonContract(System.Type underlyingType);
	
		// Methods
		internal void InvokeOnSerializing(object o, StreamingContext context);
		internal void InvokeOnSerialized(object o, StreamingContext context);
		internal void InvokeOnDeserializing(object o, StreamingContext context);
		internal void InvokeOnDeserialized(object o, StreamingContext context);
		internal void InvokeOnError(object o, StreamingContext context, ErrorContext errorContext);
	}
}
