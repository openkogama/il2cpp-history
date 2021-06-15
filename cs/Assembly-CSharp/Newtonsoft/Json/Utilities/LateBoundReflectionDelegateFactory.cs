/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
		private sealed class _CreateMethodCall_c__AnonStorey0<T>
		{
			// Fields
			internal ConstructorInfo c;
			internal MethodBase method;
	
			// Constructors
			public _CreateMethodCall_c__AnonStorey0();
	
			// Methods
			internal object __m__0(T o, object[] a);
			internal object __m__1(T o, object[] a);
		}
	
		[CompilerGenerated]
		private sealed class _CreateDefaultConstructor_c__AnonStorey1<T>
		{
			// Fields
			internal Type type;
			internal ConstructorInfo constructorInfo;
	
			// Constructors
			public _CreateDefaultConstructor_c__AnonStorey1();
	
			// Methods
			internal T __m__0();
			internal T __m__1();
		}
	
		[CompilerGenerated]
		private sealed class _CreateGet_c__AnonStorey2<T>
		{
			// Fields
			internal PropertyInfo propertyInfo;
	
			// Constructors
			public _CreateGet_c__AnonStorey2();
	
			// Methods
			internal object __m__0(T o);
		}
	
		[CompilerGenerated]
		private sealed class _CreateGet_c__AnonStorey3<T>
		{
			// Fields
			internal FieldInfo fieldInfo;
	
			// Constructors
			public _CreateGet_c__AnonStorey3();
	
			// Methods
			internal object __m__0(T o);
		}
	
		[CompilerGenerated]
		private sealed class _CreateSet_c__AnonStorey4<T>
		{
			// Fields
			internal FieldInfo fieldInfo;
	
			// Constructors
			public _CreateSet_c__AnonStorey4();
	
			// Methods
			internal void __m__0(T o, object v);
		}
	
		[CompilerGenerated]
		private sealed class _CreateSet_c__AnonStorey5<T>
		{
			// Fields
			internal PropertyInfo propertyInfo;
	
			// Constructors
			public _CreateSet_c__AnonStorey5();
	
			// Methods
			internal void __m__0(T o, object v);
		}
	
		// Constructors
		public LateBoundReflectionDelegateFactory();
		static LateBoundReflectionDelegateFactory();
	
		// Methods
		public override MethodCall<T, object> CreateMethodCall<T>(MethodBase method);
		public override Func<T> CreateDefaultConstructor<T>(Type type);
		public override Func<T, object> CreateGet<T>(PropertyInfo propertyInfo);
		public override Func<T, object> CreateGet<T>(FieldInfo fieldInfo);
		public override Action<T, object> CreateSet<T>(FieldInfo fieldInfo);
		public override Action<T, object> CreateSet<T>(PropertyInfo propertyInfo);
	}
}
