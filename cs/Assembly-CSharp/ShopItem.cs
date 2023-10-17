/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShopItem
{
	// Fields
	public readonly int itemID;
	public readonly int itemCategoryID;
	public readonly int itemTypeID;
	public string name;
	public string description;
	public readonly byte[] data;
	public readonly bool resellable;
	public readonly int priceGold;
	public int slotPosition;

	// Constructors
	public ShopItem(int key, Dictionary<object, object> outData);
	public ShopItem(InventoryItem inventoryItem);

	// Methods
	public void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType t);
}

