/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Text;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	internal struct JsonPosition
	{
		// Fields
		private static readonly char[] SpecialCharacters;
		internal JsonContainerType Type;
		internal int Position;
		[Nullable(2)]
		internal string PropertyName;
		internal bool HasIndex;
	
		// Constructors
		public JsonPosition(JsonContainerType type);
		static JsonPosition();
	
		// Methods
		internal int CalculateLength();
		[NullableContext(2)]
		internal void WriteTo([Nullable(1)] StringBuilder sb, ref StringWriter writer, ref char[] buffer);
		internal static bool TypeHasIndex(JsonContainerType type);
		internal static string BuildPath(List<JsonPosition> positions, JsonPosition? currentPosition);
		internal static string FormatMessage([Nullable(2)] IJsonLineInfo lineInfo, string path, string message);
	}
}
