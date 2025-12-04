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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public static class Extensions
{
	// Fields
	private static ObscuredString obscuredString;

	// Constructors
	static Extensions();

	// Methods
	private static float ConvertToSingle(string s);
	private static string GenerateDictionaryString<TKey, TValue>(Dictionary<TKey, TValue> collection, string prependInfo = "");

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
	public static int GetClampedInt(this Dictionary<object, object> hashtable, string key, int min, int max, int defaultValue);
	public static float GetClampedFloat(this Dictionary<object, object> hashtable, string key, float min, float max, float defaultValue);
	public static bool GetBool(this Dictionary<object, object> hashtable, string key, bool defaultValue);
	public static void ScaleBounds(this GameObject gameObject, float targetSize);
	public static Transform FindChildRecursively(this Transform transform, string child);
	public static T GetValueOrDefault<T>(this Dictionary<object, object> hashtable, string key, T defaultValue = default);
	public static V GetTypedValueOrDefault<K, V>(this Dictionary<K, V> hashtable, K key, V defaultValue = default);
	public static Color GetColor(this Dictionary<object, object> hashtable, string colorKey);
	public static Color GetColorOrDefault(this Dictionary<object, object> hashtable, string colorKey, Color defaultColor = default);
	public static Vector3 GetVector3(this Dictionary<object, object> hashtable, string vectorKey);
	public static Vector3 GetVector3OrDefault(this Dictionary<object, object> hashtable, string vectorKey, Vector3 defaultValue = default);
	public static void SetColor(this Dictionary<object, object> hashtable, string colorKey, Color color);
	public static string AddSpacesToSentence(this string text);
	public static List<int> ValidIndexes<T>(this List<T> values);
}

