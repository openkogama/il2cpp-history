/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Converters
{
	public class StringEnumConverter : JsonConverter
	{
		// Fields
		private readonly Dictionary<Type, BidirectionalDictionary<string, string>> _enumMemberNamesPerType;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private bool _CamelCaseText_k__BackingField;
		[CompilerGenerated]
		private static Func<EnumMemberAttribute, string> __f__am_cache0;
	
		// Properties
		public bool CamelCaseText { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public StringEnumConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, Type objectType, object existingValue, JsonSerializer serializer);
		private BidirectionalDictionary<string, string> GetEnumNameMap(Type t);
		public override bool CanConvert(Type objectType);
		[CompilerGenerated]
		private static string _GetEnumNameMap_m__0(EnumMemberAttribute a);
	}
}
