/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class TextureAtlas
{
	// Fields
	public const int tiles = 14;
	public const int tilePixelSize = 64;
	public const int tilePixelMargin = 4;
	public const float AtlasWidth = 1024f;
	public const float AtlasHeight = 1024f;
	public const int tilePixelSizeWMargin = 72;
	public const float TileWidth = 0.0625f;
	public const float TileHeight = 0.0625f;
	private const float TileBleedMarginWidthUV = 0.00390625f;
	private const float TileBleedMarginHeightUV = 0.00390625f;
	public static int[] GlowingMaterials;
	public static Vector2[] IndexMap;
	public static bool Initialized;

	// Nested types
	public enum TextureEnums
	{
		scarletRed00 = 0,
		scarletRed01 = 1,
		scarletRed02 = 2,
		chocolate00 = 3,
		plum00 = 4,
		skyBlue00 = 5,
		skyBlue01 = 6,
		skyBlue02 = 7,
		chocolate01 = 8,
		plum01 = 9,
		chameleon00 = 10,
		chameleon01 = 11,
		chameleon02 = 12,
		chocolate02 = 13,
		plum02 = 14,
		orange00 = 15,
		orange01 = 16,
		orange02 = 17,
		butter00 = 18,
		butter01 = 19,
		aluminium00 = 20,
		aluminium01 = 21,
		aluminium02 = 22,
		aluminium03 = 23,
		butter02 = 24,
		funcIce00 = 25,
		funcLava00 = 26,
		funcBouncy00 = 27,
		funcLava01 = 28,
		funcParkour00 = 29,
		brickwall00 = 30,
		wood01 = 31,
		pavement00 = 32,
		concrete00 = 33,
		cloth01 = 34,
		pavement02 = 35,
		pavement03 = 36,
		brickwall01 = 37,
		brickwall02 = 38,
		aluminium04 = 39,
		metal00 = 40,
		metal01 = 41,
		funcBouncy01 = 42,
		funcIce01 = 43,
		pink00 = 44,
		grid00 = 45,
		grid01 = 46,
		circuit00 = 47,
		brickwall03 = 48,
		pattern01 = 49,
		metal02 = 50,
		funcSlime00 = 51,
		pattern02 = 52,
		wood02 = 53,
		funcBouncy02 = 54,
		cloud00 = 55,
		destructable02 = 56,
		destructable01 = 57,
		destructable00 = 58,
		destruction03 = 59,
		StripedCement = 60,
		Machinery = 61,
		EmbossedMetal = 62,
		Scrolling = 63,
		Kill = 64,
		Heal = 65,
		Slow = 66,
		Speed = 67,
		Crumble = 68,
		END_OF_TYPES = 69
	}

	// Constructors
	static TextureAtlas();

	// Methods
	public static Vector2 GetAtlasPoint(int MaterialID);
	public static void InitializeIndexMap();
}

