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
	internal class Function : AstNode
	{
		// Fields
		private FunctionType _functionType;
		private List<AstNode> _argumentList;
		private string _name;
		private string _prefix;
		internal static XPathResultType[] ReturnTypes;
	
		// Properties
		public override AstType Type { get; }
		public override XPathResultType ReturnType { get; }
	
		// Nested types
		public enum FunctionType
		{
			FuncLast = 0,
			FuncPosition = 1,
			FuncCount = 2,
			FuncID = 3,
			FuncLocalName = 4,
			FuncNameSpaceUri = 5,
			FuncName = 6,
			FuncString = 7,
			FuncBoolean = 8,
			FuncNumber = 9,
			FuncTrue = 10,
			FuncFalse = 11,
			FuncNot = 12,
			FuncConcat = 13,
			FuncStartsWith = 14,
			FuncContains = 15,
			FuncSubstringBefore = 16,
			FuncSubstringAfter = 17,
			FuncSubstring = 18,
			FuncStringLength = 19,
			FuncNormalize = 20,
			FuncTranslate = 21,
			FuncLang = 22,
			FuncSum = 23,
			FuncFloor = 24,
			FuncCeiling = 25,
			FuncRound = 26,
			FuncUserDefined = 27
		}
	
		// Constructors
		public Function(FunctionType ftype, List<AstNode> argumentList);
		public Function(string prefix, string name, List<AstNode> argumentList);
		public Function(FunctionType ftype, AstNode arg);
		static Function();
	}
}
