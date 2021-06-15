/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventorySlots : MonoBehaviour, IGameObjectDroppedInSlot
{
	// Fields
	private Dictionary<int, InventorySlot> inventorySlots;
	[SerializeField]
	private InventorySlot inventorySlotPrefab;
	[CompilerGenerated]
	[DebuggerBrowsable]
	private int _SlotCountPerPage_k__BackingField;

	// Properties
	public int SlotCountPerPage { [CompilerGenerated] get; [CompilerGenerated] private set; }

	// Nested types
	[CompilerGenerated]
	private sealed class _SlotChanged_c__AnonStorey0
	{
		// Fields
		internal int fromSlotIndex;
		internal int toSlotIndex;

		// Constructors
		public _SlotChanged_c__AnonStorey0();

		// Methods
		internal void __m__0(ISlotChanged x, BaseEventData y);
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

