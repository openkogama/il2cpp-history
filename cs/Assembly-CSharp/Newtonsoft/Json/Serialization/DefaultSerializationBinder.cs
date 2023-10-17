/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Newtonsoft.Json.Utilities;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class DefaultSerializationBinder : SerializationBinder
	{
		// Fields
		internal static readonly DefaultSerializationBinder Instance;
		private readonly ThreadSafeStore<TypeNameKey, System.Type> _typeCache;
	
		// Nested types
		internal struct TypeNameKey
		{
			// Fields
			internal readonly string AssemblyName;
			internal readonly string TypeName;
	
			// Constructors
			public TypeNameKey(string assemblyName, string typeName);
	
			// Methods
			public override int GetHashCode();
			public override bool Equals(object obj);
			public bool Equals(TypeNameKey other);
		}
	
		// Constructors
		public DefaultSerializationBinder();
		static DefaultSerializationBinder();
	
		// Methods
		private static System.Type GetTypeFromTypeNameKey(TypeNameKey typeNameKey);
		public override System.Type BindToType(string assemblyName, string typeName);
	}
}
