/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Dynamic;
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
	internal static class DynamicUtils
	{
		// Nested types
		[Nullable(0)]
		internal static class BinderWrapper
		{
			// Fields
			[Nullable(2)]
			private static object _getCSharpArgumentInfoArray;
			[Nullable(2)]
			private static object _setCSharpArgumentInfoArray;
			[Nullable(2)]
			private static MethodCall<object, object> _getMemberCall;
			[Nullable(2)]
			private static MethodCall<object, object> _setMemberCall;
			private static bool _init;
	
			// Methods
			private static void Init();
			private static object CreateSharpArgumentInfoArray(params int[] values);
			private static void CreateMemberCalls();
			public static CallSiteBinder GetMember(string name, System.Type context);
			public static CallSiteBinder SetMember(string name, System.Type context);
		}
	
		// Extension methods
		public static IEnumerable<string> GetDynamicMemberNames(this IDynamicMetaObjectProvider dynamicProvider);
	}
}
