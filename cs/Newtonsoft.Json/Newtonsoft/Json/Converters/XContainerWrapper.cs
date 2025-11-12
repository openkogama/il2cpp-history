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
	internal class XContainerWrapper : XObjectWrapper
	{
		// Fields
		[Nullable(new byte[2] {2, 1 })]
		private List<IXmlNode> _childNodes;
	
		// Properties
		private XContainer Container { get; }
		public override List<IXmlNode> ChildNodes { get; }
		protected virtual bool HasChildNodes { get; }
		[Nullable(2)]
		public override IXmlNode ParentNode { [NullableContext(2)] get; }
	
		// Constructors
		public XContainerWrapper(XContainer container);
	
		// Methods
		internal static IXmlNode WrapNode(XObject node);
		public override IXmlNode AppendChild(IXmlNode newChild);
	}
}
