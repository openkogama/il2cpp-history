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
	public struct TMP_GlyphValueRecord
	{
		// Fields
		[SerializeField]
		internal float m_XPlacement;
		[SerializeField]
		internal float m_YPlacement;
		[SerializeField]
		internal float m_XAdvance;
		[SerializeField]
		internal float m_YAdvance;
	
		// Properties
		public float xPlacement { get; set; }
		public float yPlacement { get; set; }
		public float xAdvance { get; set; }
		public float yAdvance { get; set; }
	
		// Constructors
		public TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance);
		internal TMP_GlyphValueRecord(GlyphValueRecord_Legacy valueRecord);
		internal TMP_GlyphValueRecord(GlyphValueRecord valueRecord);
	
		// Methods
		public static TMP_GlyphValueRecord operator +(TMP_GlyphValueRecord a, TMP_GlyphValueRecord b);
	}
}
