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
	internal sealed class XPathNodeInfoAtom
	{
		// Fields
		private string _localName;
		private string _namespaceUri;
		private string _prefix;
		private XPathNode[] _pageParent;
		private XPathNode[] _pageSibling;
		private XPathDocument _doc;
		private int _lineNumBase;
		private int _linePosBase;
		private XPathNodePageInfo _pageInfo;
	
		// Properties
		public XPathNodePageInfo PageInfo { get; }
		public string LocalName { get; }
		public string NamespaceUri { get; }
		public string Prefix { get; }
		public XPathNode[] SiblingPage { get; }
		public XPathNode[] ParentPage { get; }
		public XPathDocument Document { get; }
		public int LineNumberBase { get; }
		public int LinePositionBase { get; }
	}
}
