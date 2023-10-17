/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryItemDragHandler : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
	// Fields
	[SerializeField]
	private CanvasGroup canvasGroup;
	private static bool dragging;
	public static bool dragRejected;

	// Properties
	public static bool Dragging { get; }

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IPlayerInventory> __9__6_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _OnEndDrag_b__6_0(IPlayerInventory x, BaseEventData y);
	}

	// Constructors
	public InventoryItemDragHandler();

	// Methods
	public void OnBeginDrag(PointerEventData eventData);
	public void OnEndDrag(PointerEventData eventData);
	public void OnDrag(PointerEventData eventData);
	private void Update();
	[CompilerGenerated]
	private void _OnBeginDrag_b__5_0(IPlayerInventory x, BaseEventData y);
}

