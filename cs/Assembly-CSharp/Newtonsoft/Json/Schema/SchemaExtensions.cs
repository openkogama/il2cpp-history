/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Linq;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	public static class SchemaExtensions
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass0_0
		{
			// Fields
			public bool valid;
	
			// Constructors
			public __c__DisplayClass0_0();
	
			// Methods
			internal void _IsValid_b__0(object sender, ValidationEventArgs args);
		}
	
		// Extension methods
		public static bool IsValid(this JToken source, JsonSchema schema);
		public static void Validate(this JToken source, JsonSchema schema);
		public static void Validate(this JToken source, JsonSchema schema, ValidationEventHandler validationEventHandler);
	}
}
