/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Xml.XPath;

// Image 3: System.Xml.dll - Assembly: System.Xml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e

namespace MS.Internal.Xml.XPath
{
	internal class XPathParser
	{
		// Fields
		private XPathScanner _scanner;
		private int _parseDepth;
		private static readonly XPathResultType[] s_temparray1;
		private static readonly XPathResultType[] s_temparray2;
		private static readonly XPathResultType[] s_temparray3;
		private static readonly XPathResultType[] s_temparray4;
		private static readonly XPathResultType[] s_temparray5;
		private static readonly XPathResultType[] s_temparray6;
		private static readonly XPathResultType[] s_temparray7;
		private static readonly XPathResultType[] s_temparray8;
		private static readonly XPathResultType[] s_temparray9;
		private static Dictionary<string, ParamInfo> s_functionTable;
		private static Dictionary<string, Axis.AxisType> s_AxesTable;
	
		// Nested types
		private class ParamInfo
		{
			// Fields
			private Function.FunctionType _ftype;
			private int _minargs;
			private int _maxargs;
			private XPathResultType[] _argTypes;
	
			// Properties
			public Function.FunctionType FType { get; }
			public int Minargs { get; }
			public int Maxargs { get; }
			public XPathResultType[] ArgTypes { get; }
	
			// Constructors
			internal ParamInfo(Function.FunctionType ftype, int minargs, int maxargs, XPathResultType[] argTypes);
		}
	
		// Constructors
		private XPathParser(XPathScanner scanner);
		static XPathParser();
	
		// Methods
		public static AstNode ParseXPathExpression(string xpathExpression);
		private AstNode ParseExpression(AstNode qyInput);
		private AstNode ParseOrExpr(AstNode qyInput);
		private AstNode ParseAndExpr(AstNode qyInput);
		private AstNode ParseEqualityExpr(AstNode qyInput);
		private AstNode ParseRelationalExpr(AstNode qyInput);
		private AstNode ParseAdditiveExpr(AstNode qyInput);
		private AstNode ParseMultiplicativeExpr(AstNode qyInput);
		private AstNode ParseUnaryExpr(AstNode qyInput);
		private AstNode ParseUnionExpr(AstNode qyInput);
		private static bool IsNodeType(XPathScanner scaner);
		private AstNode ParsePathExpr(AstNode qyInput);
		private AstNode ParseFilterExpr(AstNode qyInput);
		private AstNode ParsePredicate(AstNode qyInput);
		private AstNode ParseLocationPath(AstNode qyInput);
		private AstNode ParseRelativeLocationPath(AstNode qyInput);
		private static bool IsStep(XPathScanner.LexKind lexKind);
		private AstNode ParseStep(AstNode qyInput);
		private AstNode ParseNodeTest(AstNode qyInput, Axis.AxisType axisType, XPathNodeType nodeType);
		private static bool IsPrimaryExpr(XPathScanner scanner);
		private AstNode ParsePrimaryExpr(AstNode qyInput);
		private AstNode ParseMethod(AstNode qyInput);
		private void CheckToken(XPathScanner.LexKind t);
		private void PassToken(XPathScanner.LexKind t);
		private void NextLex();
		private bool TestOp(string op);
		private void CheckNodeSet(XPathResultType t);
		private static Dictionary<string, ParamInfo> CreateFunctionTable();
		private static Dictionary<string, Axis.AxisType> CreateAxesTable();
		private Axis.AxisType GetAxis();
	}
}
