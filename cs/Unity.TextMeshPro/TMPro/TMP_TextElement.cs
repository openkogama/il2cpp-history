/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.TextCore;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public class TMP_TextElement
	{
		// Fields
		[SerializeField]
		internal TextElementType m_ElementType;
		[SerializeField]
		internal uint m_Unicode;
		internal TMP_Asset m_TextAsset;
		internal Glyph m_Glyph;
		[SerializeField]
		internal uint m_GlyphIndex;
		[SerializeField]
		internal float m_Scale;
	
		// Properties
		public TextElementType elementType { get; }
		public uint unicode { get; set; }
		public TMP_Asset textAsset { get; set; }
		public Glyph glyph { get; set; }
		public uint glyphIndex { get; set; }
		public float scale { get; set; }
	
		// Constructors
		public TMP_TextElement();
	}
}
