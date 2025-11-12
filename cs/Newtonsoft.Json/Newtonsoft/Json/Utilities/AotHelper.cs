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

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(2)]
	public static class AotHelper
	{
		// Fields
		private static bool s_alwaysFalse;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__2<T>
		{
			// Fields
			[Nullable(0)]
			public static readonly __c__2<T> __9;
			[Nullable(0)]
			public static Action __9__2_0;
	
			// Constructors
			static __c__2();
			public __c__2();
	
			// Methods
			internal void _EnsureList_b__2_0();
		}
	
		// Constructors
		static AotHelper();
	
		// Methods
		[NullableContext(1)]
		public static void Ensure(Action action);
		public static void EnsureList<T>();
		public static bool IsFalse();
	}
}
