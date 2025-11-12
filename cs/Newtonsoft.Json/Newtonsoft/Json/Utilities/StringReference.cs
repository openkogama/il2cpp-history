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

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[IsReadOnly]
	[Nullable(0)]
	[NullableContext(1)]
	internal struct StringReference
	{
		// Fields
		private readonly char[] _chars;
		private readonly int _startIndex;
		private readonly int _length;
	
		// Properties
		public char this[int i] { get => default; }
		public char[] Chars { get; }
		public int StartIndex { get; }
		public int Length { get; }
	
		// Constructors
		public StringReference(char[] chars, int startIndex, int length);
	
		// Methods
		public override string ToString();
	}
}
