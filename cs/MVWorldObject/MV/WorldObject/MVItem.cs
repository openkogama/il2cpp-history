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

namespace MV.WorldObject
{
	public class MVItem
	{
		// Fields
		public int itemID;
		public int itemCategoryID;
		public int itemTypeID;
		public int originalItemID;
		public int marketPlaceItemID;
		public string name;
		public string description;
		public byte[] data;
		public bool hasData;
		public bool resellable;
		public int authorProfileID;
		public int shopInventoryID;
		public int priceGold;
		public bool isDeleted;
		public string imagePath;
	
		// Constructors
		public MVItem();
		public MVItem(int itemID, Dictionary<object, object> itemData);
	
		// Methods
		public override string ToString();
	}
}
