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
	public struct MaterialReference
	{
		// Fields
		public int index;
		public TMP_FontAsset fontAsset;
		public TMP_SpriteAsset spriteAsset;
		public Material material;
		public bool isDefaultMaterial;
		public bool isFallbackMaterial;
		public Material fallbackMaterial;
		public float padding;
		public int referenceCount;
	
		// Constructors
		public MaterialReference(int index, TMP_FontAsset fontAsset, TMP_SpriteAsset spriteAsset, Material material, float padding);
	
		// Methods
		public static bool Contains(MaterialReference[] materialReferences, TMP_FontAsset fontAsset);
		public static int AddMaterialReference(Material material, TMP_FontAsset fontAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup);
		public static int AddMaterialReference(Material material, TMP_SpriteAsset spriteAsset, ref MaterialReference[] materialReferences, Dictionary<int, int> materialReferenceIndexLookup);
	}
}
