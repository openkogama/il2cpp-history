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
	public struct LigatureSubstitutionRecord
	{
		// Fields
		[SerializeField]
		private uint[] m_ComponentGlyphIDs;
		[SerializeField]
		private uint m_LigatureGlyphID;
	
		// Properties
		public uint[] componentGlyphIDs { get; set; }
		public uint ligatureGlyphID { get; set; }
	
		// Methods
		public static bool operator ==(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs);
		public static bool operator !=(LigatureSubstitutionRecord lhs, LigatureSubstitutionRecord rhs);
	}
}
