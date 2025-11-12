/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.TextCore.LowLevel;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public class TMP_FontFeatureTable
	{
		// Fields
		[SerializeField]
		internal List<MultipleSubstitutionRecord> m_MultipleSubstitutionRecords;
		[SerializeField]
		internal List<LigatureSubstitutionRecord> m_LigatureSubstitutionRecords;
		[SerializeField]
		internal List<GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecords;
		[SerializeField]
		internal List<MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecords;
		[SerializeField]
		internal List<MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecords;
		internal Dictionary<uint, List<LigatureSubstitutionRecord>> m_LigatureSubstitutionRecordLookup;
		internal Dictionary<uint, GlyphPairAdjustmentRecord> m_GlyphPairAdjustmentRecordLookup;
		internal Dictionary<uint, MarkToBaseAdjustmentRecord> m_MarkToBaseAdjustmentRecordLookup;
		internal Dictionary<uint, MarkToMarkAdjustmentRecord> m_MarkToMarkAdjustmentRecordLookup;
	
		// Properties
		public List<MultipleSubstitutionRecord> multipleSubstitutionRecords { get; set; }
		public List<LigatureSubstitutionRecord> ligatureRecords { get; set; }
		public List<GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords { get; set; }
		public List<MarkToBaseAdjustmentRecord> MarkToBaseAdjustmentRecords { get; set; }
		public List<MarkToMarkAdjustmentRecord> MarkToMarkAdjustmentRecords { get; set; }
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<GlyphPairAdjustmentRecord, uint> __9__25_0;
			public static Func<GlyphPairAdjustmentRecord, uint> __9__25_1;
			public static Func<MarkToBaseAdjustmentRecord, uint> __9__26_0;
			public static Func<MarkToBaseAdjustmentRecord, uint> __9__26_1;
			public static Func<MarkToMarkAdjustmentRecord, uint> __9__27_0;
			public static Func<MarkToMarkAdjustmentRecord, uint> __9__27_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal uint _SortGlyphPairAdjustmentRecords_b__25_0(GlyphPairAdjustmentRecord s);
			internal uint _SortGlyphPairAdjustmentRecords_b__25_1(GlyphPairAdjustmentRecord s);
			internal uint _SortMarkToBaseAdjustmentRecords_b__26_0(MarkToBaseAdjustmentRecord s);
			internal uint _SortMarkToBaseAdjustmentRecords_b__26_1(MarkToBaseAdjustmentRecord s);
			internal uint _SortMarkToMarkAdjustmentRecords_b__27_0(MarkToMarkAdjustmentRecord s);
			internal uint _SortMarkToMarkAdjustmentRecords_b__27_1(MarkToMarkAdjustmentRecord s);
		}
	
		// Constructors
		public TMP_FontFeatureTable();
	
		// Methods
		public void SortGlyphPairAdjustmentRecords();
		public void SortMarkToBaseAdjustmentRecords();
		public void SortMarkToMarkAdjustmentRecords();
	}
}
