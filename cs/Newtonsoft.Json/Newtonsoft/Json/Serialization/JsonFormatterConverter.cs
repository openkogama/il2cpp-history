/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class JsonFormatterConverter : IFormatterConverter
	{
		// Fields
		private readonly JsonSerializerInternalReader _reader;
		private readonly JsonISerializableContract _contract;
		[Nullable(2)]
		private readonly JsonProperty _member;
	
		// Constructors
		public JsonFormatterConverter(JsonSerializerInternalReader reader, JsonISerializableContract contract, [Nullable(2)] JsonProperty member);
	
		// Methods
		private T GetTokenValue<T>(object value);
		public object Convert(object value, System.Type type);
		public bool ToBoolean(object value);
		public int ToInt32(object value);
		public long ToInt64(object value);
		public float ToSingle(object value);
		public string ToString(object value);
	}
}
