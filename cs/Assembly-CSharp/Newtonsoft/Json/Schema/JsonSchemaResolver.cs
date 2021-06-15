/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Schema
{
	public class JsonSchemaResolver
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private IList<JsonSchema> _LoadedSchemas_k__BackingField;
	
		// Properties
		public IList<JsonSchema> LoadedSchemas { [CompilerGenerated] get; [CompilerGenerated] protected set; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class _GetSchema_c__AnonStorey0
		{
			// Fields
			internal string id;
	
			// Constructors
			public _GetSchema_c__AnonStorey0();
	
			// Methods
			internal bool __m__0(JsonSchema s);
		}
	
		// Constructors
		public JsonSchemaResolver();
	
		// Methods
		public virtual JsonSchema GetSchema(string id);
	}
}
