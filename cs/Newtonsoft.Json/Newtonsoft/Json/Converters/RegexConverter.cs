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
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Bson;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class RegexConverter : JsonConverter
	{
		// Fields
		private const string PatternName = "Pattern";
		private const string OptionsName = "Options";
	
		// Constructors
		public RegexConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		private bool HasFlag(RegexOptions options, RegexOptions flag);
		private void WriteBson(BsonWriter writer, Regex regex);
		private void WriteJson(JsonWriter writer, Regex regex, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
		private object ReadRegexString(JsonReader reader);
		private Regex ReadRegexObject(JsonReader reader, JsonSerializer serializer);
		public override bool CanConvert(System.Type objectType);
		private bool IsRegex(System.Type objectType);
	}
}
