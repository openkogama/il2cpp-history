/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class CollectionUtils
	{
		// Nested types
		[NullableContext(0)]
		private static class EmptyArrayContainer<T>
		{
			// Fields
			[Nullable(1)]
			public static readonly T[] Empty;
	
			// Constructors
			static EmptyArrayContainer();
		}
	
		// Methods
		public static bool IsNullOrEmpty<T>(ICollection<T> collection);
		public static bool IsDictionaryType(System.Type type);
		public static ConstructorInfo ResolveEnumerableCollectionConstructor(System.Type collectionType, System.Type collectionItemType);
		public static ConstructorInfo ResolveEnumerableCollectionConstructor(System.Type collectionType, System.Type collectionItemType, System.Type constructorArgumentType);
		private static IList<int> GetDimensions(IList values, int dimensionsCount);
		private static void CopyFromJaggedToMultidimensionalArray(IList values, Array multidimensionalArray, int[] indices);
		private static object JaggedArrayGetValue(IList values, int[] indices);
		public static Array ToMultidimensionalArray(IList values, System.Type type, int rank);
		public static T[] ArrayEmpty<T>();
	
		// Extension methods
		public static void AddRange<T>(this IList<T> initial, IEnumerable<T> collection);
		public static int IndexOf<T>(this IEnumerable<T> collection, Func<T, bool> predicate);
		public static bool Contains<T>(this List<T> list, T value, IEqualityComparer comparer);
		public static int IndexOfReference<T>(this List<T> list, T item);
		public static void FastReverse<T>(this List<T> list);
	}
}
