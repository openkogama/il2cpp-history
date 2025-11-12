/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public struct FontAssetCreationSettings
	{
		// Fields
		public string sourceFontFileName;
		public string sourceFontFileGUID;
		public int faceIndex;
		public int pointSizeSamplingMode;
		public int pointSize;
		public int padding;
		public int paddingMode;
		public int packingMode;
		public int atlasWidth;
		public int atlasHeight;
		public int characterSetSelectionMode;
		public string characterSequence;
		public string referencedFontAssetGUID;
		public string referencedTextAssetGUID;
		public int fontStyle;
		public float fontStyleModifier;
		public int renderMode;
		public bool includeFontFeatures;
	
		// Constructors
		internal FontAssetCreationSettings(string sourceFontFileGUID, int pointSize, int pointSizeSamplingMode, int padding, int packingMode, int atlasWidth, int atlasHeight, int characterSelectionMode, string characterSet, int renderMode);
	}
}
