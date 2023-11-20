/*
 * Generated code file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
 */

using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using UnityEngine;
using UnityEngine.EventSystems;

// Image 0: Assembly-CSharp.dll - Assembly: Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null

public class AvatarShopController : MonoBehaviour, IPurchaseAvatar
{
	// Fields
	private InventoryController inventoryController;
	private TabState tab;
	[SerializeField]
	private int numberOfSlotsPrPage;
	[SerializeField]
	private InventoryController inventoryControllerPrefab;
	[SerializeField]
	private AvatarShopPreviewItem previewItemPrefab;
	private Transform previewRootTransform;
	private AvatarEditModeBodyController avatarEditModeBodyController;
	private AvatarRepository avatarRepository;

	// Nested types
	[Serializable]
	[CompilerGenerated]
	private sealed class __c
	{
		// Fields
		public static readonly __c __9;
		public static ExecuteEvents.EventFunction<IUIStack> __9__10_0;

		// Constructors
		static __c();
		public __c();

		// Methods
		internal void _Activate_b__10_0(IUIStack handler, BaseEventData data);
	}

	[CompilerGenerated]
	private sealed class __c__DisplayClass10_0
	{
		// Fields
		public AvatarShopController __4__this;
		public UIPushOption pushOption;

		// Constructors
		public __c__DisplayClass10_0();

		// Methods
		internal void _Activate_b__1(IUIStack x, BaseEventData y);
	}

	// Constructors
	public AvatarShopController();

	// Methods
	public void Initialize(AvatarEditModeBodyController editModeBodyController);
	private static MVWorldObjectClient GetWorldObjectFromItemData(AvatarRepositoryItem item);
	public void Activate(UIPushOption pushOption);
	private void UpdateContent();
	private void AddPreviewObjectForIndex(int index);
	private void OnPop();
	public void PageTurned(int dir);
	public void PurchaseAvatar(AvatarRepositoryItem item);
}

