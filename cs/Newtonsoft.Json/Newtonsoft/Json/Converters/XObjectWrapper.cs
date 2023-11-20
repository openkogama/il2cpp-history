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
using System.Xml.Linq;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(2)]
	internal class XObjectWrapper : IXmlNode
	{
		// Fields
		private readonly XObject _xmlObject;
	
		// Properties
		public object WrappedNode { get; }
		public virtual XmlNodeType NodeType { get; }
		public virtual string LocalName { get; }
		[Nullable(1)]
		public virtual List<IXmlNode> ChildNodes { [NullableContext(1)] get; }
		[Nullable(1)]
		public virtual List<IXmlNode> Attributes { [NullableContext(1)] get; }
		public virtual IXmlNode ParentNode { get; }
		public virtual string Value { get; }
		public virtual string NamespaceUri { get; }
	
		// Constructors
		public XObjectWrapper(XObject xmlObject);
	
		// Methods
		[NullableContext(1)]
		public virtual IXmlNode AppendChild(IXmlNode newChild);
	}
}
