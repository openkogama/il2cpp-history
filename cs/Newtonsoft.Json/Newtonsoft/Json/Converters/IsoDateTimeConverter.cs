/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Globalization;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class IsoDateTimeConverter : DateTimeConverterBase
	{
		// Fields
		private const string DefaultDateTimeFormat = "yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK";
		private DateTimeStyles _dateTimeStyles;
		[Nullable(2)]
		private string _dateTimeFormat;
		[Nullable(2)]
		private CultureInfo _culture;
	
		// Properties
		public DateTimeStyles DateTimeStyles { get; set; }
		[Nullable(2)]
		public string DateTimeFormat { [NullableContext(2)] get; [NullableContext(2)] set; }
		public CultureInfo Culture { get; set; }
	
		// Constructors
		public IsoDateTimeConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
	}
}
