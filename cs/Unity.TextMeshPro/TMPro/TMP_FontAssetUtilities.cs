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
	public class TMP_FontAssetUtilities
	{
		// Fields
		private static readonly TMP_FontAssetUtilities s_Instance;
		private static HashSet<int> k_SearchedAssets;
	
		// Properties
		public static TMP_FontAssetUtilities instance { get; }
	
		// Constructors
		static TMP_FontAssetUtilities();
		public TMP_FontAssetUtilities();
	
		// Methods
		public static TMP_Character GetCharacterFromFontAsset(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface);
		private static TMP_Character GetCharacterFromFontAsset_Internal(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface);
		private static TMP_Character SearchFallbacksForCharacter(uint unicode, TMP_FontAsset sourceFontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface);
		public static TMP_Character GetCharacterFromFontAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface);
		internal static TMP_TextElement GetTextElementFromTextAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_Asset> textAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface);
		public static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks);
		private static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks);
		internal static uint GetCodePoint(string text, ref int index);
		internal static uint GetCodePoint(uint[] codesPoints, ref int index);
	}
}
