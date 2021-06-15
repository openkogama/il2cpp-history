/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal class Base64Encoder
	{
		// Fields
		private const int Base64LineSize = 76;
		private const int LineSizeInBytes = 57;
		private readonly char[] _charsLine;
		private readonly TextWriter _writer;
		private byte[] _leftOverBytes;
		private int _leftOverBytesCount;
	
		// Constructors
		public Base64Encoder(TextWriter writer);
	
		// Methods
		public void Encode(byte[] buffer, int index, int count);
		public void Flush();
		private void WriteChars(char[] chars, int index, int count);
	}
}
