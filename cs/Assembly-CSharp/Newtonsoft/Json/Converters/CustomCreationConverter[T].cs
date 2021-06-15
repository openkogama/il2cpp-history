/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Converters
{
	public abstract class CustomCreationConverter<T> : JsonConverter
	{
		// Properties
		public override bool CanWrite { get; }
	
		// Constructors
		protected CustomCreationConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer);
		public abstract T Create(Type objectType);
		public override bool CanConvert(Type objectType);
	}
}
