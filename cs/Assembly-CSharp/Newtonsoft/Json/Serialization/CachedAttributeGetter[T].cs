/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json.Utilities;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	internal static class CachedAttributeGetter<T>
		where T : Attribute
	{
		// Fields
		private static readonly ThreadSafeStore<ICustomAttributeProvider, T> TypeAttributeCache;
		[CompilerGenerated]
		private static Func<ICustomAttributeProvider, T> __f__mg_cache0;
	
		// Constructors
		static CachedAttributeGetter();
	
		// Methods
		public static T GetAttribute(ICustomAttributeProvider type);
	}
}
