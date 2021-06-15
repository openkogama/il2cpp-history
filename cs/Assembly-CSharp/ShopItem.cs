/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ShopItem
{
	// Fields
	public int itemID;
	public int itemCategoryID;
	public int itemTypeID;
	public string name;
	public string description;
	public byte[] data;
	public bool resellable;
	public int priceGold;
	public int slotPosition;
	public bool purchased;

	// Constructors
	public ShopItem(int key, Dictionary<object, object> outData);

	// Methods
	public void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType t);
}

