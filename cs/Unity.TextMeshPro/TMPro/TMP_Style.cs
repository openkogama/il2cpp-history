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
	public class TMP_Style
	{
		// Fields
		internal static TMP_Style k_NormalStyle;
		[SerializeField]
		private string m_Name;
		[SerializeField]
		private int m_HashCode;
		[SerializeField]
		private string m_OpeningDefinition;
		[SerializeField]
		private string m_ClosingDefinition;
		[SerializeField]
		private uint[] m_OpeningTagArray;
		[SerializeField]
		private uint[] m_ClosingTagArray;
	
		// Properties
		public static TMP_Style NormalStyle { get; }
		public string name { get; set; }
		public int hashCode { get; set; }
		public string styleOpeningDefinition { get; }
		public string styleClosingDefinition { get; }
		public uint[] styleOpeningTagArray { get; }
		public uint[] styleClosingTagArray { get; }
	
		// Constructors
		internal TMP_Style(string styleName, string styleOpeningDefinition, string styleClosingDefinition);
	
		// Methods
		public void RefreshStyle();
	}
}
