/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class TextureAtlasData
{
	// Fields
	public const int NrOfTiles = 69;
	public const int DefaultNrOfColumns = 16;
	public const int TileMarginSizeInTiles = 3;
	private const int AnimationScrollVertical = 0;
	private const int AnimationScrollHorizontal = 1;
	private const int AnimationExpandAndContract = 2;
	private const int AnimationLiquid = 3;
	private const int EmissionSolid = 0;
	private const int EmissionWave = 1;
	private const int EmissionOscillate = 2;
	private const int EmissionNoise = 3;
	public static readonly Vector2[] MeshUVs;
	public static readonly Vector2[] CubeUVs;
	private static Dictionary<Tile, MaterialData> materialDataDictionary;

	// Nested types
	private class MaterialData
	{
		// Fields
		public Color colorData;
		public Vector4 emissiveData;
		public Vector4 animationData;

		// Constructors
		public MaterialData(Color colorData, Vector4 emissiveData, Vector4 animationData);
	}

	// Constructors
	static TextureAtlasData();

	// Methods
	public static void Initialize();
	private static void InitializeEmissiveData();
	private static void InitializeAnimationData();
	public static Color GetMaterialColorData(int materialID);
	public static Vector4[] GetTileEmissionArray();
	public static Vector4[] GetTileAnimationArray();
	private static ValueTuple<int, int> TileSizeAndMargin(int atlasWidth);
	public static int AtlasColumns(int atlasWidth);
	public static Vector4 TileUVData(int atlasWidth, int atlasHeight);
	public static void StreamAtlasDataToMaterial([IsReadOnly] in Material material, bool usingSM3);
	public static void StreamAtlasUVsToMaterial([IsReadOnly] in Material material);
}

