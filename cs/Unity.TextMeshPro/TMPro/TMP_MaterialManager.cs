/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.UI;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	public static class TMP_MaterialManager
	{
		// Fields
		private static List<MaskingMaterial> m_materialList;
		private static Dictionary<long, FallbackMaterial> m_fallbackMaterials;
		private static Dictionary<int, long> m_fallbackMaterialLookup;
		private static List<FallbackMaterial> m_fallbackCleanupList;
		private static bool isFallbackListDirty;
	
		// Nested types
		private class FallbackMaterial
		{
			// Fields
			public long fallbackID;
			public Material sourceMaterial;
			internal int sourceMaterialCRC;
			public Material fallbackMaterial;
			public int count;
	
			// Constructors
			public FallbackMaterial();
		}
	
		private class MaskingMaterial
		{
			// Fields
			public Material baseMaterial;
			public Material stencilMaterial;
			public int count;
			public int stencilID;
	
			// Constructors
			public MaskingMaterial();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass11_0
		{
			// Fields
			public Material stencilMaterial;
	
			// Constructors
			public __c__DisplayClass11_0();
	
			// Methods
			internal bool _AddMaskingMaterial_b__0(MaskingMaterial item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass12_0
		{
			// Fields
			public Material stencilMaterial;
	
			// Constructors
			public __c__DisplayClass12_0();
	
			// Methods
			internal bool _RemoveStencilMaterial_b__0(MaskingMaterial item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass13_0
		{
			// Fields
			public Material baseMaterial;
	
			// Constructors
			public __c__DisplayClass13_0();
	
			// Methods
			internal bool _ReleaseBaseMaterial_b__0(MaskingMaterial item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			public Material stencilMaterial;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal bool _GetBaseMaterial_b__0(MaskingMaterial item);
		}
	
		// Constructors
		static TMP_MaterialManager();
	
		// Methods
		private static void OnPreRender();
		public static Material GetStencilMaterial(Material baseMaterial, int stencilID);
		public static void ReleaseStencilMaterial(Material stencilMaterial);
		public static Material GetBaseMaterial(Material stencilMaterial);
		public static Material SetStencil(Material material, int stencilID);
		public static void AddMaskingMaterial(Material baseMaterial, Material stencilMaterial, int stencilID);
		public static void RemoveStencilMaterial(Material stencilMaterial);
		public static void ReleaseBaseMaterial(Material baseMaterial);
		public static void ClearMaterials();
		public static int GetStencilID(GameObject obj);
		public static Material GetMaterialForRendering(MaskableGraphic graphic, Material baseMaterial);
		private static Transform FindRootSortOverrideCanvas(Transform start);
		internal static Material GetFallbackMaterial(TMP_FontAsset fontAsset, Material sourceMaterial, int atlasIndex);
		public static Material GetFallbackMaterial(Material sourceMaterial, Material targetMaterial);
		public static void AddFallbackMaterialReference(Material targetMaterial);
		public static void RemoveFallbackMaterialReference(Material targetMaterial);
		public static void CleanupFallbackMaterials();
		public static void ReleaseFallbackMaterial(Material fallbackMaterial);
		public static void CopyMaterialPresetProperties(Material source, Material destination);
	}
}
