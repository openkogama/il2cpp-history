/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventorySlot : MonoBehaviour, IDropHandler
{
	// Fields
	private int absoluteSlotValue;
	[SerializeField]
	private NotificationFade fade;

	// Properties
	public int AbsoluteSlot { get; }
	public GameObject Item { get; }

	// Nested types
	[CompilerGenerated]
	private sealed class _OnDrop_c__AnonStorey0
	{
		// Fields
		internal PointerEventData eventData;
		internal InventorySlot _this;

		// Constructors
		public _OnDrop_c__AnonStorey0();

		// Methods
		internal void __m__0(IGameObjectDroppedInSlot x, BaseEventData y);
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

