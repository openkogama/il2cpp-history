/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventorySlot : MonoBehaviour, IDropHandler
{
	// Fields
	[CompilerGenerated]
	private int _AbsoluteSlot_k__BackingField;
	[SerializeField]
	private NotificationFade fade;

	// Properties
	public int AbsoluteSlot { [CompilerGenerated] get; [CompilerGenerated] private set; }
	public GameObject Item { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class __c__DisplayClass11_0
	{
		// Fields
		public PointerEventData eventData;
		public InventorySlot __4__this;

		// Constructors
		public __c__DisplayClass11_0();

		// Methods
		internal void _OnDrop_b__0(IGameObjectDroppedInSlot x, BaseEventData y);
	}

	// Constructors
	public InventorySlot();

	// Methods
	public void Clear();
	public void UpdateAbsoluteSlotValue(int slotValue);
	public void HighlightSlot();
	public void Set(GameObject item);
	public void OnDrop(PointerEventData eventData);
}

