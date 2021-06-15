/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public interface IReferenceResolver
	{
		// Methods
		object ResolveReference(object context, string reference);
		string GetReference(object context, object value);
		bool IsReferenced(object context, object value);
		void AddReference(object context, string reference, object value);
	}
}
