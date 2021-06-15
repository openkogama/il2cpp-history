/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json
{
	[AttributeUsage]
	public sealed class JsonPropertyAttribute : Attribute
	{
		// Fields
		internal NullValueHandling? _nullValueHandling;
		internal DefaultValueHandling? _defaultValueHandling;
		internal ReferenceLoopHandling? _referenceLoopHandling;
		internal ObjectCreationHandling? _objectCreationHandling;
		internal TypeNameHandling? _typeNameHandling;
		internal bool? _isReference;
		internal int? _order;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private string _PropertyName_k__BackingField;
		[CompilerGenerated]
		[DebuggerBrowsable]
		private Required _Required_k__BackingField;
	
		// Properties
		public NullValueHandling NullValueHandling { get; set; }
		public DefaultValueHandling DefaultValueHandling { get; set; }
		public ReferenceLoopHandling ReferenceLoopHandling { get; set; }
		public ObjectCreationHandling ObjectCreationHandling { get; set; }
		public TypeNameHandling TypeNameHandling { get; set; }
		public bool IsReference { get; set; }
		public int Order { get; set; }
		public string PropertyName { [CompilerGenerated] get; [CompilerGenerated] set; }
		public Required Required { [CompilerGenerated] get; [CompilerGenerated] set; }
	
		// Constructors
		public JsonPropertyAttribute();
		public JsonPropertyAttribute(string propertyName);
	}
}
