/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	[ExcludeFromPreset]
	[HelpURL("https://docs.unity3d.com/Packages/com.unity.ugui@2.0/manual/TextMeshPro/Settings.html")]
	public class TMP_Settings : ScriptableObject
	{
		// Fields
		private static TMP_Settings s_Instance;
		[SerializeField]
		internal string assetVersion;
		internal static string s_CurrentAssetVersion;
		[FormerlySerializedAs("m_enableWordWrapping")]
		[SerializeField]
		private TextWrappingModes m_TextWrappingMode;
		[SerializeField]
		private bool m_enableKerning;
		[SerializeField]
		private List<OTL_FeatureTag> m_ActiveFontFeatures;
		[SerializeField]
		private bool m_enableExtraPadding;
		[SerializeField]
		private bool m_enableTintAllSprites;
		[SerializeField]
		private bool m_enableParseEscapeCharacters;
		[SerializeField]
		private bool m_EnableRaycastTarget;
		[SerializeField]
		private bool m_GetFontFeaturesAtRuntime;
		[SerializeField]
		private int m_missingGlyphCharacter;
		[SerializeField]
		private bool m_ClearDynamicDataOnBuild;
		[SerializeField]
		private bool m_warningsDisabled;
		[SerializeField]
		private TMP_FontAsset m_defaultFontAsset;
		[SerializeField]
		private string m_defaultFontAssetPath;
		[SerializeField]
		private float m_defaultFontSize;
		[SerializeField]
		private float m_defaultAutoSizeMinRatio;
		[SerializeField]
		private float m_defaultAutoSizeMaxRatio;
		[SerializeField]
		private Vector2 m_defaultTextMeshProTextContainerSize;
		[SerializeField]
		private Vector2 m_defaultTextMeshProUITextContainerSize;
		[SerializeField]
		private bool m_autoSizeTextContainer;
		[SerializeField]
		private bool m_IsTextObjectScaleStatic;
		[SerializeField]
		private List<TMP_FontAsset> m_fallbackFontAssets;
		[SerializeField]
		private bool m_matchMaterialPreset;
		[SerializeField]
		private bool m_HideSubTextObjects;
		[SerializeField]
		private TMP_SpriteAsset m_defaultSpriteAsset;
		[SerializeField]
		private string m_defaultSpriteAssetPath;
		[SerializeField]
		private bool m_enableEmojiSupport;
		[SerializeField]
		private uint m_MissingCharacterSpriteUnicode;
		[SerializeField]
		private List<TMP_Asset> m_EmojiFallbackTextAssets;
		[SerializeField]
		private string m_defaultColorGradientPresetsPath;
		[SerializeField]
		private TMP_StyleSheet m_defaultStyleSheet;
		[SerializeField]
		private string m_StyleSheetsResourcePath;
		[SerializeField]
		private TextAsset m_leadingCharacters;
		[SerializeField]
		private TextAsset m_followingCharacters;
		[SerializeField]
		private LineBreakingTable m_linebreakingRules;
		[SerializeField]
		private bool m_UseModernHangulLineBreakingRules;
	
		// Properties
		public static string version { get; }
		public static TextWrappingModes textWrappingMode { get; }
		[Obsolete("The \"enableKerning\" property has been deprecated. Use the \"fontFeatures\" property to control what features are enabled by default on newly created text components.")]
		public static bool enableKerning { get; }
		public static List<OTL_FeatureTag> fontFeatures { get; }
		public static bool enableExtraPadding { get; }
		public static bool enableTintAllSprites { get; }
		public static bool enableParseEscapeCharacters { get; }
		public static bool enableRaycastTarget { get; }
		public static bool getFontFeaturesAtRuntime { get; }
		public static int missingGlyphCharacter { get; set; }
		public static bool clearDynamicDataOnBuild { get; }
		public static bool warningsDisabled { get; }
		public static TMP_FontAsset defaultFontAsset { get; set; }
		public static string defaultFontAssetPath { get; }
		public static float defaultFontSize { get; }
		public static float defaultTextAutoSizingMinRatio { get; }
		public static float defaultTextAutoSizingMaxRatio { get; }
		public static Vector2 defaultTextMeshProTextContainerSize { get; }
		public static Vector2 defaultTextMeshProUITextContainerSize { get; }
		public static bool autoSizeTextContainer { get; }
		public static bool isTextObjectScaleStatic { get; set; }
		public static List<TMP_FontAsset> fallbackFontAssets { get; set; }
		public static bool matchMaterialPreset { get; }
		public static bool hideSubTextObjects { get; }
		public static TMP_SpriteAsset defaultSpriteAsset { get; set; }
		public static string defaultSpriteAssetPath { get; }
		public static bool enableEmojiSupport { get; set; }
		public static uint missingCharacterSpriteUnicode { get; set; }
		public static List<TMP_Asset> emojiFallbackTextAssets { get; set; }
		public static string defaultColorGradientPresetsPath { get; }
		public static TMP_StyleSheet defaultStyleSheet { get; set; }
		public static string styleSheetsResourcePath { get; }
		public static TextAsset leadingCharacters { get; }
		public static TextAsset followingCharacters { get; }
		public static LineBreakingTable linebreakingRules { get; }
		public static bool useModernHangulLineBreakingRules { get; set; }
		public static TMP_Settings instance { get; }
		internal static bool isTMPSettingsNull { get; }
	
		// Nested types
		public class LineBreakingTable
		{
			// Fields
			public HashSet<uint> leadingCharacters;
			public HashSet<uint> followingCharacters;
	
			// Constructors
			public LineBreakingTable();
		}
	
		// Constructors
		public TMP_Settings();
		static TMP_Settings();
	
		// Methods
		internal void SetAssetVersion();
		public static TMP_Settings LoadDefaultSettings();
		public static TMP_Settings GetSettings();
		public static TMP_FontAsset GetFontAsset();
		public static TMP_SpriteAsset GetSpriteAsset();
		public static TMP_StyleSheet GetStyleSheet();
		public static void LoadLinebreakingRules();
		private static HashSet<uint> GetCharacters(TextAsset file);
	}
}
