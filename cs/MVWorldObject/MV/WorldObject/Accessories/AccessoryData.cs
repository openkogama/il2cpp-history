/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using MV.Common;

// Image 33: MVWorldObject.dll - Assembly: MVWorldObject, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null

namespace MV.WorldObject.Accessories
{
	public class AccessoryData
	{
		// Fields
		public int aMDID;
		public int sAID;
		public bool iAvlb;
		public bool iNew;
		public bool iFtr;
		public int cost;
		public int dsc;
		public int lvl;
		public string name;
		public AccessoryCategory cat;
		public int pos;
		public string url;
		public bool owns;
		public AccessorySlotType slot;
		public AccessoryTimelimit time;
	
		// Properties
		public int DiscountedPrice { get; }
	
		// Constructors
		public AccessoryData();
	
		// Methods
		public override string ToString();
		public bool GetShowInShop();
	}
}
