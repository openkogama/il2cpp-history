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
	public class JsonContainerContract : JsonContract
	{
		// Fields
		private JsonContract _itemContract;
		private JsonContract _finalItemContract;
		[CompilerGenerated]
		private JsonConverter _ItemConverter_k__BackingField;
		[CompilerGenerated]
		private bool? _ItemIsReference_k__BackingField;
		[CompilerGenerated]
		private ReferenceLoopHandling? _ItemReferenceLoopHandling_k__BackingField;
		[CompilerGenerated]
		private TypeNameHandling? _ItemTypeNameHandling_k__BackingField;
	
		// Properties
		internal JsonContract ItemContract { get; set; }
		internal JsonContract FinalItemContract { get; }
		public JsonConverter ItemConverter { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool? ItemIsReference { [CompilerGenerated] get; [CompilerGenerated] set; }
		public ReferenceLoopHandling? ItemReferenceLoopHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
		public TypeNameHandling? ItemTypeNameHandling { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		[NullableContext(1)]
		internal JsonContainerContract(System.Type underlyingType);
	}
}
