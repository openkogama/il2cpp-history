/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class CollectionUtils
	{
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c__0<T>
		{
			// Fields
			public static readonly __c__0<T> __9;
			public static Func<object, bool> __9__0_0;
	
			// Constructors
			static __c__0();
			public __c__0();
	
			// Methods
			internal bool _CastValid_b__0_0(object o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass16_0<T>
		{
			// Fields
			public IList<T> list;
			public bool returnDefaultIfEmpty;
	
			// Constructors
			public __c__DisplayClass16_0();
	
			// Methods
			internal T _TryGetSingleItem_b__0();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass25_0
		{
			// Fields
			public System.Type collectionDefinition;
			public object list;
	
			// Constructors
			public __c__DisplayClass25_0();
	
			// Methods
			internal object _CreateCollectionWrapper_b__0(System.Type t, IList<object> a);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass26_0
		{
			// Fields
			public System.Type listDefinition;
			public object list;
	
			// Constructors
			public __c__DisplayClass26_0();
	
			// Methods
			internal object _CreateListWrapper_b__0(System.Type t, IList<object> a);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass27_0
		{
			// Fields
			public System.Type dictionaryDefinition;
			public object dictionary;
	
			// Constructors
			public __c__DisplayClass27_0();
	
			// Methods
			internal object _CreateDictionaryWrapper_b__0(System.Type t, IList<object> a);
		}
	
		// Methods
		public static List<T> CreateList<T>(params T[] values);
		public static bool IsNullOrEmpty(ICollection collection);
		public static bool IsNullOrEmpty<T>(ICollection<T> collection);
		public static bool IsNullOrEmptyOrDefault<T>(IList<T> list);
		public static IList<T> Slice<T>(IList<T> list, int? start, int? end);
		public static IList<T> Slice<T>(IList<T> list, int? start, int? end, int? step);
		public static Dictionary<K, List<V>> GroupBy<K, V>(ICollection<V> source, Func<V, K> keySelector);
		public static List<T> Distinct<T>(List<T> collection);
		public static List<List<T>> Flatten<T>(params IList<T>[] lists);
		private static void Recurse<T>(IList<IList<T>> global, int current, Dictionary<int, T> currentSet, List<List<T>> flattenedResult);
		public static List<T> CreateList<T>(ICollection collection);
		public static bool ListEquals<T>(IList<T> a, IList<T> b);
		public static bool TryGetSingleItem<T>(IList<T> list, out ref T value);
		public static bool TryGetSingleItem<T>(IList<T> list, bool returnDefaultIfEmpty, out ref T value);
		public static T GetSingleItem<T>(IList<T> list);
		public static T GetSingleItem<T>(IList<T> list, bool returnDefaultIfEmpty);
		public static IList<T> Minus<T>(IList<T> list, IList<T> minus);
		public static IList CreateGenericList(System.Type listType);
		public static IDictionary CreateGenericDictionary(System.Type keyType, System.Type valueType);
		public static bool IsListType(System.Type type);
		public static bool IsCollectionType(System.Type type);
		public static bool IsDictionaryType(System.Type type);
		public static IWrappedCollection CreateCollectionWrapper(object list);
		public static IWrappedList CreateListWrapper(object list);
		public static IWrappedDictionary CreateDictionaryWrapper(object dictionary);
		public static object CreateAndPopulateList(System.Type listType, Action<IList, bool> populateList);
		public static Array ToArray(Array initial, System.Type type);
		private static IList<int> GetDimensions(IList values);
		public static Array ToMultidimensionalArray(IList values, System.Type type, int rank);
		private static object JaggedArrayGetValue(IList values, int[] indices);
		private static void CopyFromJaggedToMultidimensionalArray(IList values, Array multidimensionalArray, int[] indices);
	
		// Extension methods
		public static IEnumerable<T> CastValid<T>(this IEnumerable enumerable);
		public static void AddRange<T>(this IList<T> initial, IEnumerable<T> collection);
		public static void AddRange(this IList initial, IEnumerable collection);
		public static bool AddDistinct<T>(this IList<T> list, T value);
		public static bool AddDistinct<T>(this IList<T> list, T value, IEqualityComparer<T> comparer);
		public static bool ContainsValue<TSource>(this IEnumerable<TSource> source, TSource value, IEqualityComparer<TSource> comparer);
		public static bool AddRangeDistinct<T>(this IList<T> list, IEnumerable<T> values);
		public static bool AddRangeDistinct<T>(this IList<T> list, IEnumerable<T> values, IEqualityComparer<T> comparer);
		public static int IndexOf<T>(this IEnumerable<T> collection, Func<T, bool> predicate);
		public static int IndexOf<TSource>(this IEnumerable<TSource> list, TSource value)
			where TSource : IEquatable<TSource>;
		public static int IndexOf<TSource>(this IEnumerable<TSource> list, TSource value, IEqualityComparer<TSource> comparer);
	}
}
