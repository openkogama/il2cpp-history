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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class InventoryPointerController : MonoBehaviour
{
	// Fields
	private int bubbleId;
	[SerializeField]
	protected UnityEngine.UI.Button button;
	[SerializeField]
	protected RectTransform pointToTransform;
	[SerializeField]
	protected Vector2 pointerBodyDirectionOffset;
	[SerializeField]
	protected List<RectTransform> bubbleContent;
	[SerializeField]
	protected float bubbleLifetimeWhileShown;
	[SerializeField]
	private UnityEngine.UI.Button openButton;
	private int slotToHighlight;
	private int categoryToOpen;
	private UnityEngine.UI.Button open;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__11_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _CreateBubble_b__11_0(IUIStack handler, BaseEventData data);
	}

	// Constructors
	public InventoryPointerController();

	// Methods
	private void Start();
	public void CreateBubble(int category, int slot, bool showBubble);
	private void RemoveBubbles();
	private void OpenAtSlot();
	private void ClearImmediate();
	[CompilerGenerated]
	private void _CreateBubble_b__11_1(TextBubbleController x, BaseEventData y);
	[CompilerGenerated]
	private void _OpenAtSlot_b__13_0(IPlayerInventory x, BaseEventData y);
	[CompilerGenerated]
	private void _ClearImmediate_b__14_0(TextBubbleController x, BaseEventData y);
}

