/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Runtime.Versioning;
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public class DefaultSerializationBinder : SerializationBinder, ISerializationBinder
	{
		// Fields
		internal static readonly DefaultSerializationBinder Instance;
		[Nullable(new byte[5] {1, 0, 2, 1, 1 })]
		private readonly ThreadSafeStore<StructMultiKey<string, string>, System.Type> _typeCache;
	
		// Constructors
		public DefaultSerializationBinder();
		static DefaultSerializationBinder();
	
		// Methods
		private System.Type GetTypeFromTypeNameKey([Nullable(new byte[3] {0, 2, 1 })] StructMultiKey<string, string> typeNameKey);
		private System.Type GetGenericTypeFromTypeName(string typeName, Assembly assembly);
		private System.Type GetTypeByName([Nullable(new byte[3] {0, 2, 1 })] StructMultiKey<string, string> typeNameKey);
		public override System.Type BindToType([Nullable(2)] string assemblyName, string typeName);
		[NullableContext(2)]
		public override void BindToName([Nullable(1)] System.Type serializedType, out string assemblyName, out string typeName);
	}
}
