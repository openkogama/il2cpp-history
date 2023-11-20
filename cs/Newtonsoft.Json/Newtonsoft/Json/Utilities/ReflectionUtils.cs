/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal static class ReflectionUtils
	{
		// Fields
		public static readonly System.Type[] EmptyTypes;
	
		// Nested types
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			[Nullable(0)]
			public static readonly __c __9;
			[Nullable(0)]
			public static Func<ConstructorInfo, bool> __9__11_0;
			[Nullable(0)]
			public static Func<MemberInfo, string> __9__31_0;
			[Nullable(0)]
			public static Func<ParameterInfo, System.Type> __9__39_0;
			[Nullable(0)]
			public static Func<FieldInfo, bool> __9__41_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			[NullableContext(0)]
			internal bool _GetDefaultConstructor_b__11_0(ConstructorInfo c);
			[NullableContext(0)]
			internal string _GetFieldsAndProperties_b__31_0(MemberInfo m);
			[NullableContext(0)]
			internal System.Type _GetMemberInfoFromType_b__39_0(ParameterInfo p);
			[NullableContext(0)]
			internal bool _GetChildPrivateFields_b__41_0(FieldInfo f);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass31_0
		{
			// Fields
			[Nullable(0)]
			public MemberInfo memberInfo;
	
			// Constructors
			public __c__DisplayClass31_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _GetFieldsAndProperties_b__1(MemberInfo m);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass44_0
		{
			// Fields
			[Nullable(0)]
			public PropertyInfo subTypeProperty;
	
			// Constructors
			public __c__DisplayClass44_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _GetChildPrivateProperties_b__0(PropertyInfo p);
			[NullableContext(0)]
			internal bool _GetChildPrivateProperties_b__1(PropertyInfo p);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass44_1
		{
			// Fields
			[Nullable(0)]
			public System.Type subTypePropertyDeclaringType;
			[Nullable(0)]
			public __c__DisplayClass44_0 CS___8__locals1;
	
			// Constructors
			public __c__DisplayClass44_1();
	
			// Methods
			[NullableContext(0)]
			internal bool _GetChildPrivateProperties_b__2(PropertyInfo p);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass45_0
		{
			// Fields
			[Nullable(0)]
			public string method;
			[Nullable(0)]
			public System.Type methodDeclaringType;
	
			// Constructors
			public __c__DisplayClass45_0();
	
			// Methods
			[NullableContext(0)]
			internal bool _IsMethodOverridden_b__0(MethodInfo info);
		}
	
		// Constructors
		static ReflectionUtils();
	
		// Methods
		public static bool IsPublic(PropertyInfo property);
		[NullableContext(2)]
		public static System.Type GetObjectType(object v);
		public static string GetTypeName(System.Type t, TypeNameAssemblyFormatHandling assemblyFormat, [Nullable(2)] ISerializationBinder binder);
		private static string GetFullyQualifiedTypeName(System.Type t, [Nullable(2)] ISerializationBinder binder);
		private static string RemoveAssemblyDetails(string fullyQualifiedTypeName);
		public static bool HasDefaultConstructor(System.Type t, bool nonPublic);
		public static ConstructorInfo GetDefaultConstructor(System.Type t);
		public static ConstructorInfo GetDefaultConstructor(System.Type t, bool nonPublic);
		public static bool IsNullable(System.Type t);
		public static bool IsNullableType(System.Type t);
		public static System.Type EnsureNotNullableType(System.Type t);
		public static System.Type EnsureNotByRefType(System.Type t);
		public static bool IsGenericDefinition(System.Type type, System.Type genericInterfaceDefinition);
		public static bool ImplementsGenericDefinition(System.Type type, System.Type genericInterfaceDefinition);
		public static bool ImplementsGenericDefinition(System.Type type, System.Type genericInterfaceDefinition, [Nullable(2)] [NotNullWhen(true)] out System.Type implementingType);
		public static bool InheritsGenericDefinition(System.Type type, System.Type genericClassDefinition);
		public static bool InheritsGenericDefinition(System.Type type, System.Type genericClassDefinition, [Nullable(2)] out System.Type implementingType);
		private static bool InheritsGenericDefinitionInternal(System.Type type, System.Type genericClassDefinition, [Nullable(2)] out System.Type implementingType);
		public static System.Type GetCollectionItemType(System.Type type);
		[NullableContext(2)]
		public static void GetDictionaryKeyValueTypes([Nullable(1)] System.Type dictionaryType, out System.Type keyType, out System.Type valueType);
		public static System.Type GetMemberUnderlyingType(MemberInfo member);
		public static bool IsByRefLikeType(System.Type type);
		public static bool IsIndexedProperty(PropertyInfo property);
		public static object GetMemberValue(MemberInfo member, object target);
		public static void SetMemberValue(MemberInfo member, object target, [Nullable(2)] object value);
		public static bool CanReadMemberValue(MemberInfo member, bool nonPublic);
		public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly);
		public static List<MemberInfo> GetFieldsAndProperties(System.Type type, BindingFlags bindingAttr);
		private static bool IsOverridenGenericMember(MemberInfo memberInfo, BindingFlags bindingAttr);
		public static T GetAttribute<T>(object attributeProvider)
			where T : Attribute;
		public static T GetAttribute<T>(object attributeProvider, bool inherit)
			where T : Attribute;
		public static T[] GetAttributes<T>(object attributeProvider, bool inherit)
			where T : Attribute;
		public static Attribute[] GetAttributes(object attributeProvider, [Nullable(2)] System.Type attributeType, bool inherit);
		public static StructMultiKey<string, string> SplitFullyQualifiedTypeName(string fullyQualifiedTypeName);
		private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName);
		public static MemberInfo GetMemberInfoFromType(System.Type targetType, MemberInfo memberInfo);
		public static IEnumerable<FieldInfo> GetFields(System.Type targetType, BindingFlags bindingAttr);
		private static void GetChildPrivateFields(IList<MemberInfo> initialFields, System.Type type, BindingFlags bindingAttr);
		public static IEnumerable<PropertyInfo> GetProperties(System.Type targetType, BindingFlags bindingAttr);
		private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, System.Type type, BindingFlags bindingAttr);
		public static bool IsMethodOverridden(System.Type currentType, System.Type methodDeclaringType, string method);
		public static object GetDefaultValue(System.Type type);
	
		// Extension methods
		public static bool IsVirtual(this PropertyInfo propertyInfo);
		public static MethodInfo GetBaseDefinition(this PropertyInfo propertyInfo);
		public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag);
	}
}
