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

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(2)]
	internal class XmlDeclarationWrapper : XmlNodeWrapper, IXmlDeclaration
	{
		// Fields
		[Nullable(1)]
		private readonly XmlDeclaration _declaration;
	
		// Properties
		public string Version { get; }
		public string Encoding { get; }
		public string Standalone { get; }
	
		// Constructors
		[NullableContext(1)]
		public XmlDeclarationWrapper(XmlDeclaration declaration);
	}
}
