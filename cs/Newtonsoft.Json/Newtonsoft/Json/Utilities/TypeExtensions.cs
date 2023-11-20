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

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class TypeExtensions
	{
		// Extension methods
		public static MemberTypes MemberType(this MemberInfo memberInfo);
		public static bool ContainsGenericParameters(this System.Type type);
		public static bool IsInterface(this System.Type type);
		public static bool IsGenericType(this System.Type type);
		public static bool IsGenericTypeDefinition(this System.Type type);
		public static System.Type BaseType(this System.Type type);
		public static Assembly Assembly(this System.Type type);
		public static bool IsEnum(this System.Type type);
		public static bool IsClass(this System.Type type);
		public static bool IsSealed(this System.Type type);
		public static bool IsAbstract(this System.Type type);
		public static bool IsVisible(this System.Type type);
		public static bool IsValueType(this System.Type type);
		public static bool AssignableToTypeName(this System.Type type, string fullTypeName, bool searchInterfaces, [Nullable(2)] [NotNullWhen(true)] out System.Type match);
		public static bool AssignableToTypeName(this System.Type type, string fullTypeName, bool searchInterfaces);
		public static bool ImplementInterface(this System.Type type, System.Type interfaceType);
	}
}
