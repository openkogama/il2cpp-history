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
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class EntityKeyMemberConverter : JsonConverter
	{
		// Fields
		private const string EntityKeyMemberFullTypeName = "System.Data.EntityKeyMember";
		private const string KeyPropertyName = "Key";
		private const string TypePropertyName = "Type";
		private const string ValuePropertyName = "Value";
		[Nullable(2)]
		private static ReflectionObject _reflectionObject;
	
		// Constructors
		public EntityKeyMemberConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		private static void ReadAndAssertProperty(JsonReader reader, string propertyName);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
		private static void EnsureReflectionObject(System.Type objectType);
		public override bool CanConvert(System.Type objectType);
	}
}
