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
	internal class TMP_DynamicFontAssetUtilities
	{
		// Fields
		private static TMP_DynamicFontAssetUtilities s_Instance;
		private Dictionary<ulong, FontReference> s_SystemFontLookup;
		private string[] s_SystemFontPaths;
		private uint s_RegularStyleNameHashCode;
	
		// Nested types
		public struct FontReference
		{
			// Fields
			public string familyName;
			public string styleName;
			public int faceIndex;
			public string filePath;
			public ulong hashCode;
	
			// Constructors
			public FontReference(string fontFilePath, string faceNameAndStyle, int index);
		}
	
		// Constructors
		public TMP_DynamicFontAssetUtilities();
		static TMP_DynamicFontAssetUtilities();
	
		// Methods
		private void InitializeSystemFontReferenceCache();
		public static bool TryGetSystemFontReference(string familyName, out FontReference fontRef);
		public static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef);
		private bool TryGetSystemFontReferenceInternal(string familyName, string styleName, out FontReference fontRef);
	}
}
