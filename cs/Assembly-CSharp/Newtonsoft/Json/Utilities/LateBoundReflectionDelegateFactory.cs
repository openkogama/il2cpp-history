/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Utilities
{
	internal class LateBoundReflectionDelegateFactory : ReflectionDelegateFactory
	{
		// Fields
		private static readonly LateBoundReflectionDelegateFactory _instance;
	
		// Properties
		internal static ReflectionDelegateFactory Instance { get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass3_0<T>
		{
			// Fields
			public ConstructorInfo c;
			public MethodBase method;
	
			// Constructors
			public __c__DisplayClass3_0();
	
			// Methods
			internal object _CreateMethodCall_b__0(T o, object[] a);
			internal object _CreateMethodCall_b__1(T o, object[] a);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass4_0<T>
		{
			// Fields
			public System.Type type;
			public ConstructorInfo constructorInfo;
	
			// Constructors
			public __c__DisplayClass4_0();
	
			// Methods
			internal T _CreateDefaultConstructor_b__0();
			internal T _CreateDefaultConstructor_b__1();
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass5_0<T>
		{
			// Fields
			public PropertyInfo propertyInfo;
	
			// Constructors
			public __c__DisplayClass5_0();
	
			// Methods
			internal object _CreateGet_b__0(T o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass6_0<T>
		{
			// Fields
			public FieldInfo fieldInfo;
	
			// Constructors
			public __c__DisplayClass6_0();
	
			// Methods
			internal object _CreateGet_b__0(T o);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass7_0<T>
		{
			// Fields
			public FieldInfo fieldInfo;
	
			// Constructors
			public __c__DisplayClass7_0();
	
			// Methods
			internal void _CreateSet_b__0(T o, object v);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass8_0<T>
		{
			// Fields
			public PropertyInfo propertyInfo;
	
			// Constructors
			public __c__DisplayClass8_0();
	
			// Methods
			internal void _CreateSet_b__0(T o, object v);
		}
	
		// Constructors
		public LateBoundReflectionDelegateFactory();
		static LateBoundReflectionDelegateFactory();
	
		// Methods
		public override MethodCall<T, object> CreateMethodCall<T>(MethodBase method);
		public override Func<T> CreateDefaultConstructor<T>(System.Type type);
		public override Func<T, object> CreateGet<T>(PropertyInfo propertyInfo);
		public override Func<T, object> CreateGet<T>(FieldInfo fieldInfo);
		public override Action<T, object> CreateSet<T>(FieldInfo fieldInfo);
		public override Action<T, object> CreateSet<T>(PropertyInfo propertyInfo);
	}
}
