/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Bson
{
	internal abstract class BsonToken
	{
		// Fields
		[CompilerGenerated]
		[DebuggerBrowsable]
		private BsonToken _Parent_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private int _CalculatedSize_k__BackingField;
	
		// Properties
		public abstract BsonType Type { get; }
		public BsonToken Parent { [CompilerGenerated] get; [CompilerGenerated] set; }
		public int CalculatedSize { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		protected BsonToken();
	}
}
