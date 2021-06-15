/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		private sealed class _DumpNodes_c__AnonStorey0
		{
			// Fields
			internal RecursiveTracer tracer;
	
			// Constructors
			public _DumpNodes_c__AnonStorey0();
	
			// Methods
			internal void __m__0(PluralFormsNode node);
			internal void __m__1(PluralFormsNode node);
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
