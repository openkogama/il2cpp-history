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
using Newtonsoft.Json;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(2)]
	public class JsonObjectContract : JsonContainerContract
	{
		// Fields
		[CompilerGenerated]
		private MemberSerialization _MemberSerialization_k__BackingField;
		[CompilerGenerated]
		private MissingMemberHandling? _MissingMemberHandling_k__BackingField;
		[CompilerGenerated]
		private Required? _ItemRequired_k__BackingField;
		[CompilerGenerated]
		private NullValueHandling? _ItemNullValueHandling_k__BackingField;
		[CompilerGenerated]
		[Nullable(1)]
		private readonly JsonPropertyCollection _Properties_k__BackingField;
		[CompilerGenerated]
		private ExtensionDataSetter _ExtensionDataSetter_k__BackingField;
		[CompilerGenerated]
		private ExtensionDataGetter _ExtensionDataGetter_k__BackingField;
		[CompilerGenerated]
		[Nullable(new byte[3] {2, 1, 1 })]
		private Func<string, string> _ExtensionDataNameResolver_k__BackingField;
		internal bool ExtensionDataIsJToken;
		private bool? _hasRequiredOrDefaultValueProperties;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _overrideCreator;
		[Nullable(new byte[2] {2, 1 })]
		private ObjectConstructor<object> _parameterizedCreator;
		private JsonPropertyCollection _creatorParameters;
		private System.Type _extensionDataValueType;
	
		// Properties
		public MemberSerialization MemberSerialization { [CompilerGenerated] get; [CompilerGenerated] set; }
		public MissingMemberHandling? MissingMemberHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Required? ItemRequired { [CompilerGenerated] get; [CompilerGenerated] set; }
		public NullValueHandling? ItemNullValueHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		[Nullable(1)]
		public JsonPropertyCollection Properties { [NullableContext(1)] [CompilerGenerated] get; }
		[Nullable(1)]
		public JsonPropertyCollection CreatorParameters { [NullableContext(1)] get; }
		[Nullable(new byte[2] {2, 1 })]
		public ObjectConstructor<object> OverrideCreator { get; set; }
		[Nullable(new byte[2] {2, 1 })]
		internal ObjectConstructor<object> ParameterizedCreator { get; set; }
		public ExtensionDataSetter ExtensionDataSetter { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ExtensionDataGetter ExtensionDataGetter { [CompilerGenerated] get; [CompilerGenerated] set; }
		public System.Type ExtensionDataValueType { set; }
		[Nullable(new byte[3] {2, 1, 1 })]
		public Func<string, string> ExtensionDataNameResolver { [CompilerGenerated] get; [CompilerGenerated] set; }
		internal bool HasRequiredOrDefaultValueProperties { get; }
	
		// Constructors
		[NullableContext(1)]
		public JsonObjectContract(System.Type underlyingType);
	
		// Methods
		[NullableContext(1)]
		internal object GetUninitializedObject();
	}
}
