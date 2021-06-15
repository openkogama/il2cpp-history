/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using System.Runtime.Serialization.Formatters;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class ReflectionUtils
	{
		// Fields
		[CompilerGenerated]
		private static Func<MemberInfo, string> __f__am_cache0;
		[CompilerGenerated]
		private static Func<IGrouping<string, MemberInfo>, ____AnonType0<int, IEnumerable<MemberInfo>>> __f__am_cache1;
		[CompilerGenerated]
		private static Func<Type, IList<object>, object> __f__am_cache2;
		[CompilerGenerated]
		private static Func<ParameterInfo, Type> __f__am_cache3;
		[CompilerGenerated]
		private static Func<FieldInfo, bool> __f__am_cache4;
	
		// Nested types
		[CompilerGenerated]
		private sealed class _GetFieldsAndProperties_c__AnonStorey0
		{
			// Fields
			internal BindingFlags bindingAttr;
	
			// Constructors
			public _GetFieldsAndProperties_c__AnonStorey0();
	
			// Methods
			internal bool __m__0(MemberInfo m);
		}
	
		[CompilerGenerated]
		private sealed class _GetChildPrivateProperties_c__AnonStorey1
		{
			// Fields
			internal PropertyInfo nonPublicProperty;
	
			// Constructors
			public _GetChildPrivateProperties_c__AnonStorey1();
	
			// Methods
			internal bool __m__0(PropertyInfo p);
		}
	
		// Methods
		public static Type GetObjectType(object v);
		public static string GetTypeName(Type t, FormatterAssemblyStyle assemblyFormat);
		public static string GetTypeName(Type t, FormatterAssemblyStyle assemblyFormat, SerializationBinder binder);
		private static string RemoveAssemblyDetails(string fullyQualifiedTypeName);
		public static bool IsInstantiatableType(Type t);
		public static bool HasDefaultConstructor(Type t);
		public static bool HasDefaultConstructor(Type t, bool nonPublic);
		public static ConstructorInfo GetDefaultConstructor(Type t);
		public static ConstructorInfo GetDefaultConstructor(Type t, bool nonPublic);
		public static bool IsNullable(Type t);
		public static bool IsNullableType(Type t);
		public static Type EnsureNotNullableType(Type t);
		public static bool IsUnitializedValue(object value);
		public static object CreateUnitializedValue(Type type);
		public static bool IsPropertyIndexed(PropertyInfo property);
		public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition);
		public static bool ImplementsGenericDefinition(Type type, Type genericInterfaceDefinition, out Type implementingType);
		public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition);
		public static bool InheritsGenericDefinition(Type type, Type genericClassDefinition, out Type implementingType);
		private static bool InheritsGenericDefinitionInternal(Type currentType, Type genericClassDefinition, out Type implementingType);
		public static Type GetCollectionItemType(Type type);
		public static void GetDictionaryKeyValueTypes(Type dictionaryType, out Type keyType, out Type valueType);
		public static Type GetDictionaryValueType(Type dictionaryType);
		public static Type GetDictionaryKeyType(Type dictionaryType);
		public static bool ItemsUnitializedValue<T>(IList<T> list);
		public static Type GetMemberUnderlyingType(MemberInfo member);
		public static bool IsIndexedProperty(MemberInfo member);
		public static bool IsIndexedProperty(PropertyInfo property);
		public static object GetMemberValue(MemberInfo member, object target);
		public static void SetMemberValue(MemberInfo member, object target, object value);
		public static bool CanReadMemberValue(MemberInfo member, bool nonPublic);
		public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly);
		public static List<MemberInfo> GetFieldsAndProperties<T>(BindingFlags bindingAttr);
		public static List<MemberInfo> GetFieldsAndProperties(Type type, BindingFlags bindingAttr);
		private static bool IsOverridenGenericMember(MemberInfo memberInfo, BindingFlags bindingAttr);
		public static T GetAttribute<T>(ICustomAttributeProvider attributeProvider)
			where T : Attribute;
		public static T GetAttribute<T>(ICustomAttributeProvider attributeProvider, bool inherit)
			where T : Attribute;
		public static T[] GetAttributes<T>(ICustomAttributeProvider attributeProvider, bool inherit)
			where T : Attribute;
		public static string GetNameAndAssessmblyName(Type t);
		public static Type MakeGenericType(Type genericTypeDefinition, params Type[] innerTypes);
		public static object CreateGeneric(Type genericTypeDefinition, Type innerType, params object[] args);
		public static object CreateGeneric(Type genericTypeDefinition, IList<Type> innerTypes, params object[] args);
		public static object CreateGeneric(Type genericTypeDefinition, IList<Type> innerTypes, Func<Type, IList<object>, object> instanceCreator, params object[] args);
		public static bool IsCompatibleValue(object value, Type type);
		public static object CreateInstance(Type type, params object[] args);
		public static void SplitFullyQualifiedTypeName(string fullyQualifiedTypeName, out string typeName, out string assemblyName);
		private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName);
		public static MemberInfo GetMemberInfoFromType(Type targetType, MemberInfo memberInfo);
		public static IEnumerable<FieldInfo> GetFields(Type targetType, BindingFlags bindingAttr);
		private static void GetChildPrivateFields(IList<MemberInfo> initialFields, Type targetType, BindingFlags bindingAttr);
		public static IEnumerable<PropertyInfo> GetProperties(Type targetType, BindingFlags bindingAttr);
		private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, Type targetType, BindingFlags bindingAttr);
		[CompilerGenerated]
		private static string _GetFieldsAndProperties_m__0(MemberInfo m);
		[CompilerGenerated]
		private static ____AnonType0<int, IEnumerable<MemberInfo>> _GetFieldsAndProperties_m__1(IGrouping<string, MemberInfo> g);
		[CompilerGenerated]
		private static object _CreateGeneric_m__2(Type t, IList<object> a);
		[CompilerGenerated]
		private static Type _GetMemberInfoFromType_m__3(ParameterInfo p);
		[CompilerGenerated]
		private static bool _GetChildPrivateFields_m__4(FieldInfo f);
	
		// Extension methods
		public static bool IsVirtual(this PropertyInfo propertyInfo);
		public static bool AssignableToTypeName(this Type type, string fullTypeName, out Type match);
		public static bool AssignableToTypeName(this Type type, string fullTypeName);
		public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag);
	}
}
