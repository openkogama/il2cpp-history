/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 7: Unity.TextMeshPro.dll - Assembly: Unity.TextMeshPro, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace TMPro
{
	internal static class TMP_ListPool<T>
	{
		// Fields
		private static readonly TMP_ObjectPool<List<T>> s_ListPool;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c<T> __9;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal void _.cctor_b__3_0(List<T> l);
		}
	
		// Constructors
		static TMP_ListPool();
	
		// Methods
		public static List<T> Get();
		public static void Release(List<T> toRelease);
	}
}
