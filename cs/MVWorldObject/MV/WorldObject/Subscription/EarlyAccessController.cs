/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.WorldObject;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Subscription
{
	public static class EarlyAccessController
	{
		// Fields
		private static readonly List<string> earlyAccessKeys;
	
		// Constructors
		static EarlyAccessController();
	
		// Methods
		public static bool IsEarlyAccess(object key);
		public static bool IsWorldObjectEarlyAccess(WorldObjectType type);
	}
}
