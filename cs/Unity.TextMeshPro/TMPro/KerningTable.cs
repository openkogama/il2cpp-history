/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	[Serializable]
	public class KerningTable
	{
		// Fields
		public List<KerningPair> kerningPairs;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<KerningPair, uint> __9__7_0;
			public static Func<KerningPair, uint> __9__7_1;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal uint _SortKerningPairs_b__7_0(KerningPair s);
			internal uint _SortKerningPairs_b__7_1(KerningPair s);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0
		{
			// Fields
			public uint first;
			public uint second;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal bool _AddKerningPair_b__0(KerningPair item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4_0
		{
			// Fields
			public uint first;
			public uint second;
	
			// Constructors
			public __c__DisplayClass4_0();
	
			// Methods
			internal bool _AddGlyphPairAdjustmentRecord_b__0(KerningPair item);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass5_0
		{
			// Fields
			public int left;
			public int right;
	
			// Constructors
			public __c__DisplayClass5_0();
	
			// Methods
			internal bool _RemoveKerningPair_b__0(KerningPair item);
		}
	
		// Constructors
		public KerningTable();
	
		// Methods
		public void AddKerningPair();
		public int AddKerningPair(uint first, uint second, float offset);
		public int AddGlyphPairAdjustmentRecord(uint first, GlyphValueRecord_Legacy firstAdjustments, uint second, GlyphValueRecord_Legacy secondAdjustments);
		public void RemoveKerningPair(int left, int right);
		public void RemoveKerningPair(int index);
		public void SortKerningPairs();
	}
}
