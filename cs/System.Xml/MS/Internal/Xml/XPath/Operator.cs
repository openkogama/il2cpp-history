/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Xml.XPath;

// Image 3: System.Xml.dll - Assembly: System.Xml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e

namespace MS.Internal.Xml.XPath
{
	internal class Operator : AstNode
	{
		// Fields
		private static Op[] s_invertOp;
		private Op _opType;
		private AstNode _opnd1;
		private AstNode _opnd2;
	
		// Properties
		public override AstType Type { get; }
		public override XPathResultType ReturnType { get; }
	
		// Nested types
		public enum Op
		{
			INVALID = 0,
			OR = 1,
			AND = 2,
			EQ = 3,
			NE = 4,
			LT = 5,
			LE = 6,
			GT = 7,
			GE = 8,
			PLUS = 9,
			MINUS = 10,
			MUL = 11,
			DIV = 12,
			MOD = 13,
			UNION = 14
		}
	
		// Constructors
		public Operator(Op op, AstNode opnd1, AstNode opnd2);
		static Operator();
	}
}
