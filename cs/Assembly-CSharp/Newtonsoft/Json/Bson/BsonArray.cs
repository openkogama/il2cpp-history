/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Bson
{
	internal class BsonArray : BsonToken, IEnumerable<Newtonsoft.Json.Bson.BsonToken>
	{
		// Fields
		private readonly List<BsonToken> _children;
	
		// Properties
		public override BsonType Type { get; }
	
		// Constructors
		public BsonArray();
	
		// Methods
		public void Add(BsonToken token);
		public IEnumerator<BsonToken> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
	}
}
