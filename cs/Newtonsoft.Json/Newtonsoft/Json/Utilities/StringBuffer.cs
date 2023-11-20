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
using Newtonsoft.Json;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(2)]
	internal struct StringBuffer
	{
		// Fields
		private char[] _buffer;
		private int _position;
	
		// Properties
		public int Position { get; set; }
		public bool IsEmpty { get; }
		public char[] InternalBuffer { get; }
	
		// Constructors
		public StringBuffer(IArrayPool<char> bufferPool, int initalSize);
		[NullableContext(1)]
		private StringBuffer(char[] buffer);
	
		// Methods
		public void Append(IArrayPool<char> bufferPool, char value);
		[NullableContext(1)]
		public void Append([Nullable(2)] IArrayPool<char> bufferPool, char[] buffer, int startIndex, int count);
		public void Clear(IArrayPool<char> bufferPool);
		private void EnsureSize(IArrayPool<char> bufferPool, int appendLength);
		[NullableContext(1)]
		public override string ToString();
		[NullableContext(1)]
		public string ToString(int start, int length);
	}
}
