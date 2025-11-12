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
using Newtonsoft.Json;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Converters
{
	[Nullable(0)]
	[NullableContext(1)]
	public class XmlNodeConverter : JsonConverter
	{
		// Fields
		internal static readonly List<IXmlNode> EmptyChildNodes;
		private const string TextName = "#text";
		private const string CommentName = "#comment";
		private const string CDataName = "#cdata-section";
		private const string WhitespaceName = "#whitespace";
		private const string SignificantWhitespaceName = "#significant-whitespace";
		private const string DeclarationName = "?xml";
		private const string JsonNamespaceUri = "http://james.newtonking.com/projects/json";
		[CompilerGenerated]
		[Nullable(2)]
		private string _DeserializeRootElementName_k__BackingField;
		[CompilerGenerated]
		private bool _WriteArrayAttribute_k__BackingField;
		[CompilerGenerated]
		private bool _OmitRootObject_k__BackingField;
		[CompilerGenerated]
		private bool _EncodeSpecialCharacters_k__BackingField;
	
		// Properties
		[Nullable(2)]
		public string DeserializeRootElementName { [NullableContext(2)] [CompilerGenerated] get; [NullableContext(2)] [CompilerGenerated] set; }
		public bool WriteArrayAttribute { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool OmitRootObject { [CompilerGenerated] get; [CompilerGenerated] set; }
		public bool EncodeSpecialCharacters { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public XmlNodeConverter();
		static XmlNodeConverter();
	
		// Methods
		public override void WriteJson(JsonWriter writer, [Nullable(2)] object value, JsonSerializer serializer);
		private IXmlNode WrapXml(object value);
		private void PushParentNamespaces(IXmlNode node, XmlNamespaceManager manager);
		private string ResolveFullName(IXmlNode node, XmlNamespaceManager manager);
		private string GetPropertyName(IXmlNode node, XmlNamespaceManager manager);
		private bool IsArray(IXmlNode node);
		private void SerializeGroupedNodes(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName);
		private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, List<IXmlNode> groupedNodes, string elementNames);
		private void WriteGroupedNodes(JsonWriter writer, XmlNamespaceManager manager, bool writePropertyName, IXmlNode node, string elementNames);
		private void SerializeNode(JsonWriter writer, IXmlNode node, XmlNamespaceManager manager, bool writePropertyName);
		private static bool AllSameName(IXmlNode node);
		public override object ReadJson(JsonReader reader, System.Type objectType, [Nullable(2)] object existingValue, JsonSerializer serializer);
		private void DeserializeValue(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, string propertyName, IXmlNode currentNode);
		private void ReadElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, XmlNamespaceManager manager);
		private void CreateElement(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string elementName, XmlNamespaceManager manager, [Nullable(2)] string elementPrefix, [Nullable(new byte[3] {2, 1, 2 })] Dictionary<string, string> attributeNameValues);
		private static void AddAttribute(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName, string attributeName, XmlNamespaceManager manager, [Nullable(2)] string attributePrefix);
		private static string ConvertTokenToXmlValue(JsonReader reader);
		private void ReadArrayElements(JsonReader reader, IXmlDocument document, string propertyName, IXmlNode currentNode, XmlNamespaceManager manager);
		private void AddJsonArrayAttribute(IXmlElement element, IXmlDocument document);
		private bool ShouldReadInto(JsonReader reader);
		private Dictionary<string, string> ReadAttributeElements(JsonReader reader, XmlNamespaceManager manager);
		private void CreateInstruction(JsonReader reader, IXmlDocument document, IXmlNode currentNode, string propertyName);
		private void CreateDocumentType(JsonReader reader, IXmlDocument document, IXmlNode currentNode);
		private IXmlElement CreateElement(string elementName, IXmlDocument document, [Nullable(2)] string elementPrefix, XmlNamespaceManager manager);
		private void DeserializeNode(JsonReader reader, IXmlDocument document, XmlNamespaceManager manager, IXmlNode currentNode);
		private bool IsNamespaceAttribute(string attributeName, [Nullable(2)] [NotNullWhen(true)] out string prefix);
		private bool ValueAttributes(List<IXmlNode> c);
		public override bool CanConvert(System.Type valueType);
		private bool IsXObject(System.Type valueType);
		private bool IsXmlNode(System.Type valueType);
	}
}
