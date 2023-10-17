/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventorySlots : MonoBehaviour, IGameObjectDroppedInSlot
{
	// Fields
	private readonly Dictionary<int, InventorySlot> inventorySlots;
	[SerializeField]
	private InventorySlot inventorySlotPrefab;
	[CompilerGenerated]
	private int _SlotCountPerPage_k__BackingField;

	// Properties
	public int SlotCountPerPage { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass12_0
	{
		// Fields
		public int fromSlotIndex;
		public int toSlotIndex;

		// Constructors
		public __c__DisplayClass12_0();

		// Methods
		internal void _SlotChanged_b__0(ISlotChanged x, BaseEventData y);
	}

	// Constructors
	public InventorySlots();

	// Methods
	public void Initialize(int numberOfSlots);
	public Dictionary<int, InventorySlot> GetSlots();
	public void HighlightSlot(int slotPosition);
	public void Clear();
	public void UpdateAbsoluteSlotValues(int page, int numberOfSlots);
	public void AddItem(GameObject item, int slotIndex);
	public void SlotChanged(GameObject draggedItem, int toSlotIndex);
	private InventorySlot GetSlotBasedOnAbsolute(int absoluteSlotIndex);
}

