/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace GNU.Gettext
{
	internal class PluralFormsNode
	{
		// Fields
		private PluralFormsToken token;
		private PluralFormsNode[] nodes;
		private RecursiveTracer tracer;
	
		// Properties
		public PluralFormsToken Token { get; }
		public PluralFormsNode[] Nodes { get; }
		public int NodesCount { get; }
		internal RecursiveTracer Tracer { get; set; }
	
		// Nested types
		public delegate void IterateNodesDelegate(PluralFormsNode node);
	
		// Constructors
		public PluralFormsNode(PluralFormsToken token);
	
		// Methods
		public PluralFormsNode Node(int i);
		public void SetNode(int i, PluralFormsNode n);
		public PluralFormsNode ReleaseNode(int i);
		public long Evaluate(long n);
		public override string ToString();
		public static void IterateNodes(PluralFormsNode node, IterateNodesDelegate doBefore, IterateNodesDelegate doAfter);
	}
}
