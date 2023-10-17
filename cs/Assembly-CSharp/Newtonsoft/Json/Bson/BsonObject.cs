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
	internal class BsonObject : BsonToken, IEnumerable<Newtonsoft.Json.Bson.BsonProperty>
	{
		// Fields
		private readonly List<BsonProperty> _children;
	
		// Properties
		public override BsonType Type { get; }
	
		// Constructors
		public BsonObject();
	
		// Methods
		public void Add(string name, BsonToken token);
		public IEnumerator<BsonProperty> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
	}
}
