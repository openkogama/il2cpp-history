/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[ExcludeFromPreset]
	[HelpURL("https://docs.unity3d.com/Packages/com.unity.ugui@2.0/manual/TextMeshPro/Sprites.html")]
	public class TMP_SpriteAsset : TMP_Asset
	{
		// Fields
		internal Dictionary<int, int> m_NameLookup;
		internal Dictionary<uint, int> m_GlyphIndexLookup;
		public Texture spriteSheet;
		[SerializeField]
		private List<TMP_SpriteCharacter> m_SpriteCharacterTable;
		internal Dictionary<uint, TMP_SpriteCharacter> m_SpriteCharacterLookup;
		[FormerlySerializedAs("m_SpriteGlyphTable")]
		[SerializeField]
		private List<TMP_SpriteGlyph> m_GlyphTable;
		internal Dictionary<uint, TMP_SpriteGlyph> m_SpriteGlyphLookup;
		public List<TMP_Sprite> spriteInfoList;
		[SerializeField]
		public List<TMP_SpriteAsset> fallbackSpriteAssets;
		internal bool m_IsSpriteAssetLookupTablesDirty;
		private static HashSet<int> k_searchedSpriteAssets;
	
		// Properties
		public List<TMP_SpriteCharacter> spriteCharacterTable { get; internal set; }
		public Dictionary<uint, TMP_SpriteCharacter> spriteCharacterLookupTable { get; internal set; }
		public List<TMP_SpriteGlyph> spriteGlyphTable { get; internal set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<TMP_SpriteGlyph, uint> __9__32_0;
			public static Func<TMP_SpriteCharacter, uint> __9__33_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal uint _SortGlyphTable_b__32_0(TMP_SpriteGlyph item);
			internal uint _SortCharacterTable_b__33_0(TMP_SpriteCharacter c);
		}
	
		// Constructors
		public TMP_SpriteAsset();
	
		// Methods
		private void Awake();
		private Material GetDefaultSpriteMaterial();
		public void UpdateLookupTables();
		public int GetSpriteIndexFromHashcode(int hashCode);
		public int GetSpriteIndexFromUnicode(uint unicode);
		public int GetSpriteIndexFromName(string name);
		public static TMP_SpriteAsset SearchForSpriteByUnicode(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex);
		private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(List<TMP_SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex);
		private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex);
		public static TMP_SpriteAsset SearchForSpriteByHashCode(TMP_SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex);
		private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(List<TMP_SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex);
		private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMP_SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex);
		public void SortGlyphTable();
		internal void SortCharacterTable();
		internal void SortGlyphAndCharacterTables();
		private void UpgradeSpriteAsset();
	}
}
