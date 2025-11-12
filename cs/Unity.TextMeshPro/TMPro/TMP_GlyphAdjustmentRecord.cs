/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public struct TMP_GlyphAdjustmentRecord
	{
		// Fields
		[SerializeField]
		internal uint m_GlyphIndex;
		[SerializeField]
		internal TMP_GlyphValueRecord m_GlyphValueRecord;
	
		// Properties
		public uint glyphIndex { get; set; }
		public TMP_GlyphValueRecord glyphValueRecord { get; set; }
	
		// Constructors
		public TMP_GlyphAdjustmentRecord(uint glyphIndex, TMP_GlyphValueRecord glyphValueRecord);
		internal TMP_GlyphAdjustmentRecord(GlyphAdjustmentRecord adjustmentRecord);
	}
}
