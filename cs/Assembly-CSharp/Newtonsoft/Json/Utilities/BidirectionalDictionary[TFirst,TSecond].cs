/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal class BidirectionalDictionary<TFirst, TSecond>
	{
		// Fields
		private readonly IDictionary<TFirst, TSecond> _firstToSecond;
		private readonly IDictionary<TSecond, TFirst> _secondToFirst;
	
		// Constructors
		public BidirectionalDictionary();
		public BidirectionalDictionary(IEqualityComparer<TFirst> firstEqualityComparer, IEqualityComparer<TSecond> secondEqualityComparer);
	
		// Methods
		public void Add(TFirst first, TSecond second);
		public bool TryGetByFirst(TFirst first, out ref TSecond second);
		public bool TryGetBySecond(TSecond second, out ref TFirst first);
	}
}
