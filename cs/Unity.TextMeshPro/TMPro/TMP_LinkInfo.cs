/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public struct TMP_LinkInfo
	{
		// Fields
		public TMP_Text textComponent;
		public int hashCode;
		public int linkIdFirstCharacterIndex;
		public int linkIdLength;
		public int linkTextfirstCharacterIndex;
		public int linkTextLength;
		internal char[] linkID;
	
		// Methods
		internal void SetLinkID(char[] text, int startIndex, int length);
		public string GetLinkText();
		public string GetLink();
		public string GetLinkID();
	}
}
