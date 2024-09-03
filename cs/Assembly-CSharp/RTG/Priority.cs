/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class Priority
	{
		// Fields
		private int _priority;
	
		// Properties
		public int Value { get; set; }
		public static int Lowest { get; }
		public static int Highest { get; }
	
		// Constructors
		public Priority();
	
		// Methods
		public void MakeLowest();
		public void MakeHighest();
		public void MakeLowerThan(Priority priority);
		public void MakeHigherThan(Priority priority);
		public override int GetHashCode();
		public override bool Equals(object obj);
		public int CompareTo(Priority other);
		public static bool operator ==(Priority firstPriority, Priority secondPriority);
		public static bool operator !=(Priority firstPriority, Priority secondPriority);
		public static bool operator >(Priority firstPriority, Priority secondPriority);
		public static bool operator >=(Priority firstPriority, Priority secondPriority);
		public static bool operator <(Priority firstPriority, Priority secondPriority);
		public static bool operator <=(Priority firstPriority, Priority secondPriority);
	}
}
