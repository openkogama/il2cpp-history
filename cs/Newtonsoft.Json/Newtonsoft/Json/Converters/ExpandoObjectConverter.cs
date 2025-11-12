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

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class ExpandoObjectConverter : JsonConverter
	{
		// Properties
		public override bool CanWrite { get; }
	
		// Constructors
		public ExpandoObjectConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
		private object ReadValue(JsonReader reader);
		private object ReadList(JsonReader reader);
		private object ReadObject(JsonReader reader);
		public override bool CanConvert(System.Type objectType);
	}
}
