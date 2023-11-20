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
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JsonPrimitiveContract : JsonContract
	{
		// Fields
		[CompilerGenerated]
		private PrimitiveTypeCode _TypeCode_k__BackingField;
		private static readonly Dictionary<System.Type, ReadType> ReadTypeMap;
	
		// Properties
		internal PrimitiveTypeCode TypeCode { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonPrimitiveContract(System.Type underlyingType);
		static JsonPrimitiveContract();
	}
}
