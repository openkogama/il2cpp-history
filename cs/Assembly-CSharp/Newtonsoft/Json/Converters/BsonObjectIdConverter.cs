/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Converters
{
	public class BsonObjectIdConverter : JsonConverter
	{
		// Constructors
		public BsonObjectIdConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, object existingValue, JsonSerializer serializer);
		public override bool CanConvert(System.Type objectType);
	}
}
