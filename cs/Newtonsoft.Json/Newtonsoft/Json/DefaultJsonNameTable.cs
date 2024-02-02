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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json
{
	[Nullable(0)]
	[NullableContext(1)]
	public class DefaultJsonNameTable : JsonNameTable
	{
		// Fields
		private static readonly int HashCodeRandomizer;
		private int _count;
		private Entry[] _entries;
		private int _mask;
	
		// Nested types
		[Nullable(0)]
		private class Entry
		{
			// Fields
			internal readonly string Value;
			internal readonly int HashCode;
			internal Entry Next;
	
			// Constructors
			internal Entry(string value, int hashCode, Entry next);
		}
	
		// Constructors
		static DefaultJsonNameTable();
		public DefaultJsonNameTable();
	
		// Methods
		public override string Get(char[] key, int start, int length);
		public string Add(string key);
		private string AddEntry(string str, int hashCode);
		private void Grow();
		private static bool TextEquals(string str1, char[] str2, int str2Start, int str2Length);
	}
}
