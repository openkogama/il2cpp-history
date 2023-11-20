/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Xml;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class XmlElementWrapper : XmlNodeWrapper, IXmlElement
	{
		// Fields
		private readonly XmlElement _element;
	
		// Properties
		public bool IsEmpty { get; }
	
		// Constructors
		public XmlElementWrapper(XmlElement element);
	
		// Methods
		public void SetAttributeNode(IXmlNode attribute);
		public string GetPrefixOfNamespace(string namespaceUri);
	}
}
