/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class Base64Encoder
	{
		// Fields
		private readonly char[] _charsLine;
		private readonly TextWriter _writer;
		[Nullable(2)]
		private byte[] _leftOverBytes;
		private int _leftOverBytesCount;
	
		// Constructors
		public Base64Encoder(TextWriter writer);
	
		// Methods
		private void ValidateEncode(byte[] buffer, int index, int count);
		public void Encode(byte[] buffer, int index, int count);
		private void StoreLeftOverBytes(byte[] buffer, int index, ref int count);
		private bool FulfillFromLeftover(byte[] buffer, int index, ref int count);
		public void Flush();
		private void WriteChars(char[] chars, int index, int count);
	}
}
