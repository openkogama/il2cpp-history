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

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AccessoryShopController : MonoBehaviour, IInventoryChanged, IAttachToBody, IAccessoryInventoryControl
{
	// Fields
	private InventoryController inventoryController;
	private Transform previewItemsRoot;
	private Dictionary<int, TabState> tabs;
	private int selectedTab;
	private AccessoryAttacher accessoryAttacher;
	private int currentlyAttachingID;
	private bool attachingReady;
	private AccessoryCategoryClient startingCategory;
	private bool displayShopItems;
	[SerializeField]
	private AccessoryInventoryViewItem accessoryInventoryItemPrefab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	private AccessoryViewController accessoryViewController;
	private UIPushOption currentlyPushOption;
	private UIPushOption pushOption;
	private AccessoryDataClient accessoryDataToShow;
	private bool firstTimeSetup;

	// Nested types
	[CompilerGenerated]
	private sealed class _OpenAccessoryViewDelayed_d__21 : IEnumerator<object>
	{
		// Fields
		private int __1__state;
		private object __2__current;
		public AccessoryShopController __4__this;

		// Properties
		object IEnumerator<System.Object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OpenAccessoryViewDelayed_d__21(int __1__state);

		// Methods
		[DebuggerHidden]
		void IDisposable.Dispose();
		private bool MoveNext();
		[DebuggerHidden]
		void IEnumerator.Reset();
	}

	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IEditStateCommands> __9__25_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__25_1;
		public static ExecuteEvents.EventFunction<IUIStack> __9__33_0;
		public static ExecuteEvents.EventFunction<IEditStateCommands> __9__37_0;
		public static Func<AccessoryDataClient, int> __9__40_0;
		public static Func<AccessoryDataClient, int> __9__40_1;
		public static Func<AccessoryDataClient, int> __9__40_2;
		public static Func<AccessoryDataClient, int> __9__40_3;
		public static ExecuteEvents.EventFunction<IModalPopupCreator> __9__42_0;
		public static ExecuteEvents.EventFunction<IUIStack> __9__43_0;
		public static ExecuteEvents.EventFunction<IAccessoryChanged> __9__43_1;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _ReadyCallback_b__25_0(IEditStateCommands x, BaseEventData y);
		internal void _ReadyCallback_b__25_1(IUIStack handler, BaseEventData data);
		internal void _InventoryChanged_b__33_0(IUIStack x, BaseEventData y);
		internal void _OnPop_b__37_0(IEditStateCommands x, BaseEventData y);
		internal int _GetAccessoryDataFromCategoryType_b__40_0(AccessoryDataClient o);
		internal int _GetAccessoryDataFromCategoryType_b__40_1(AccessoryDataClient o);
		internal int _GetAccessoryDataFromCategoryType_b__40_2(AccessoryDataClient o);
		internal int _GetAccessoryDataFromCategoryType_b__40_3(AccessoryDataClient o);
		internal void _Attach_b__42_0(IModalPopupCreator x, BaseEventData y);
		internal void _AttacherFinished_b__43_0(IUIStack x, BaseEventData y);
		internal void _AttacherFinished_b__43_1(IAccessoryChanged x, BaseEventData y);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass32_0
	{
		// Fields
		public MVBody currentBody;
		public Action<MVBody> __9__1;

		// Constructors
		public __c__DisplayClass32_0();

		// Methods
		internal void _SetAccessoriesToSelectable_b__0(IGetCurrentBody x, BaseEventData y);
		internal void _SetAccessoriesToSelectable_b__1(MVBody body);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass41_0
	{
		// Fields
		public AccessoryShopController __4__this;
		public float offset;
		public float scale;
		public Action<MVBody> __9__1;

		// Constructors
		public __c__DisplayClass41_0();

		// Methods
		internal void _AttachToBody_b__0(IGetCurrentBody x, BaseEventData y);
		internal void _AttachToBody_b__1(MVBody body);
	}

	// Constructors
	public AccessoryShopController();

	// Methods
	private void Setup();
	public void Activate(UIPushOption pushOption);
	public void OpenInventoryAtItem(UIPushOption pushOption, AccessoryDataClient accessoryData);
	public void Activate(UIPushOption pushOption, AccessoryCategoryClient category);
	private void ReadyCallbackAccessoryView();
	[IteratorStateMachine(typeof(_OpenAccessoryViewDelayed_d__21))]
	private IEnumerator OpenAccessoryViewDelayed();
	public void DisplayPurchasableItems(bool displayShopItems);
	public void RefreshItems();
	private void ReadyCallback();
	private void ClearShop();
	private void DisplayAllItems();
	private void AddDynamicTab(AccessoryCategoryClient category);
	private void CreateAndAddTab(AccessoryCategoryClient category, int highestSlotIndex);
	private void DisplayOwnedItems();
	private int GetOwnedAmount(List<AccessoryDataClient> accessoryList);
	private void SetAccessoriesToSelectable(bool selectable);
	public void InventoryChanged();
	public void ResetAfterBundlePurchase();
	private void PageTurned(int dir);
	private void TabSelected(int tabId);
	private void OnPop();
	private void UpdateContent();
	private void UpdateContentWithBody(MVBody avatarBody);
	private List<AccessoryDataClient> GetAccessoryDataFromCategoryType(AccessoryCategoryClient category);
	public void AttachToBody(int productId, float offset, float scale);
	private void Attach(MVBody body, float offset, float scale);
	private void AttacherFinished();
	[CompilerGenerated]
	private void _ReadyCallback_b__25_2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private void _UpdateContent_b__38_0(IGetCurrentBody x, BaseEventData y);
}

