/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Schema;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	public abstract class JsonConverter
	{
		// Properties
		public virtual bool CanRead { get; }
		public virtual bool CanWrite { get; }
	
		// Constructors
		protected JsonConverter();
	
		// Methods
		public abstract void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		public abstract object ReadJson(JsonReader reader, System.Type objectType, object existingValue, JsonSerializer serializer);
		public abstract bool CanConvert(System.Type objectType);
		public virtual JsonSchema GetSchema();
	}
}
