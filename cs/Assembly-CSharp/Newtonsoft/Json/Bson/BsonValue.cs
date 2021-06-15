/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Bson
{
	internal class BsonValue : BsonToken
	{
		// Fields
		private object _value;
		private BsonType _type;
	
		// Properties
		public object Value { get; }
		public override BsonType Type { get; }
	
		// Constructors
		public BsonValue(object value, BsonType type);
	}
}
