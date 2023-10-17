/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using Newtonsoft.Json.Utilities;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal abstract class JsonSerializerInternalBase
	{
		// Fields
		private ErrorContext _currentErrorContext;
		private BidirectionalDictionary<string, object> _mappings;
		[CompilerGenerated]
		private JsonSerializer _Serializer_k__BackingField;
	
		// Properties
		internal JsonSerializer Serializer { [CompilerGenerated] get; [CompilerGenerated] private set; }
		internal BidirectionalDictionary<string, object> DefaultReferenceMappings { get; }
	
		// Nested types
		private class ReferenceEqualsEqualityComparer : IEqualityComparer<object>
		{
			// Constructors
			public ReferenceEqualsEqualityComparer();
	
			// Methods
			bool IEqualityComparer<object>.Equals(object x, object y);
			int IEqualityComparer<object>.GetHashCode(object obj);
		}
	
		// Constructors
		protected JsonSerializerInternalBase(JsonSerializer serializer);
	
		// Methods
		protected ErrorContext GetErrorContext(object currentObject, object member, Exception error);
		protected void ClearErrorContext();
		protected bool IsErrorHandled(object currentObject, JsonContract contract, object keyValue, Exception ex);
	}
}
