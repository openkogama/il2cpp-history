/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class CollectionUtils
	{
		// Nested types
		[CompilerGenerated]
		private sealed class _TryGetSingleItem_c__AnonStorey0<T>
		{
			// Fields
			internal IList<T> list;
			internal bool returnDefaultIfEmpty;
	
			// Constructors
			public _TryGetSingleItem_c__AnonStorey0();
	
			// Methods
			internal T __m__0();
		}
	
		[CompilerGenerated]
		private sealed class _CreateCollectionWrapper_c__AnonStorey1
		{
			// Fields
			internal Type collectionDefinition;
			internal object list;
	
			// Constructors
			public _CreateCollectionWrapper_c__AnonStorey1();
	
			// Methods
			internal object __m__0(Type t, IList<object> a);
		}
	
		[CompilerGenerated]
		private sealed class _CreateListWrapper_c__AnonStorey2
		{
			// Fields
			internal Type listDefinition;
			internal object list;
	
			// Constructors
			public _CreateListWrapper_c__AnonStorey2();
	
			// Methods
			internal object __m__0(Type t, IList<object> a);
		}
	
		[CompilerGenerated]
		private sealed class _CreateDictionaryWrapper_c__AnonStorey3
		{
			// Fields
			internal Type dictionaryDefinition;
			internal object dictionary;
	
			// Constructors
			public _CreateDictionaryWrapper_c__AnonStorey3();
	
			// Methods
			internal object __m__0(Type t, IList<object> a);
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
		public static IList CreateGenericList(Type listType);
		public static IDictionary CreateGenericDictionary(Type keyType, Type valueType);
		public static bool IsListType(Type type);
		public static bool IsCollectionType(Type type);
		public static bool IsDictionaryType(Type type);
		public static IWrappedCollection CreateCollectionWrapper(object list);
		public static IWrappedList CreateListWrapper(object list);
		public static IWrappedDictionary CreateDictionaryWrapper(object dictionary);
		public static object CreateAndPopulateList(Type listType, Action<IList, bool> populateList);
		public static Array ToArray(Array initial, Type type);
		private static IList<int> GetDimensions(IList values);
		public static Array ToMultidimensionalArray(IList values, Type type, int rank);
		private static object JaggedArrayGetValue(IList values, int[] indices);
		private static void CopyFromJaggedToMultidimensionalArray(IList values, Array multidimensionalArray, int[] indices);
		[CompilerGenerated]
		private static bool _CastValid_1_m__0<T>(object o);
	
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
