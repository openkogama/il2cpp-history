/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Globalization;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Converters
{
	public class IsoDateTimeConverter : DateTimeConverterBase
	{
		// Fields
		private const string DefaultDateTimeFormat = "yyyy\'-\'MM\'-\'dd\'T\'HH\':\'mm\':\'ss.FFFFFFFK";
		private DateTimeStyles _dateTimeStyles;
		private string _dateTimeFormat;
		private CultureInfo _culture;
	
		// Properties
		public DateTimeStyles DateTimeStyles { get; set; }
		public string DateTimeFormat { get; set; }
		public CultureInfo Culture { get; set; }
	
		// Constructors
		public IsoDateTimeConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, object existingValue, JsonSerializer serializer);
	}
}
