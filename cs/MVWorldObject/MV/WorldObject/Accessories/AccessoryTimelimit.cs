/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Accessories
{
	public class AccessoryTimelimit
	{
		// Fields
		public int timeLimit;
		public DateTime timeLimitStartTime;
	
		// Properties
		public bool IsTimeLimited { get; }
	
		// Constructors
		public AccessoryTimelimit();
	
		// Methods
		public TimeSpan GetTimeLeft();
		public bool GetHasTimeLeft();
		public override string ToString();
		public static string ToPrettyFormat(TimeSpan span);
	}
}
