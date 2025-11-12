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
	internal class XDocumentWrapper : XContainerWrapper, IXmlDocument
	{
		// Properties
		private XDocument Document { get; }
		public override List<IXmlNode> ChildNodes { get; }
		protected override bool HasChildNodes { get; }
		[Nullable(2)]
		public IXmlElement DocumentElement { [NullableContext(2)] get; }
	
		// Constructors
		public XDocumentWrapper(XDocument document);
	
		// Methods
		public IXmlNode CreateComment([Nullable(2)] string text);
		public IXmlNode CreateTextNode([Nullable(2)] string text);
		public IXmlNode CreateCDataSection([Nullable(2)] string data);
		public IXmlNode CreateWhitespace([Nullable(2)] string text);
		public IXmlNode CreateSignificantWhitespace([Nullable(2)] string text);
		public IXmlNode CreateXmlDeclaration(string version, [Nullable(2)] string encoding, [Nullable(2)] string standalone);
		[NullableContext(2)]
		public IXmlNode CreateXmlDocumentType([Nullable(1)] string name, string publicId, string systemId, string internalSubset);
		public IXmlNode CreateProcessingInstruction(string target, string data);
		public IXmlElement CreateElement(string elementName);
		public IXmlElement CreateElement(string qualifiedName, string namespaceUri);
		public IXmlNode CreateAttribute(string name, string value);
		public IXmlNode CreateAttribute(string qualifiedName, string namespaceUri, string value);
		public override IXmlNode AppendChild(IXmlNode newChild);
	}
}
