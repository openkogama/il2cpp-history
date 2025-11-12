/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[DebuggerDisplay("{DebuggerDisplay()}")]
	internal struct TextProcessingElement
	{
		// Fields
		private TextProcessingElementType m_ElementType;
		private int m_StartIndex;
		private int m_Length;
		private CharacterElement m_CharacterElement;
		private MarkupElement m_MarkupElement;
	
		// Properties
		public TextProcessingElementType ElementType { get; set; }
		public int StartIndex { get; set; }
		public int Length { get; set; }
		public CharacterElement CharacterElement { get; }
		public MarkupElement MarkupElement { get; set; }
		public static TextProcessingElement Undefined { get; }
	
		// Constructors
		public TextProcessingElement(TextProcessingElementType elementType, int startIndex, int length);
		public TextProcessingElement(TMP_TextElement textElement, int startIndex, int length);
		public TextProcessingElement(CharacterElement characterElement, int startIndex, int length);
		public TextProcessingElement(MarkupElement markupElement);
	
		// Methods
		private string DebuggerDisplay();
	}
}
