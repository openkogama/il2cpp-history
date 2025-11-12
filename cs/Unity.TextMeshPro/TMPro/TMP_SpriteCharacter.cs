/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public class TMP_SpriteCharacter : TMP_TextElement
	{
		// Fields
		[SerializeField]
		private string m_Name;
	
		// Properties
		public string name { get; set; }
	
		// Constructors
		public TMP_SpriteCharacter();
		public TMP_SpriteCharacter(uint unicode, TMP_SpriteGlyph glyph);
		public TMP_SpriteCharacter(uint unicode, TMP_SpriteAsset spriteAsset, TMP_SpriteGlyph glyph);
		internal TMP_SpriteCharacter(uint unicode, uint glyphIndex);
	}
}
