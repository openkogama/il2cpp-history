/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	public class PluralFormsCalculator
	{
		// Fields
		private int nplurals;
		private PluralFormsNode plural;
		private string expression;
	
		// Properties
		public int NPlurals { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0
		{
			// Fields
			public RecursiveTracer tracer;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			internal void _DumpNodes_b__0(PluralFormsNode node);
			internal void _DumpNodes_b__1(PluralFormsNode node);
		}
	
		// Constructors
		public PluralFormsCalculator(string expression);
	
		// Methods
		public long Evaluate(long n, bool traceToFile);
		public long Evaluate(long n);
		public static PluralFormsCalculator Make(string str);
		public void DumpNodes(string fileName);
		internal void Init(int nplurals, PluralFormsNode plural);
	}
}
