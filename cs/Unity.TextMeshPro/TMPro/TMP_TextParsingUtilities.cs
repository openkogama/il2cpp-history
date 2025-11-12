/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public class TMP_TextParsingUtilities
	{
		// Fields
		private static readonly TMP_TextParsingUtilities s_Instance;
		private const string k_LookupStringL = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-";
		private const string k_LookupStringU = "-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-";
		private static readonly HashSet<uint> k_EmojiLookup;
		private static readonly HashSet<uint> k_EmojiPresentationFormLookup;
	
		// Properties
		public static TMP_TextParsingUtilities instance { get; }
	
		// Constructors
		static TMP_TextParsingUtilities();
		public TMP_TextParsingUtilities();
	
		// Methods
		public static int GetHashCode(string s);
		public static int GetHashCodeCaseSensitive(string s);
		public static char ToLowerASCIIFast(char c);
		public static char ToUpperASCIIFast(char c);
		public static uint ToUpperASCIIFast(uint c);
		public static uint ToLowerASCIIFast(uint c);
		public static bool IsHighSurrogate(uint c);
		public static bool IsLowSurrogate(uint c);
		internal static uint ConvertToUTF32(uint highSurrogate, uint lowSurrogate);
		internal static bool IsDiacriticalMark(uint c);
		internal static bool IsBaseGlyph(uint c);
		internal static bool IsEmoji(uint c);
		internal static bool IsEmojiPresentationForm(uint c);
		internal static bool IsHangul(uint c);
		internal static bool IsCJK(uint c);
	}
}
