/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Dynamic;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Utilities
{
	[Nullable(0)]
	[NullableContext(1)]
	internal class NoThrowGetBinderMember : GetMemberBinder
	{
		// Fields
		private readonly GetMemberBinder _innerBinder;
	
		// Constructors
		public NoThrowGetBinderMember(GetMemberBinder innerBinder);
	
		// Methods
		public override DynamicMetaObject FallbackGetMember(DynamicMetaObject target, [Nullable(2)] DynamicMetaObject errorSuggestion);
	}
}
