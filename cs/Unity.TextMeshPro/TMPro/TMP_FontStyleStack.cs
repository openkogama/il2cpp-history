/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public struct TMP_FontStyleStack
	{
		// Fields
		public byte bold;
		public byte italic;
		public byte underline;
		public byte strikethrough;
		public byte highlight;
		public byte superscript;
		public byte subscript;
		public byte uppercase;
		public byte lowercase;
		public byte smallcaps;
	
		// Methods
		public void Clear();
		public byte Add(FontStyles style);
		public byte Remove(FontStyles style);
	}
}
