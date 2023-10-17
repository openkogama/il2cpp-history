/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using Newtonsoft.Json.Bson;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Converters
{
	public class RegexConverter : JsonConverter
	{
		// Constructors
		public RegexConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		private bool HasFlag(RegexOptions options, RegexOptions flag);
		private void WriteBson(BsonWriter writer, Regex regex);
		private void WriteJson(JsonWriter writer, Regex regex);
		public override object ReadJson(JsonReader reader, System.Type objectType, object existingValue, JsonSerializer serializer);
		private object ReadBson(BsonReader reader);
		private Regex ReadJson(JsonReader reader);
		public override bool CanConvert(System.Type objectType);
	}
}
