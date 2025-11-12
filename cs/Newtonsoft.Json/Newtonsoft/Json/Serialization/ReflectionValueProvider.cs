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

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Serialization
{
	[Nullable(0)]
	[NullableContext(1)]
	public class ReflectionValueProvider : IValueProvider
	{
		// Fields
		private readonly MemberInfo _memberInfo;
	
		// Constructors
		public ReflectionValueProvider(MemberInfo memberInfo);
	
		// Methods
		public void SetValue(object target, [Nullable(2)] object value);
		public object GetValue(object target);
	}
}
