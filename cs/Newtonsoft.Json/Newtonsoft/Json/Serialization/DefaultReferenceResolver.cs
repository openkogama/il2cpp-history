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
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class DefaultReferenceResolver : IReferenceResolver
	{
		// Fields
		private int _referenceCount;
	
		// Constructors
		public DefaultReferenceResolver();
	
		// Methods
		private BidirectionalDictionary<string, object> GetMappings(object context);
		public object ResolveReference(object context, string reference);
		public string GetReference(object context, object value);
		public void AddReference(object context, string reference, object value);
		public bool IsReferenced(object context, object value);
	}
}
