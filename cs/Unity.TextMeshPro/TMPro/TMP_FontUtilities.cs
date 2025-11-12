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
	public static class TMP_FontUtilities
	{
		// Fields
		private static List<int> k_searchedFontAssets;
	
		// Methods
		public static TMP_FontAsset SearchForCharacter(TMP_FontAsset font, uint unicode, out TMP_Character character);
		public static TMP_FontAsset SearchForCharacter(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character);
		private static TMP_FontAsset SearchForCharacterInternal(TMP_FontAsset font, uint unicode, out TMP_Character character);
		private static TMP_FontAsset SearchForCharacterInternal(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character);
	}
}
