/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class PlayerInventoryPreviewItem : MonoBehaviour
{
	// Fields
	[SerializeField]
	private RawImage previewImage;
	[SerializeField]
	private int previewWidth;
	[SerializeField]
	private int previewHeight;
	[SerializeField]
	private InventoryItemDragHandler dragHandler;
	[SerializeField]
	private PlayerInventoryItemManager itemManagerPrefab;
	[SerializeField]
	private InventoryItemMetaData metaData;
	[SerializeField]
	private InventoryItemPreviewer objectPreviewerPrefab;
	[SerializeField]
	private InventoryItemPreview itemPreviewerPrefab;
	[SerializeField]
	private InventoryItemCubeModelHandler itemPreviewerCubeModelPrefab;
	[SerializeField]
	private ToolTip toolTip;
	private InventoryItem item;
	private InventoryItemPreviewer objectPreviewer;
	private bool initialized;
	public MVWorldObjectDocumentationType DocumentationType;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;

	// Nested types
	[CompilerGenerated]
	private sealed class _AdditionalItemSettingsPressed_c__AnonStorey0
	{
		// Fields
		internal InventoryItemPreview itemPreviewer;

		// Constructors
		public _AdditionalItemSettingsPressed_c__AnonStorey0();

		// Methods
		internal void __m__0(IUIStack x, BaseEventData y);
	}

	// Constructors
	public PlayerInventoryPreviewItem();

	// Methods
	public void Initialize(Transform rootTransform, InventoryItem item, MVWorldObjectClient woPreviewObject, bool draggable);
	private void OnDestroy();
	public InventoryItemPreviewer GetPreviewer();
	public InventoryItem GetItem();
	public void AdditionalItemSettingsPressed();
	public void SlotPressed();
	public void Update();
	[CompilerGenerated]
	private static void _AdditionalItemSettingsPressed_m__0(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private static void _SlotPressed_m__1(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _SlotPressed_m__2(IAddItemFromInventory x, BaseEventData y);
}

