/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryItemDragHandler : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
{
	// Fields
	[SerializeField]
	private CanvasGroup canvasGroup;
	private static bool dragging;
	public static bool dragRejected;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IPlayerInventory> __f__am_cache0;

	// Properties
	public static bool Dragging { get; }

	// Constructors
	public InventoryItemDragHandler();
	static InventoryItemDragHandler();

	// Methods
	public void OnBeginDrag(PointerEventData eventData);
	public void OnEndDrag(PointerEventData eventData);
	public void OnDrag(PointerEventData eventData);
	private void Update();
	[CompilerGenerated]
	private void _OnBeginDrag_m__0(IPlayerInventory x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnEndDrag_m__1(IPlayerInventory x, BaseEventData y);
}

