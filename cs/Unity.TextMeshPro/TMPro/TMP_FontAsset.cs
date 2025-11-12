/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;
using UnityEngine.TextCore.LowLevel;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	[ExcludeFromPreset]
	public class TMP_FontAsset : TMP_Asset
	{
		// Fields
		[SerializeField]
		internal string m_SourceFontFileGUID;
		[SerializeField]
		internal FontAssetCreationSettings m_CreationSettings;
		[SerializeField]
		private Font m_SourceFontFile;
		[SerializeField]
		private string m_SourceFontFilePath;
		[SerializeField]
		private AtlasPopulationMode m_AtlasPopulationMode;
		[SerializeField]
		internal bool InternalDynamicOS;
		private int m_FamilyNameHashCode;
		private int m_StyleNameHashCode;
		[SerializeField]
		internal List<Glyph> m_GlyphTable;
		internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;
		[SerializeField]
		internal List<TMP_Character> m_CharacterTable;
		internal Dictionary<uint, TMP_Character> m_CharacterLookupDictionary;
		internal Texture2D m_AtlasTexture;
		[SerializeField]
		internal Texture2D[] m_AtlasTextures;
		[SerializeField]
		internal int m_AtlasTextureIndex;
		[SerializeField]
		private bool m_IsMultiAtlasTexturesEnabled;
		[SerializeField]
		private bool m_GetFontFeatures;
		[SerializeField]
		private bool m_ClearDynamicDataOnBuild;
		[SerializeField]
		internal int m_AtlasWidth;
		[SerializeField]
		internal int m_AtlasHeight;
		[SerializeField]
		internal int m_AtlasPadding;
		[SerializeField]
		internal GlyphRenderMode m_AtlasRenderMode;
		[SerializeField]
		private List<GlyphRect> m_UsedGlyphRects;
		[SerializeField]
		private List<GlyphRect> m_FreeGlyphRects;
		[SerializeField]
		internal TMP_FontFeatureTable m_FontFeatureTable;
		[SerializeField]
		internal bool m_ShouldReimportFontFeatures;
		[SerializeField]
		internal List<TMP_FontAsset> m_FallbackFontAssetTable;
		[SerializeField]
		private TMP_FontWeightPair[] m_FontWeightTable;
		[SerializeField]
		private TMP_FontWeightPair[] fontWeights;
		public float normalStyle;
		public float normalSpacingOffset;
		public float boldStyle;
		public float boldSpacing;
		public byte italicStyle;
		public byte tabSize;
		internal bool IsFontAssetLookupTablesDirty;
		[SerializeField]
		private FaceInfo_Legacy m_fontInfo;
		[SerializeField]
		internal List<TMP_Glyph> m_glyphInfoList;
		[FormerlySerializedAs("m_kerningInfo")]
		[SerializeField]
		internal KerningTable m_KerningTable;
		[SerializeField]
		private List<TMP_FontAsset> fallbackFontAssets;
		[SerializeField]
		public Texture2D atlas;
		private static readonly List<WeakReference<TMP_FontAsset>> s_CallbackInstances;
		private static ProfilerMarker k_ReadFontAssetDefinitionMarker;
		private static ProfilerMarker k_AddSynthesizedCharactersMarker;
		private static ProfilerMarker k_TryAddGlyphMarker;
		private static ProfilerMarker k_TryAddCharacterMarker;
		private static ProfilerMarker k_TryAddCharactersMarker;
		private static ProfilerMarker k_UpdateLigatureSubstitutionRecordsMarker;
		private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;
		private static ProfilerMarker k_UpdateDiacriticalMarkAdjustmentRecordsMarker;
		private static ProfilerMarker k_ClearFontAssetDataMarker;
		private static ProfilerMarker k_UpdateFontAssetDataMarker;
		private static string s_DefaultMaterialSuffix;
		private static HashSet<int> k_SearchedFontAssetLookup;
		private static List<TMP_FontAsset> k_FontAssets_FontFeaturesUpdateQueue;
		private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup;
		private static List<Texture2D> k_FontAssets_AtlasTexturesUpdateQueue;
		private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup;
		private List<Glyph> m_GlyphsToRender;
		private List<Glyph> m_GlyphsRendered;
		private List<uint> m_GlyphIndexList;
		private List<uint> m_GlyphIndexListNewlyAdded;
		internal List<uint> m_GlyphsToAdd;
		internal HashSet<uint> m_GlyphsToAddLookup;
		internal List<TMP_Character> m_CharactersToAdd;
		internal HashSet<uint> m_CharactersToAddLookup;
		internal List<uint> s_MissingCharacterList;
		internal HashSet<uint> m_MissingUnicodesFromFontFile;
		internal static uint[] k_GlyphIndexArray;
	
		// Properties
		public FontAssetCreationSettings creationSettings { get; set; }
		public Font sourceFontFile { get; internal set; }
		public AtlasPopulationMode atlasPopulationMode { get; set; }
		internal int familyNameHashCode { get; set; }
		internal int styleNameHashCode { get; set; }
		public List<Glyph> glyphTable { get; internal set; }
		public Dictionary<uint, Glyph> glyphLookupTable { get; }
		public List<TMP_Character> characterTable { get; internal set; }
		public Dictionary<uint, TMP_Character> characterLookupTable { get; }
		public Texture2D atlasTexture { get; }
		public Texture2D[] atlasTextures { get; set; }
		public int atlasTextureCount { get; }
		public bool isMultiAtlasTexturesEnabled { get; set; }
		public bool getFontFeatures { get; set; }
		internal bool clearDynamicDataOnBuild { get; set; }
		public int atlasWidth { get; internal set; }
		public int atlasHeight { get; internal set; }
		public int atlasPadding { get; internal set; }
		public GlyphRenderMode atlasRenderMode { get; internal set; }
		internal List<GlyphRect> usedGlyphRects { get; set; }
		internal List<GlyphRect> freeGlyphRects { get; set; }
		public TMP_FontFeatureTable fontFeatureTable { get; internal set; }
		public List<TMP_FontAsset> fallbackFontAssetTable { get; set; }
		public TMP_FontWeightPair[] fontWeightTable { get; internal set; }
		[Obsolete("The fontInfo property and underlying type is now obsolete. Please use the faceInfo property and FaceInfo type instead.")]
		public FaceInfo_Legacy fontInfo { get; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<TMP_Character, uint> __9__145_0;
			public static Func<Glyph, uint> __9__146_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal uint _SortCharacterTable_b__145_0(TMP_Character c);
			internal uint _SortGlyphTable_b__146_0(Glyph c);
		}
	
		// Constructors
		public TMP_FontAsset();
		static TMP_FontAsset();
	
		// Methods
		public static TMP_FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90);
		public static TMP_FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight);
		private static TMP_FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport = true);
		public static TMP_FontAsset CreateFontAsset(Font font);
		public static TMP_FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true);
		private static TMP_FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true);
		private static TMP_FontAsset CreateFontAssetInstance(Font font, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);
		private void RegisterCallbackInstance(TMP_FontAsset instance);
		private void OnDestroy();
		public void ReadFontAssetDefinition();
		internal void InitializeDictionaryLookupTables();
		internal void InitializeGlyphLookupDictionary();
		internal void InitializeCharacterLookupDictionary();
		internal void ClearFallbackCharacterTable();
		internal void InitializeLigatureSubstitutionLookupDictionary();
		internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary();
		internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary();
		internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary();
		internal void AddSynthesizedCharactersAndFaceMetrics();
		private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false);
		internal void AddCharacterToLookupCache(uint unicode, TMP_Character character, FontStyles fontStyle = FontStyles.Normal, FontWeight fontWeight = FontWeight.Regular, bool isAlternativeTypeface = false);
		internal FontEngineError LoadFontFace();
		internal void SortCharacterTable();
		internal void SortGlyphTable();
		internal void SortFontFeatureTable();
		internal void SortAllTables();
		public bool HasCharacter(int character);
		public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false);
		private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false);
		public bool HasCharacters(string text, out List<char> missingCharacters);
		public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false);
		public bool HasCharacters(string text);
		public static string GetCharacters(TMP_FontAsset fontAsset);
		public static int[] GetCharactersArray(TMP_FontAsset fontAsset);
		internal uint GetGlyphIndex(uint unicode);
		internal uint GetGlyphVariantIndex(uint unicode, uint variantSelectorUnicode);
		internal static void RegisterFontAssetForFontFeatureUpdate(TMP_FontAsset fontAsset);
		internal static void UpdateFontFeaturesForFontAssetsInQueue();
		internal static void RegisterAtlasTextureForApply(Texture2D texture);
		internal static void UpdateAtlasTexturesInQueue();
		internal static void UpdateFontAssetsInUpdateQueue();
		public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false);
		public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false);
		public bool TryAddCharacters(string characters, bool includeFontFeatures = false);
		public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false);
		internal bool AddGlyphInternal(uint glyphIndex);
		internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph);
		internal bool TryAddCharacterInternal(uint unicode, out TMP_Character character);
		internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out TMP_Character character);
		internal void TryAddGlyphsToAtlasTextures();
		private bool TryAddGlyphsToNewAtlasTexture();
		private void SetupNewAtlasTexture();
		internal void UpdateAtlasTexture();
		private void UpdateFontFeaturesForNewlyAddedGlyphs();
		private void UpdateGPOSFontFeaturesForNewlyAddedGlyphs();
		internal void ImportFontFeatures();
		private void UpdateGSUBFontFeaturesForNewGlyphIndex(uint glyphIndex);
		internal void UpdateLigatureSubstitutionRecords();
		private void AddLigatureSubstitutionRecords(LigatureSubstitutionRecord[] records);
		internal void UpdateGlyphAdjustmentRecords();
		private void AddPairAdjustmentRecords(GlyphPairAdjustmentRecord[] records);
		internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes);
		internal void UpdateDiacriticalMarkAdjustmentRecords();
		private void AddMarkToBaseAdjustmentRecords(MarkToBaseAdjustmentRecord[] records);
		private void AddMarkToMarkAdjustmentRecords(MarkToMarkAdjustmentRecord[] records);
		private void CopyListDataToArray<T>(List<T> srcList, ref ref T[] dstArray);
		internal void UpdateFontAssetData();
		public void ClearFontAssetData(bool setAtlasSizeToZero = false);
		internal void ClearCharacterAndGlyphTablesInternal();
		internal void ClearFontFeaturesInternal();
		private void ClearCharacterAndGlyphTables();
		private void ClearFontFeaturesTables();
		internal void ClearAtlasTextures(bool setAtlasSizeToZero = false);
		private void DestroyAtlasTextures();
		private void UpgradeGlyphAdjustmentTableToFontFeatureTable();
	}
}
