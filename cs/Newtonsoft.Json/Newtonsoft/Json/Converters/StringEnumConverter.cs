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
using Newtonsoft.Json.Serialization;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class StringEnumConverter : JsonConverter
	{
		// Fields
		[CompilerGenerated]
		[Nullable(2)]
		private NamingStrategy _NamingStrategy_k__BackingField;
		[CompilerGenerated]
		private bool _AllowIntegerValues_k__BackingField;
	
		// Properties
		[Obsolete("StringEnumConverter.CamelCaseText is obsolete. Set StringEnumConverter.NamingStrategy with CamelCaseNamingStrategy instead.")]
		public bool CamelCaseText { get; set; }
		[Nullable(2)]
		public NamingStrategy NamingStrategy { [CompilerGenerated] [NullableContext(2)] get; [CompilerGenerated] [NullableContext(2)] set; }
		public bool AllowIntegerValues { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public StringEnumConverter();
		[Obsolete("StringEnumConverter(bool) is obsolete. Create a converter with StringEnumConverter(NamingStrategy, bool) instead.")]
		public StringEnumConverter(bool camelCaseText);
		public StringEnumConverter(NamingStrategy namingStrategy, bool allowIntegerValues = true);
		public StringEnumConverter(System.Type namingStrategyType);
		public StringEnumConverter(System.Type namingStrategyType, object[] namingStrategyParameters);
		public StringEnumConverter(System.Type namingStrategyType, object[] namingStrategyParameters, bool allowIntegerValues);
	
		// Methods
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
		public override bool CanConvert(System.Type objectType);
	}
}
