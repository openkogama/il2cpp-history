/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class ItemDataController : MonoBehaviour
{
	// Fields
	private readonly int defaultCategoryID;
	private int currentTab;
	private List<InventoryItemData> inventoryItemDatas;
	private Dictionary<int, TabState> categories;
	[SerializeField]
	private InventoryController inventoryController;
	[SerializeField]
	private PreviewObject previewObject;
	[SerializeField]
	private TestItem testItemPrefab;
	[SerializeField]
	private int numberOfSlots;

	// Constructors
	public ItemDataController();

	// Methods
	private void Start();
	public void SlotChanged(int fromSlotIndex, int toSlotIndex);
	private void PageTurned(int dir);
	private void TabSelected(int tabId);
	private void UpdateContent();
	private void InitializeTestData();
	private InventoryItemData GetItemData(int slot);
}

