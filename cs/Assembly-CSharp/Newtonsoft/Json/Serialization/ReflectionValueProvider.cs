/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Serialization
{
	public class ReflectionValueProvider : IValueProvider
	{
		// Fields
		private readonly MemberInfo _memberInfo;
	
		// Constructors
		public ReflectionValueProvider(MemberInfo memberInfo);
	
		// Methods
		public void SetValue(object target, object value);
		public object GetValue(object target);
	}
}
