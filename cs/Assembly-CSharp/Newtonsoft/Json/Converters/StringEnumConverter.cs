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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Converters
{
	public class StringEnumConverter : JsonConverter
	{
		// Fields
		private readonly Dictionary<System.Type, BidirectionalDictionary<string, string>> _enumMemberNamesPerType;
		[CompilerGenerated]
		private bool _CamelCaseText_k__BackingField;
	
		// Properties
		public bool CamelCaseText { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<EnumMemberAttribute, string> __9__7_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal string _GetEnumNameMap_b__7_0(EnumMemberAttribute a);
		}
	
		// Constructors
		public StringEnumConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, object value, JsonSerializer serializer);
		public override object ReadJson(JsonReader reader, System.Type objectType, object existingValue, JsonSerializer serializer);
		private BidirectionalDictionary<string, string> GetEnumNameMap(System.Type t);
		public override bool CanConvert(System.Type objectType);
	}
}
