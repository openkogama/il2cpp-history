/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Text;
using CodeStage.AntiCheat.ObscuredTypes;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class Extensions
{
	// Fields
	private static ObscuredString obscuredString;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache0;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache1;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache2;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache3;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache4;
	[CompilerGenerated]
	private static Action<string> __f__mg_cache5;

	// Constructors
	static Extensions();

	// Extension methods
	public static string ToSerializeString(this Vector3 vec);
	public static Vector3 ToVector3FromSerializeString(this string text);
	public static void Log<T>(this IEnumerable<T> collection, string prependInfo = null, bool eachEntryNewLine = true);
	public static void LogWarning<T>(this IEnumerable<T> collection, string prependInfo = null, bool eachEntryNewLine = true);
	public static void LogError<T>(this IEnumerable<T> collection, string prependInfo = null, bool eachEntryNewLine = true);
	private static void Log<T>(this IEnumerable<T> collection, Action<string> logFunc, string prependInfo = null, bool eachEntryNewLine = true);
	public static string BuildString<T>(this IEnumerable<T> collection);
	public static string BuildString<T>(this IEnumerable<T> collection, bool eachEntryNewLine);
	public static string BuildString<T>(this IEnumerable<T> collection, string prependInfo);
	public static string BuildString<T>(this IEnumerable<T> collection, string prependInfo, bool eachEntryNewLine);
	public static void LogRecursive(this IEnumerable collection, string prependInfo = null, bool eachEntryNewLine = true);
	public static void LogWarningRecursive(this IEnumerable collection, string prependInfo = null, bool eachEntryNewLine = true);
	public static void LogErrorRecursive(this IEnumerable collection, string prependInfo = null, bool eachEntryNewLine = true);
	private static void LogRecursive(this IEnumerable collection, Action<string> logFunc, string prependInfo = null, bool eachEntryNewLine = true);
	public static string BuildStringRecursive(this IEnumerable collection, string prependInfo = null, bool eachEntryNewLine = true);
	public static void AppendRecursive(this StringBuilder sb, IEnumerable collection, int depth = 0, bool eachEntryNewLine = true);
	public static void Log<TKey, TValue>(this Dictionary<TKey, TValue> collection, string prependInfo = "");
	public static object GetObscuredType(this Dictionary<object, object> hashtable, string key);
	public static void SetObscuredType<T>(this Dictionary<object, object> hashtable, string key, T value);
	public static bool ContainsObscuredKey(this Dictionary<object, object> hashtable, string key);
	public static bool RemoveObscuredKey(this Dictionary<object, object> hashtable, string key);
	public static void ScaleBounds(this GameObject gameObject, float targetSize);
	public static Transform FindChildRecursively(this Transform transform, string child);
}

