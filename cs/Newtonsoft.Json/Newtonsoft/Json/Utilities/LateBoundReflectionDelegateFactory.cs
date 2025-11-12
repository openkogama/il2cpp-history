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
using Newtonsoft.Json.Serialization;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class LateBoundReflectionDelegateFactory : ReflectionDelegateFactory
	{
		// Fields
		private static readonly LateBoundReflectionDelegateFactory _instance;
	
		// Properties
		internal static ReflectionDelegateFactory Instance { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0
		{
			// Fields
			[Nullable(0)]
			public ConstructorInfo c;
			[Nullable(0)]
			public MethodBase method;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal object _CreateParameterizedConstructor_b__0([Nullable(new byte[2] {1, 2 })] object[] a);
			internal object _CreateParameterizedConstructor_b__1([Nullable(new byte[2] {1, 2 })] object[] a);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4_0<T>
		{
			// Fields
			[Nullable(0)]
			public ConstructorInfo c;
			[Nullable(0)]
			public MethodBase method;
	
			// Constructors
			public __c__DisplayClass4_0();
	
			// Methods
			[NullableContext(0)]
			internal object _CreateMethodCall_b__0(T o, [Nullable(new byte[2] {1, 2 })] object[] a);
			[NullableContext(0)]
			internal object _CreateMethodCall_b__1(T o, [Nullable(new byte[2] {1, 2 })] object[] a);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass5_0<T>
		{
			// Fields
			[Nullable(0)]
			public System.Type type;
			[Nullable(0)]
			public ConstructorInfo constructorInfo;
	
			// Constructors
			public __c__DisplayClass5_0();
	
			// Methods
			[NullableContext(0)]
			internal T _CreateDefaultConstructor_b__0();
			[NullableContext(0)]
			internal T _CreateDefaultConstructor_b__1();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass6_0<T>
		{
			// Fields
			[Nullable(0)]
			public PropertyInfo propertyInfo;
	
			// Constructors
			public __c__DisplayClass6_0();
	
			// Methods
			[NullableContext(0)]
			internal object _CreateGet_b__0(T o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass7_0<T>
		{
			// Fields
			[Nullable(0)]
			public FieldInfo fieldInfo;
	
			// Constructors
			public __c__DisplayClass7_0();
	
			// Methods
			[NullableContext(0)]
			internal object _CreateGet_b__0(T o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0<T>
		{
			// Fields
			[Nullable(0)]
			public FieldInfo fieldInfo;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			[NullableContext(0)]
			internal void _CreateSet_b__0(T o, [Nullable(2)] object v);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass9_0<T>
		{
			// Fields
			[Nullable(0)]
			public PropertyInfo propertyInfo;
	
			// Constructors
			public __c__DisplayClass9_0();
	
			// Methods
			[NullableContext(0)]
			internal void _CreateSet_b__0(T o, [Nullable(2)] object v);
		}
	
		// Constructors
		public LateBoundReflectionDelegateFactory();
		static LateBoundReflectionDelegateFactory();
	
		// Methods
		public override ObjectConstructor<object> CreateParameterizedConstructor(MethodBase method);
		public override MethodCall<T, object> CreateMethodCall<T>(MethodBase method);
		public override Func<T> CreateDefaultConstructor<T>(System.Type type);
		public override Func<T, object> CreateGet<T>(PropertyInfo propertyInfo);
		public override Func<T, object> CreateGet<T>(FieldInfo fieldInfo);
		public override Action<T, object> CreateSet<T>(FieldInfo fieldInfo);
		public override Action<T, object> CreateSet<T>(PropertyInfo propertyInfo);
	}
}
