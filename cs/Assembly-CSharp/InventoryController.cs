/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryController : MonoBehaviour, IPagedTurned, ITabSelected, ISlotChanged
{
	// Fields
	private int numberOfSlots;
	[SerializeField]
	private TabMenuBase tabMenu;
	[SerializeField]
	private InventorySlots inventorySlots;
	[SerializeField]
	private UnityEngine.UI.Text categoryHeaderText;
	public UnityAction<int> OnPageTurned;
	public UnityAction<int> OnTabSelected;
	public UnityAction<int, int> OnSlotChanged;

	// Constructors
	public InventoryController();

	// Methods
	public void Initialize(int numberOfSlots);
	public void Clear();
	public void SetHeaderText(string category);
	public void HighlightSlot(int slotPosition);
	public void AddTab(int categoryId, string tabname);
	public void SelectTab(int tabId, int currentPage, int maxPages);
	public void AddObject(GameObject item, int slotIndex);
	public void PageTurned(int dir);
	public void TabSelected(int tabId);
	public void SlotChanged(int fromSlotIndex, int toSlotIndex);
	public List<T> GetComponentsOfSlotsWithType<T>()
		where T : MonoBehaviour;
}

