/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using MV.WorldObject;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class MVItemBusinessLogic
{
	// Fields
	private Dictionary<int, MVItem> items;

	// Constructors
	public MVItemBusinessLogic();

	// Methods
	public void AddItem(MVItem item);
	public void AddItemWithNoData(int itemID, bool resellable, int itemCategoryID, int itemTypeID, string name);
	public MVItem GetItem(int itemID);
	public bool CanAddItemToInventory(int itemID);
}

