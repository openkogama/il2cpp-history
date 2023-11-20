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
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	internal abstract class JsonSerializerInternalBase
	{
		// Fields
		[Nullable(2)]
		private ErrorContext _currentErrorContext;
		[Nullable(new byte[3] {2, 1, 1 })]
		private BidirectionalDictionary<string, object> _mappings;
		internal readonly JsonSerializer Serializer;
		[Nullable(2)]
		internal readonly ITraceWriter TraceWriter;
		[Nullable(2)]
		protected JsonSerializerProxy InternalSerializer;
	
		// Properties
		internal BidirectionalDictionary<string, object> DefaultReferenceMappings { get; }
	
		// Nested types
		[NullableContext(0)]
		private class ReferenceEqualsEqualityComparer : IEqualityComparer<object>
		{
			// Constructors
			public ReferenceEqualsEqualityComparer();
	
			// Methods
			[NullableContext(2)]
			bool IEqualityComparer<object>.Equals(object x, object y);
			[NullableContext(1)]
			int IEqualityComparer<object>.GetHashCode(object obj);
		}
	
		// Constructors
		protected JsonSerializerInternalBase(JsonSerializer serializer);
	
		// Methods
		protected NullValueHandling ResolvedNullValueHandling([Nullable(2)] JsonObjectContract containerContract, JsonProperty property);
		private ErrorContext GetErrorContext([Nullable(2)] object currentObject, [Nullable(2)] object member, string path, Exception error);
		protected void ClearErrorContext();
		[NullableContext(2)]
		protected bool IsErrorHandled(object currentObject, JsonContract contract, object keyValue, IJsonLineInfo lineInfo, [Nullable(1)] string path, [Nullable(1)] Exception ex);
	}
}
