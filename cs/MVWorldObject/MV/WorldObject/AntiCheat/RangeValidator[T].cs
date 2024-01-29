/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 13: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.AntiCheat
{
	public class RangeValidator<T>
		where T : IComparable<T>
	{
		// Fields
		public T min;
		public T max;
	
		// Constructors
		public RangeValidator();
		public RangeValidator(T min, T max);
	
		// Methods
		public T Validate(T value, bool fixIfInValid);
		public override string ToString();
	}
}
