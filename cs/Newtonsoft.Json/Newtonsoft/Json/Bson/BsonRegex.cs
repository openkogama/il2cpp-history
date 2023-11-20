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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Bson
{
	internal class BsonRegex : BsonToken
	{
		// Fields
		[CompilerGenerated]
		private BsonString _Pattern_k__BackingField;
		[CompilerGenerated]
		private BsonString _Options_k__BackingField;
	
		// Properties
		public BsonString Pattern { [CompilerGenerated] set; }
		public BsonString Options { [CompilerGenerated] set; }
		public override BsonType Type { get; }
	
		// Constructors
		public BsonRegex(string pattern, string options);
	}
}
