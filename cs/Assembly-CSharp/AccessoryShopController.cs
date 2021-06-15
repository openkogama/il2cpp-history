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

// Image 37: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

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
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditStateCommands> __f__am_cache0;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache1;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache2;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IEditStateCommands> __f__am_cache3;
	[CompilerGenerated]
	private static Func<AccessoryDataClient, int> __f__am_cache4;
	[CompilerGenerated]
	private static Func<AccessoryDataClient, int> __f__am_cache5;
	[CompilerGenerated]
	private static Func<AccessoryDataClient, int> __f__am_cache6;
	[CompilerGenerated]
	private static Func<AccessoryDataClient, int> __f__am_cache7;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IModalPopupCreator> __f__am_cache8;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IUIStack> __f__am_cache9;
	[CompilerGenerated]
	private static ExecuteEvents.EventFunction<IAccessoryChanged> __f__am_cacheA;

	// Nested types
	[CompilerGenerated]
	private sealed class _OpenAccessoryViewDelayed_c__Iterator0 : IEnumerator<object>
	{
		// Fields
		internal AccessoryShopController _this;
		internal object _current;
		internal bool _disposing;
		internal int _PC;

		// Properties
		object IEnumerator<object>.Current { [DebuggerHidden] get; }
		object IEnumerator.Current { [DebuggerHidden] get; }

		// Constructors
		[DebuggerHidden]
		public _OpenAccessoryViewDelayed_c__Iterator0();

		// Methods
		public bool MoveNext();
		[DebuggerHidden]
		public void Dispose();
		[DebuggerHidden]
		public void Reset();
	}

	[CompilerGenerated]
	private sealed class _SetAccessoriesToSelectable_c__AnonStorey1
	{
		// Fields
		internal MVBody currentBody;

		// Constructors
		public _SetAccessoriesToSelectable_c__AnonStorey1();

		// Methods
		internal void __m__0(IGetCurrentBody x, BaseEventData y);
		internal void __m__1(MVBody body);
	}

	[CompilerGenerated]
	private sealed class _AttachToBody_c__AnonStorey2
	{
		// Fields
		internal float offset;
		internal float scale;
		internal AccessoryShopController _this;

		// Constructors
		public _AttachToBody_c__AnonStorey2();

		// Methods
		internal void __m__0(IGetCurrentBody x, BaseEventData y);
		internal void __m__1(MVBody body);
	}

	// Constructors
	public AccessoryShopController();

	// Methods
	private void Setup();
	public void Activate(UIPushOption pushOption);
	public void OpenInventoryAtItem(UIPushOption pushOption, AccessoryDataClient accessoryData);
	public void Activate(UIPushOption pushOption, AccessoryCategoryClient category);
	private void ReadyCallbackAccessoryView();
	[DebuggerHidden]
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
	private static void _ReadyCallback_m__0(IEditStateCommands x, BaseEventData y);
	[CompilerGenerated]
	private static void _ReadyCallback_m__1(IUIStack handler, BaseEventData data);
	[CompilerGenerated]
	private void _ReadyCallback_m__2(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _InventoryChanged_m__3(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _OnPop_m__4(IEditStateCommands x, BaseEventData y);
	[CompilerGenerated]
	private void _UpdateContent_m__5(IGetCurrentBody x, BaseEventData y);
	[CompilerGenerated]
	private static int _GetAccessoryDataFromCategoryType_m__6(AccessoryDataClient o);
	[CompilerGenerated]
	private static int _GetAccessoryDataFromCategoryType_m__7(AccessoryDataClient o);
	[CompilerGenerated]
	private static int _GetAccessoryDataFromCategoryType_m__8(AccessoryDataClient o);
	[CompilerGenerated]
	private static int _GetAccessoryDataFromCategoryType_m__9(AccessoryDataClient o);
	[CompilerGenerated]
	private static void _Attach_m__A(IModalPopupCreator x, BaseEventData y);
	[CompilerGenerated]
	private static void _AttacherFinished_m__B(IUIStack x, BaseEventData y);
	[CompilerGenerated]
	private static void _AttacherFinished_m__C(IAccessoryChanged x, BaseEventData y);
}

