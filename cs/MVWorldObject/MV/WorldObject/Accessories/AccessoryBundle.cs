/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;

// Image 6: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Accessories
{
	public class AccessoryBundle
	{
		// Fields
		public int accessoryBundleID;
		public List<AccessoryBundleItem> accessoryBundleItems;
		public int discount;
		public int level;
		public string name;
		public bool isAvailable;
		public AccessoryTimelimit timelimit;
	
		// Properties
		public bool IsEmptyBundle { get; }
		public bool IsTimeLimited { get; }
	
		// Constructors
		public AccessoryBundle();
	
		// Methods
		public bool GetShowInShop();
		public override string ToString();
	}
}
