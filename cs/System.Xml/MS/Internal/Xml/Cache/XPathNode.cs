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

namespace MS.Internal.Xml.Cache
{
	internal struct XPathNode
	{
		// Fields
		private XPathNodeInfoAtom _info;
		private ushort _idxSibling;
		private ushort _idxParent;
		private ushort _idxSimilar;
		private ushort _posOffset;
		private uint _props;
		private string _value;
	
		// Properties
		public XPathNodeType NodeType { get; }
		public string Prefix { get; }
		public string LocalName { get; }
		public string NamespaceUri { get; }
		public XPathDocument Document { get; }
		public int LineNumber { get; }
		public int LinePosition { get; }
		public int CollapsedLinePosition { get; }
		public XPathNodePageInfo PageInfo { get; }
		public bool IsXmlNamespaceNode { get; }
		public bool HasSibling { get; }
		public bool HasCollapsedText { get; }
		public bool IsText { get; }
		public bool HasNamespaceDecls { get; }
		public string Value { get; }
	
		// Methods
		public int GetParent(out XPathNode[] pageNode);
		public int GetSibling(out XPathNode[] pageNode);
	}
}
