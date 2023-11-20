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
using System.Xml.XPath;

// Image 3: System.Xml.dll - Assembly: System.Xml, Version=4.0.0.0, Culture=neutral, PublicKeyToken=7cec85d7bea7798e

namespace MS.Internal.Xml.Cache
{
	internal sealed class XPathDocumentNavigator : XPathNavigator, IXmlLineInfo
	{
		// Fields
		private XPathNode[] _pageCurrent;
		private XPathNode[] _pageParent;
		private int _idxCurrent;
		private int _idxParent;
	
		// Properties
		public override string Value { get; }
		public override XPathNodeType NodeType { get; }
		public override string LocalName { get; }
		public override string NamespaceURI { get; }
		public override string Prefix { get; }
		public override XmlNameTable NameTable { get; }
		public override object UnderlyingObject { get; }
		public int LineNumber { get; }
		public int LinePosition { get; }
	
		// Constructors
		public XPathDocumentNavigator(XPathNode[] pageCurrent, int idxCurrent, XPathNode[] pageParent, int idxParent);
	
		// Methods
		public override XPathNavigator Clone();
		public override bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope);
		public override bool MoveToNextNamespace(XPathNamespaceScope scope);
		public override bool MoveToParent();
		public override bool IsSamePosition(XPathNavigator other);
		public bool HasLineInfo();
		public int GetPositionHashCode();
	}
}
