/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
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
