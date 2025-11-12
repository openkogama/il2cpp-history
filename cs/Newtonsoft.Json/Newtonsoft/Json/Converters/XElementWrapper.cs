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
using System.Xml.Linq;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class XElementWrapper : XContainerWrapper, IXmlElement
	{
		// Fields
		[Nullable(new byte[2] {2, 1 })]
		private List<IXmlNode> _attributes;
	
		// Properties
		private XElement Element { get; }
		public override List<IXmlNode> Attributes { get; }
		[Nullable(2)]
		public override string Value { [NullableContext(2)] get; }
		[Nullable(2)]
		public override string LocalName { [NullableContext(2)] get; }
		[Nullable(2)]
		public override string NamespaceUri { [NullableContext(2)] get; }
		public bool IsEmpty { get; }
	
		// Constructors
		public XElementWrapper(XElement element);
	
		// Methods
		public void SetAttributeNode(IXmlNode attribute);
		private bool HasImplicitNamespaceAttribute(string namespaceUri);
		public override IXmlNode AppendChild(IXmlNode newChild);
		public string GetPrefixOfNamespace(string namespaceUri);
	}
}
