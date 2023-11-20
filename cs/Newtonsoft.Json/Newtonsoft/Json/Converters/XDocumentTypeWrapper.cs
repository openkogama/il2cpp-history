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
using System.Xml.Linq;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(2)]
	internal class XDocumentTypeWrapper : XObjectWrapper, IXmlDocumentType
	{
		// Fields
		[Nullable(1)]
		private readonly XDocumentType _documentType;
	
		// Properties
		[Nullable(1)]
		public string Name { [NullableContext(1)] get; }
		public string System { get; }
		public string Public { get; }
		public string InternalSubset { get; }
		public override string LocalName { get; }
	
		// Constructors
		[NullableContext(1)]
		public XDocumentTypeWrapper(XDocumentType documentType);
	}
}
