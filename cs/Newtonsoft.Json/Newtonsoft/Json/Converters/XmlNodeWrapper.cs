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
using System.Runtime.Versioning;
using System.Xml;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(2)]
	internal class XmlNodeWrapper : IXmlNode
	{
		// Fields
		[Nullable(1)]
		private readonly XmlNode _node;
		[Nullable(new byte[2] {2, 1 })]
		private List<IXmlNode> _childNodes;
		[Nullable(new byte[2] {2, 1 })]
		private List<IXmlNode> _attributes;
	
		// Properties
		public object WrappedNode { get; }
		public XmlNodeType NodeType { get; }
		public virtual string LocalName { get; }
		[Nullable(1)]
		public List<IXmlNode> ChildNodes { [NullableContext(1)] get; }
		[Nullable(1)]
		public List<IXmlNode> Attributes { [NullableContext(1)] get; }
		private bool HasAttributes { get; }
		public IXmlNode ParentNode { get; }
		public string Value { get; set; }
		public string NamespaceUri { get; }
	
		// Constructors
		[NullableContext(1)]
		public XmlNodeWrapper(XmlNode node);
	
		// Methods
		[NullableContext(1)]
		internal static IXmlNode WrapNode(XmlNode node);
		[NullableContext(1)]
		public IXmlNode AppendChild(IXmlNode newChild);
	}
}
