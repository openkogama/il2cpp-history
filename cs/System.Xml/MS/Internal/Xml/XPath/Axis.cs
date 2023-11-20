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
	internal class Axis : AstNode
	{
		// Fields
		private AxisType _axisType;
		private AstNode _input;
		private string _prefix;
		private string _name;
		private XPathNodeType _nodeType;
		protected bool abbrAxis;
		private string _urn;
	
		// Properties
		public override AstType Type { get; }
		public override XPathResultType ReturnType { get; }
		public AstNode Input { get; set; }
		public string Prefix { get; }
		public string Name { get; }
		public XPathNodeType NodeType { get; }
		public AxisType TypeOfAxis { get; }
		public bool AbbrAxis { get; }
		public string Urn { get; set; }
	
		// Nested types
		public enum AxisType
		{
			Ancestor = 0,
			AncestorOrSelf = 1,
			Attribute = 2,
			Child = 3,
			Descendant = 4,
			DescendantOrSelf = 5,
			Following = 6,
			FollowingSibling = 7,
			Namespace = 8,
			Parent = 9,
			Preceding = 10,
			PrecedingSibling = 11,
			Self = 12,
			None = 13
		}
	
		// Constructors
		public Axis(AxisType axisType, AstNode input, string prefix, string name, XPathNodeType nodetype);
		public Axis(AxisType axisType, AstNode input);
	}
}
