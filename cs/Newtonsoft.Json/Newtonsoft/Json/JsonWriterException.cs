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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Serializable]
	[Nullable(0)]
	[NullableContext(1)]
	public class JsonWriterException : JsonException
	{
		// Fields
		[CompilerGenerated]
		[Nullable(2)]
		private readonly string _Path_k__BackingField;
	
		// Constructors
		public JsonWriterException();
		public JsonWriterException(SerializationInfo info, StreamingContext context);
		public JsonWriterException(string message, string path, [Nullable(2)] Exception innerException);
	
		// Methods
		internal static JsonWriterException Create(JsonWriter writer, string message, [Nullable(2)] Exception ex);
		internal static JsonWriterException Create(string path, string message, [Nullable(2)] Exception ex);
	}
}
