/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Xml;

// Image 3: System.Xml.dll - Assembly: System.Xml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e

namespace MS.Internal.Xml.XPath
{
	internal sealed class XPathScanner
	{
		// Fields
		private string _xpathExpr;
		private int _xpathExprIndex;
		private LexKind _kind;
		private char _currentChar;
		private string _name;
		private string _prefix;
		private string _stringValue;
		private double _numberValue;
		private bool _canBeFunction;
		private XmlCharType _xmlCharType;
	
		// Properties
		public string SourceText { get; }
		private char CurrentChar { get; }
		public LexKind Kind { get; }
		public string Name { get; }
		public string Prefix { get; }
		public string StringValue { get; }
		public double NumberValue { get; }
		public bool CanBeFunction { get; }
	
		// Nested types
		public enum LexKind
		{
			Bang = 33,
			Quote = 34,
			Dollar = 36,
			Apos = 39,
			LParens = 40,
			RParens = 41,
			Star = 42,
			Plus = 43,
			Comma = 44,
			Minus = 45,
			Dot = 46,
			Slash = 47,
			Lt = 60,
			Eq = 61,
			Gt = 62,
			At = 64,
			And = 65,
			DotDot = 68,
			Eof = 69,
			Ge = 71,
			Le = 76,
			Ne = 78,
			Or = 79,
			SlashSlash = 83,
			LBracket = 91,
			RBracket = 93,
			Axe = 97,
			Number = 100,
			Name = 110,
			String = 115,
			Union = 124
		}
	
		// Constructors
		public XPathScanner(string xpathExpr);
	
		// Methods
		private bool NextChar();
		private void SkipSpace();
		public bool NextLex();
		private double ScanNumber();
		private double ScanFraction();
		private string ScanString();
		private string ScanName();
	}
}
