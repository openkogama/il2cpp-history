/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Reflection;
using System.Resources;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;

// Image 9: Newtonsoft.Json.dll - Assembly: Newtonsoft.Json, Version=13.0.0.0, Culture=neutral, PublicKeyToken=30ad4fe6b2a6aeed

namespace Newtonsoft.Json.Linq
{
	[Nullable(0)]
	[NullableContext(1)]
	public class JPropertyDescriptor : PropertyDescriptor
	{
		// Properties
		public override System.Type ComponentType { get; }
		public override bool IsReadOnly { get; }
		public override System.Type PropertyType { get; }
		protected override int NameHashCode { get; }
	
		// Constructors
		public JPropertyDescriptor(string name);
	
		// Methods
		public override bool CanResetValue(object component);
		[NullableContext(2)]
		public override object GetValue(object component);
		public override void ResetValue(object component);
		[NullableContext(2)]
		public override void SetValue(object component, object value);
		public override bool ShouldSerializeValue(object component);
	}
}
