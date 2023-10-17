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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal static class ReflectionUtils
	{
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass36_0
		{
			// Fields
			public BindingFlags bindingAttr;
			public Func<MemberInfo, bool> __9__2;
	
			// Constructors
			public __c__DisplayClass36_0();
	
			// Methods
			internal bool _GetFieldsAndProperties_b__2(MemberInfo m);
		}
	
		[Serializable]
		[CompilerGenerated]
		private sealed class __c
		{
			// Fields
			public static readonly __c __9;
			public static Func<MemberInfo, string> __9__36_0;
			public static Func<IGrouping<string, MemberInfo>, __f__AnonymousType0<int, IEnumerable<MemberInfo>>> __9__36_1;
			public static Func<System.Type, IList<object>, object> __9__44_0;
			public static Func<ParameterInfo, System.Type> __9__50_0;
			public static Func<FieldInfo, bool> __9__52_0;
	
			// Constructors
			static __c();
			public __c();
	
			// Methods
			internal string _GetFieldsAndProperties_b__36_0(MemberInfo m);
			internal __f__AnonymousType0<int, IEnumerable<MemberInfo>> _GetFieldsAndProperties_b__36_1(IGrouping<string, MemberInfo> g);
			internal object _CreateGeneric_b__44_0(System.Type t, IList<object> a);
			internal System.Type _GetMemberInfoFromType_b__50_0(ParameterInfo p);
			internal bool _GetChildPrivateFields_b__52_0(FieldInfo f);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass55_0
		{
			// Fields
			public PropertyInfo nonPublicProperty;
	
			// Constructors
			public __c__DisplayClass55_0();
	
			// Methods
			internal bool _GetChildPrivateProperties_b__0(PropertyInfo p);
		}
	
		// Methods
		public static System.Type GetObjectType(object v);
		public static string GetTypeName(System.Type t, FormatterAssemblyStyle assemblyFormat);
		public static string GetTypeName(System.Type t, FormatterAssemblyStyle assemblyFormat, SerializationBinder binder);
		private static string RemoveAssemblyDetails(string fullyQualifiedTypeName);
		public static bool IsInstantiatableType(System.Type t);
		public static bool HasDefaultConstructor(System.Type t);
		public static bool HasDefaultConstructor(System.Type t, bool nonPublic);
		public static ConstructorInfo GetDefaultConstructor(System.Type t);
		public static ConstructorInfo GetDefaultConstructor(System.Type t, bool nonPublic);
		public static bool IsNullable(System.Type t);
		public static bool IsNullableType(System.Type t);
		public static System.Type EnsureNotNullableType(System.Type t);
		public static bool IsUnitializedValue(object value);
		public static object CreateUnitializedValue(System.Type type);
		public static bool IsPropertyIndexed(PropertyInfo property);
		public static bool ImplementsGenericDefinition(System.Type type, System.Type genericInterfaceDefinition);
		public static bool ImplementsGenericDefinition(System.Type type, System.Type genericInterfaceDefinition, out System.Type implementingType);
		public static bool InheritsGenericDefinition(System.Type type, System.Type genericClassDefinition);
		public static bool InheritsGenericDefinition(System.Type type, System.Type genericClassDefinition, out System.Type implementingType);
		private static bool InheritsGenericDefinitionInternal(System.Type currentType, System.Type genericClassDefinition, out System.Type implementingType);
		public static System.Type GetCollectionItemType(System.Type type);
		public static void GetDictionaryKeyValueTypes(System.Type dictionaryType, out System.Type keyType, out System.Type valueType);
		public static System.Type GetDictionaryValueType(System.Type dictionaryType);
		public static System.Type GetDictionaryKeyType(System.Type dictionaryType);
		public static bool ItemsUnitializedValue<T>(IList<T> list);
		public static System.Type GetMemberUnderlyingType(MemberInfo member);
		public static bool IsIndexedProperty(MemberInfo member);
		public static bool IsIndexedProperty(PropertyInfo property);
		public static object GetMemberValue(MemberInfo member, object target);
		public static void SetMemberValue(MemberInfo member, object target, object value);
		public static bool CanReadMemberValue(MemberInfo member, bool nonPublic);
		public static bool CanSetMemberValue(MemberInfo member, bool nonPublic, bool canSetReadOnly);
		public static List<MemberInfo> GetFieldsAndProperties<T>(BindingFlags bindingAttr);
		public static List<MemberInfo> GetFieldsAndProperties(System.Type type, BindingFlags bindingAttr);
		private static bool IsOverridenGenericMember(MemberInfo memberInfo, BindingFlags bindingAttr);
		public static T GetAttribute<T>(ICustomAttributeProvider attributeProvider)
			where T : Attribute;
		public static T GetAttribute<T>(ICustomAttributeProvider attributeProvider, bool inherit)
			where T : Attribute;
		public static T[] GetAttributes<T>(ICustomAttributeProvider attributeProvider, bool inherit)
			where T : Attribute;
		public static string GetNameAndAssessmblyName(System.Type t);
		public static System.Type MakeGenericType(System.Type genericTypeDefinition, params System.Type[] innerTypes);
		public static object CreateGeneric(System.Type genericTypeDefinition, System.Type innerType, params object[] args);
		public static object CreateGeneric(System.Type genericTypeDefinition, IList<System.Type> innerTypes, params object[] args);
		public static object CreateGeneric(System.Type genericTypeDefinition, IList<System.Type> innerTypes, Func<System.Type, IList<object>, object> instanceCreator, params object[] args);
		public static bool IsCompatibleValue(object value, System.Type type);
		public static object CreateInstance(System.Type type, params object[] args);
		public static void SplitFullyQualifiedTypeName(string fullyQualifiedTypeName, out string typeName, out string assemblyName);
		private static int? GetAssemblyDelimiterIndex(string fullyQualifiedTypeName);
		public static MemberInfo GetMemberInfoFromType(System.Type targetType, MemberInfo memberInfo);
		public static IEnumerable<FieldInfo> GetFields(System.Type targetType, BindingFlags bindingAttr);
		private static void GetChildPrivateFields(IList<MemberInfo> initialFields, System.Type targetType, BindingFlags bindingAttr);
		public static IEnumerable<PropertyInfo> GetProperties(System.Type targetType, BindingFlags bindingAttr);
		private static void GetChildPrivateProperties(IList<PropertyInfo> initialProperties, System.Type targetType, BindingFlags bindingAttr);
	
		// Extension methods
		public static bool IsVirtual(this PropertyInfo propertyInfo);
		public static bool AssignableToTypeName(this System.Type type, string fullTypeName, out System.Type match);
		public static bool AssignableToTypeName(this System.Type type, string fullTypeName);
		public static BindingFlags RemoveFlag(this BindingFlags bindingAttr, BindingFlags flag);
	}
}
