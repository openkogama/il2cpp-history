/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Serialization;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public class KerningPair
	{
		// Fields
		[FormerlySerializedAs("AscII_Left")]
		[SerializeField]
		private uint m_FirstGlyph;
		[SerializeField]
		private GlyphValueRecord_Legacy m_FirstGlyphAdjustments;
		[FormerlySerializedAs("AscII_Right")]
		[SerializeField]
		private uint m_SecondGlyph;
		[SerializeField]
		private GlyphValueRecord_Legacy m_SecondGlyphAdjustments;
		[FormerlySerializedAs("XadvanceOffset")]
		public float xOffset;
		internal static KerningPair empty;
		[SerializeField]
		private bool m_IgnoreSpacingAdjustments;
	
		// Properties
		public uint firstGlyph { get; set; }
		public GlyphValueRecord_Legacy firstGlyphAdjustments { get; }
		public uint secondGlyph { get; set; }
		public GlyphValueRecord_Legacy secondGlyphAdjustments { get; }
		public bool ignoreSpacingAdjustments { get; }
	
		// Constructors
		public KerningPair();
		public KerningPair(uint left, uint right, float offset);
		public KerningPair(uint firstGlyph, GlyphValueRecord_Legacy firstGlyphAdjustments, uint secondGlyph, GlyphValueRecord_Legacy secondGlyphAdjustments);
		static KerningPair();
	
		// Methods
		internal void ConvertLegacyKerningData();
	}
}
