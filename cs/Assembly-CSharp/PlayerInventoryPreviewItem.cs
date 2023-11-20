/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.UI;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[SerializeField]
	private GameObject padLock;
	[SerializeField]
	private ItemPurchasePopup popup;
	[SerializeField]
	private UnityEngine.UI.Text text;
	[SerializeField]
	private Texture noImageTexture;
	[SerializeField]
	private Image loadingWheel;
	private InventoryItem item;
	private InventoryItemPreviewer objectPreviewer;
	private bool initialized;
	private bool hasItemPreviewer;
	private bool requiresUnlocking;
	public MVWorldObjectDocumentationType DocumentationType;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__28_0;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__30_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__31_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__34_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _AdditionalItemSettingsPressed_b__28_0(IUIStack handler, BaseEventData data);
		internal void _OnInventoryItemFailedToLoad_b__30_0(IModalPopupCreator x, BaseEventData y);
		internal void _AddItemToWorldFromInventory_b__31_0(IUIStack x, BaseEventData y);
		internal void _ShowPurchasePopUp_b__34_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass28_0
	{
		// Fields
		public InventoryItemPreview itemPreviewer;

		// Constructors
		public __c__DisplayClass28_0();

		// Methods
		internal void _AdditionalItemSettingsPressed_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass34_0
	{
		// Fields
		public ItemPurchasePopup purchasePopup;

		// Constructors
		public __c__DisplayClass34_0();

		// Methods
		internal void _ShowPurchasePopUp_b__1(IUIStack x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class _AddToWorldInSeconds_d__33 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public int seconds;
		public PlayerInventoryPreviewItem __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _AddToWorldInSeconds_d__33(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[CompilerGenerated]
	private sealed class _DownloadImage_d__22 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public string url;
		public PlayerInventoryPreviewItem __4__this;
		private UnityWebRequest _request_5__2;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _DownloadImage_d__22(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	// Constructors
	public PlayerInventoryPreviewItem();

	// Methods
	public void Initialize(Transform rootTransform, InventoryItem invItem, bool draggable, bool done);
	[IteratorStateMachine(typeof(_DownloadImage_d__22))]
	private IEnumerator DownloadImage(string url);
	public void Initialize(Transform rootTransform, InventoryItem invItem, MVWorldObjectClient woPreviewObject, bool draggable);
	public void LoadItemPreviewer(Transform rootTransform, InventoryItem item, MVWorldObjectClient woPreviewObject);
	private void OnDestroy();
	public InventoryItemPreviewer GetPreviewer();
	public InventoryItem GetItem();
	public void AdditionalItemSettingsPressed();
	public void SlotPressed();
	private void OnInventoryItemFailedToLoad();
	private void AddItemToWorldFromInventory();
	private void OnInventoryItemLoaded(object sender, ReceivedItemFromQueryEventArgs e);
	[IteratorStateMachine(typeof(_AddToWorldInSeconds_d__33))]
	private IEnumerator AddToWorldInSeconds(int seconds);
	public void ShowPurchasePopUp();
	public void Update();
	[CompilerGenerated]
	private void _AddItemToWorldFromInventory_b__31_1(IAddItemFromInventory x, BaseEventData y);
	[CompilerGenerated]
	private void _OnInventoryItemLoaded_b__32_0(IPlayerInventory x, BaseEventData y);
}

