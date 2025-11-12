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
	public class TMP_ResourceManager
	{
		// Fields
		private static TMP_Settings s_TextSettings;
		private static readonly Dictionary<int, FontAssetRef> s_FontAssetReferences;
		private static readonly Dictionary<int, TMP_FontAsset> s_FontAssetNameReferenceLookup;
		private static readonly Dictionary<long, TMP_FontAsset> s_FontAssetFamilyNameAndStyleReferenceLookup;
		private static readonly List<int> s_FontAssetRemovalList;
		private static readonly int k_RegularStyleHashCode;
	
		// Nested types
		private struct FontAssetRef
		{
			// Fields
			public int nameHashCode;
			public int familyNameHashCode;
			public int styleNameHashCode;
			public long familyNameAndStyleHashCode;
			public readonly TMP_FontAsset fontAsset;
	
			// Constructors
			public FontAssetRef(int nameHashCode, int familyNameHashCode, int styleNameHashCode, TMP_FontAsset fontAsset);
		}
	
		// Constructors
		public TMP_ResourceManager();
		static TMP_ResourceManager();
	
		// Methods
		internal static TMP_Settings GetTextSettings();
		public static void AddFontAsset(TMP_FontAsset fontAsset);
		public static void RemoveFontAsset(TMP_FontAsset fontAsset);
		internal static bool TryGetFontAssetByName(int nameHashcode, out TMP_FontAsset fontAsset);
		internal static bool TryGetFontAssetByFamilyName(int familyNameHashCode, int styleNameHashCode, out TMP_FontAsset fontAsset);
		public static void ClearFontAssetGlyphCache();
		internal static void RebuildFontAssetCache();
	}
}
