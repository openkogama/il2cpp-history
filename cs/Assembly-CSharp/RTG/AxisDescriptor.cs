/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

namespace RTG
{
	public class AxisDescriptor
	{
		// Fields
		private AxisSign _sign;
		private int _index;
	
		// Properties
		public AxisSign Sign { get; }
		public int Index { get; }
		public bool IsPositive { get; }
		public bool IsNegative { get; }
	
		// Constructors
		public AxisDescriptor(int axisIndex, AxisSign axisSign);
		public AxisDescriptor(int axisIndex, bool isNegative);
	
		// Methods
		public BoxFace GetAssociatedBoxFace();
	}
}
