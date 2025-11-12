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

namespace Newtonsoft.Json
{
	[Serializable]
	[Nullable(0)]
	[NullableContext(1)]
	public class JsonReaderException : JsonException
	{
		// Fields
		[CompilerGenerated]
		private readonly int _LineNumber_k__BackingField;
		[CompilerGenerated]
		private readonly int _LinePosition_k__BackingField;
		[CompilerGenerated]
		[Nullable(2)]
		private readonly string _Path_k__BackingField;
	
		// Constructors
		public JsonReaderException();
		public JsonReaderException(SerializationInfo info, StreamingContext context);
		public JsonReaderException(string message, string path, int lineNumber, int linePosition, [Nullable(2)] Exception innerException);
	
		// Methods
		internal static JsonReaderException Create(JsonReader reader, string message);
		internal static JsonReaderException Create(JsonReader reader, string message, [Nullable(2)] Exception ex);
		internal static JsonReaderException Create([Nullable(2)] IJsonLineInfo lineInfo, string path, string message, [Nullable(2)] Exception ex);
	}
}
