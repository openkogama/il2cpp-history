/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal class StringBuffer
	{
		// Fields
		private char[] _buffer;
		private int _position;
		private static readonly char[] _emptyBuffer;
	
		// Properties
		public int Position { get; set; }
	
		// Constructors
		public StringBuffer();
		public StringBuffer(int initalSize);
		static StringBuffer();
	
		// Methods
		public void Append(char value);
		public void Clear();
		private void EnsureSize(int appendLength);
		public override string ToString();
		public string ToString(int start, int length);
		public char[] GetInternalBuffer();
	}
}
