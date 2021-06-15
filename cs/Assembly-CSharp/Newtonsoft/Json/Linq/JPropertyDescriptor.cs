/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace Newtonsoft.Json.Linq
{
	public class JPropertyDescriptor : PropertyDescriptor
	{
		// Fields
		private readonly Type _propertyType;
	
		// Properties
		public override Type ComponentType { get; }
		public override bool IsReadOnly { get; }
		public override Type PropertyType { get; }
		protected override int NameHashCode { get; }
	
		// Constructors
		public JPropertyDescriptor(string name, Type propertyType);
	
		// Methods
		private static JObject CastInstance(object instance);
		public override bool CanResetValue(object component);
		public override object GetValue(object component);
		public override void ResetValue(object component);
		public override void SetValue(object component, object value);
		public override bool ShouldSerializeValue(object component);
	}
}
