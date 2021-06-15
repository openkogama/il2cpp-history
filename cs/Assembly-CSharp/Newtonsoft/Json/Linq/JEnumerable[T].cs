/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public struct JEnumerable<T> : IJEnumerable<T>
		where T : JToken
	{
		// Fields
		public static readonly JEnumerable<T> Empty;
		private IEnumerable<T> _enumerable;
	
		// Properties
		public IJEnumerable<JToken> this[object key] { get => default; }
	
		// Constructors
		public JEnumerable(IEnumerable<T> enumerable);
		static JEnumerable();
	
		// Methods
		public IEnumerator<T> GetEnumerator();
		IEnumerator IEnumerable.GetEnumerator();
		public override bool Equals(object obj);
		public override int GetHashCode();
	}
}
