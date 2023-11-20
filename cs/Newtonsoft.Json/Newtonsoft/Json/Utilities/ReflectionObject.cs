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
using Newtonsoft.Json.Serialization;

// Image 8: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class ReflectionObject
	{
		// Fields
		[CompilerGenerated]
		[Nullable(new byte[2] {2, 1 })]
		private readonly ObjectConstructor<object> _Creator_k__BackingField;
		[CompilerGenerated]
		private readonly IDictionary<string, ReflectionMember> _Members_k__BackingField;
	
		// Properties
		[Nullable(new byte[2] {2, 1 })]
		public ObjectConstructor<object> Creator { [CompilerGenerated] get; }
		public IDictionary<string, ReflectionMember> Members { [CompilerGenerated] get; }
	
		// Nested types
		[CompilerGenerated]
		private sealed class __c__DisplayClass11_0
		{
			// Fields
			[Nullable(new byte[2] {0, 1 })]
			public Func<object> ctor;
	
			// Constructors
			public __c__DisplayClass11_0();
	
			// Methods
			internal object _Create_b__0([Nullable(new byte[2] {1, 2 })] object[] args);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass11_1
		{
			// Fields
			[Nullable(new byte[3] {0, 1, 2 })]
			public MethodCall<object, object> call;
	
			// Constructors
			public __c__DisplayClass11_1();
	
			// Methods
			internal object _Create_b__1(object target);
		}
	
		[CompilerGenerated]
		private sealed class __c__DisplayClass11_2
		{
			// Fields
			[Nullable(new byte[3] {0, 1, 2 })]
			public MethodCall<object, object> call;
	
			// Constructors
			public __c__DisplayClass11_2();
	
			// Methods
			internal void _Create_b__2(object target, [Nullable(2)] object arg);
		}
	
		// Constructors
		private ReflectionObject([Nullable(new byte[2] {2, 1 })] ObjectConstructor<object> creator);
	
		// Methods
		public object GetValue(object target, string member);
		public void SetValue(object target, string member, [Nullable(2)] object value);
		public System.Type GetType(string member);
		public static ReflectionObject Create(System.Type t, params string[] memberNames);
		public static ReflectionObject Create(System.Type t, [Nullable(2)] MethodBase creator, params string[] memberNames);
	}
}
