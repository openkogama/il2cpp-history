/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public class MaterialReferenceManager
	{
		// Fields
		private static MaterialReferenceManager s_Instance;
		private Dictionary<int, Material> m_FontMaterialReferenceLookup;
		private Dictionary<int, TMP_FontAsset> m_FontAssetReferenceLookup;
		private Dictionary<int, TMP_SpriteAsset> m_SpriteAssetReferenceLookup;
		private Dictionary<int, TMP_ColorGradient> m_ColorGradientReferenceLookup;
	
		// Properties
		public static MaterialReferenceManager instance { get; }
	
		// Constructors
		public MaterialReferenceManager();
	
		// Methods
		public static void AddFontAsset(TMP_FontAsset fontAsset);
		private void AddFontAssetInternal(TMP_FontAsset fontAsset);
		public static void AddSpriteAsset(TMP_SpriteAsset spriteAsset);
		private void AddSpriteAssetInternal(TMP_SpriteAsset spriteAsset);
		public static void AddSpriteAsset(int hashCode, TMP_SpriteAsset spriteAsset);
		private void AddSpriteAssetInternal(int hashCode, TMP_SpriteAsset spriteAsset);
		public static void AddFontMaterial(int hashCode, Material material);
		private void AddFontMaterialInternal(int hashCode, Material material);
		public static void AddColorGradientPreset(int hashCode, TMP_ColorGradient spriteAsset);
		private void AddColorGradientPreset_Internal(int hashCode, TMP_ColorGradient spriteAsset);
		public bool Contains(TMP_FontAsset font);
		public bool Contains(TMP_SpriteAsset sprite);
		public static bool TryGetFontAsset(int hashCode, out TMP_FontAsset fontAsset);
		private bool TryGetFontAssetInternal(int hashCode, out TMP_FontAsset fontAsset);
		public static bool TryGetSpriteAsset(int hashCode, out TMP_SpriteAsset spriteAsset);
		private bool TryGetSpriteAssetInternal(int hashCode, out TMP_SpriteAsset spriteAsset);
		public static bool TryGetColorGradientPreset(int hashCode, out TMP_ColorGradient gradientPreset);
		private bool TryGetColorGradientPresetInternal(int hashCode, out TMP_ColorGradient gradientPreset);
		public static bool TryGetMaterial(int hashCode, out Material material);
		private bool TryGetMaterialInternal(int hashCode, out Material material);
	}
}
