/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		public BsonString Pattern { [CompilerGenerated] get; [CompilerGenerated] set; }
		public BsonString Options { [CompilerGenerated] get; [CompilerGenerated] set; }
		public override BsonType Type { get; }
	
		// Constructors
		public BsonRegex(string pattern, string options);
	}
}
