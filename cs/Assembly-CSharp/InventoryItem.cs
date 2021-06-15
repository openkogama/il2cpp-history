/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryItem
{
	// Fields
	public readonly int itemID;
	public readonly int itemCategoryID;
	public readonly int itemTypeID;
	public readonly byte[] data;
	public readonly bool resellable;
	public readonly int priceGold;
	public readonly bool purchased;
	public readonly int authorProfileID;
	public readonly int originalItemID;
	public readonly bool isDeleted;
	public readonly bool isDefaultInvItem;
	public int shopInventoryID;
	public string name;
	public string description;
	public int slotPosition;
	public static readonly Dictionary<MVWorldObjectDocumentationType, ItemDescription> localItemDescriptionOverride;

	// Nested types
	public class ItemDescription
	{
		// Fields
		private string name;
		private string explanation;
		private string inspirational;
		private Vector3 cameraPreviewerOffset;

		// Properties
		public Vector3 CameraPreviewerOffset { get; }
		public string Name { get; }
		public string Description { get; }

		// Constructors
		public ItemDescription(string name, string explanation, string inspirational);
		public ItemDescription(string name, string explanation, string inspirational, Vector3 cameraPreviewerOffset);
	}

	// Constructors
	public InventoryItem();
	public InventoryItem(Dictionary<byte, object> data);
	public InventoryItem(int itemID, Dictionary<object, object> itemData);
	public InventoryItem(ShopItem itemToCopy);
	static InventoryItem();

	// Methods
	public void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType t);
}

