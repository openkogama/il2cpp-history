/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryPointerController : MonoBehaviour
{
	// Fields
	private int bubbleId;
	[SerializeField]
	protected Button button;
	[SerializeField]
	protected RectTransform pointToTransform;
	[SerializeField]
	protected Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	protected List<RectTransform> bubbleContent;
	[SerializeField]
	protected float bubbleLifetimeWhileShown;
	[SerializeField]
	private Button openButton;
	private int slotToHighlight;
	private int categoryToOpen;
	private Button open;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;

	// Constructors
	public InventoryPointerController();

	// Methods
	private void Start();
	public void CreateBubble(int category, int slot);
	private void RemoveBubbles();
	private void OpenAtSlot();
	private void ClearImmediate();
	[CompilerGenerated]
	private static void _CreateBubble_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _CreateBubble_m__1(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _OpenAtSlot_m__2(IPlayerInventory x, BaseEventData y);
	[CompilerGenerated]
	private void _ClearImmediate_m__3(TextBubbleController x, BaseEventData y);
}

