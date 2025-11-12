/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	[ExcludeFromPreset]
	public class TMP_StyleSheet : ScriptableObject
	{
		// Fields
		[SerializeField]
		private List<TMP_Style> m_StyleList;
		private Dictionary<int, TMP_Style> m_StyleLookupDictionary;
	
		// Properties
		internal List<TMP_Style> styles { get; }
	
		// Constructors
		public TMP_StyleSheet();
	
		// Methods
		private void Reset();
		public TMP_Style GetStyle(int hashCode);
		public TMP_Style GetStyle(string name);
		public void RefreshStyles();
		private void LoadStyleDictionaryInternal();
	}
}
